#include <stdio.h>
//-------------------------------------------------------------
// Timer part 1

TCNT = 0;  

int dot = 0;

//-------------------------------------------------------------
// LED indicator

DDRD = 0xFF;
PORTD = 0b00000001;

//-------------------------------------------------------------
// Symbolic functions

    void F_dot ()
    {
        if (dot == 0)           // Dot
        {
            PORTD = 0b00000001;
        }
        else if (dot == 1)
        {
                PORTD = 0b00000000;
        }
        else (dot > 1)
        {
            dot = 0;
        }
        return 0;
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
        else (dot > 3)
        {
            dot = 0;
        }
        return 0;
    }
//-------------------------
    void F_interval_3 ()
    {
        if (dot < 3)           // interval 3
        {
            PORTD = 0b00000000;
        }
        else (dot > 3)
        {
            dot = 0;
        }
        return 0;
    }
//-------------------------           
    void F_interval_7 ()
    {
        if (dot < 7)           // interval 7
        {
            PORTD = 0b00000000;
        }
        return 0;
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
            TCNT = 0;
            dot = 0;

            F_dot ();
            F_dash ();
            F_interval_3 ();

            break;   
        }
//-------------------------
        case'b':
        {
            TCNT = 0;
            dot = 0;

            F_dot ();
            F_dash ();
            F_interval_3 ();

            break;
        }
//-------------------------
		case'_': 
        {
            TCNT = 0;
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
    if (TCNT == 255)
    {
        dot++;
        TCNT = 0;
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
    return 0;
}