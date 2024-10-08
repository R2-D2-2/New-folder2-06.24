#include <stdio.h>
//-------------------------------------------------------------
// Timer part 1

TCCR1B |= (1<<CS11)|(1<<SC10); // clkI/O/64 (From prescaler)
TCNT1 = 0x0000;  

int dot = 0;

//-------------------------------------------------------------
// LED indicator

DDRD = 0xFF;
PORTD = 0b00000001;

//-------------------------------------------------------------
// Symbolic functions

    void F_dot ()
    {
        if (dot < 1)           // Dot
        {
            PORTD = 0b00000001;
        }
        else if (dot == 1)
        {
            PORTD = 0b00000000;
        }
        else
        {
            dot = 0;
        }
        return;
    }          
//-------------------------
    void F_dash ()
    {
        if (dot < 3)           // Dash
        {
            PORTD = 0b00000001;
        }
        else if (dot == 3)
        {
            PORTD = 0b00000000;
        }
        else
        {
            dot = 0;
        }
        return;
    }
//-------------------------
    void F_interval_3 ()
    {
        if (dot < 3)           // interval 3
        {
            PORTD = 0b00000000;
        }
        else
        {
            dot = 0;
        }
        return;
    }
//-------------------------           
    void F_interval_7 ()
    {
        if (dot < 7)           // interval 7
        {
            PORTD = 0b00000000;
        }
        return;
    }
//-------------------------------------------------------------
// Symbols set

void symbols (message)
{
    message == 'a' || message == 'A';
    message == 'b' || message == 'B';

	switch (message)
	{
//-------------------------
		case'a':
        {   
            TCNT1 = 0x0000;
            dot = 0;

            F_dot ();
            F_dash ();
            F_interval_3 ();

            break;   
        }
//-------------------------
        case'b':
        {
            TCNT1 = 0x0000;
            dot = 0;

            F_dot ();
            F_dash ();
            F_interval_3 ();

            break;
        }
//-------------------------
		case'_': 
        {
            TCNT1 = 0x0000;
            dot = 0;
            
            F_interval_7 ();

            break;
        }
//-------------------------
        default:
        {
            PORTD = 0b00000000;
        }
	}
}
//-------------------------------------------------------------

char message;

int main (void)
{   

    USART_Init (8); //115200
	sei();
	USART_Transmit('Enter a message:\n');

//-------------------------
// Timer part 2

while (message != '!')
{
    if (TCNT1 = 0xFFFF)
    {
        dot++;
    }
    if (dot > 7)
    {
        dot = 0;
    }

    message = getchar();
    symbols(message);
    getchar(); // Clean buffer
}
    USART_Transmit('Good bye!\n');
    return;
}