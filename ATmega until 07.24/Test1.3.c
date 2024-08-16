#include <stdio.h>
//-------------------------------------------------------------
// Timer part 1

TCCR1B |= (1<<CS11)|(1<<SC10); // clkI/O/64 (From prescaler) 0.26214c
TCNT1 = 0x0000; 

//-------------------------------------------------------------
// LED indicator

DDRD = 0xFF;
PORTD = 0b00000001;

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
            for (int i = 0; i < 4; i++)
            set_of_points (i);

            break;   
        }
//-------------------------
        case'b':
        {
            set_of_points (3);
            for (int i = 0; i < 4; i++)
            {
                set_of_points (1);
            }
            set_of_points (3);

            break;
        }
//-------------------------
		case'_': 
        {
            set_of_points (4);

            break;
        }
//-------------------------
        default:
        {}
	}
}
//-------------------------------------------------------------
// A set of points

unsigned char num;
unsigned char dot;

void set_of_points (num)
{
	switch (num)
	{
//-------------------------
		case 1:  // Dot
        {   
            TCNT1 = 0x0000;
            dot = 0;
            while (dot == 2)
            {

                if (TCNT1 == 0xFFFF)           
                {
                    dot++;
                }
                
                if (TCNT1 < 1)           
                {
                    PORTD = 0b00000001;
                }
                else if (dot == 1)
                {
                    PORTD = 0b00000000;
                }
                USART_Transmit('.');
            }
            break;
        }
//-------------------------
        case 2:   // Dash
        {
            TCNT1 = 0x0000;
            dot = 0;
            while (dot == 3)
            {

                if (TCNT1 == 0xFFFF)           
                {
                    dot++;
                }
                
                if (dot < 3)           
                {
                    PORTD = 0b00000001;
                }
                else if (dot == 3)
                {
                    PORTD = 0b00000000;
                }
                USART_Transmit('-');
            }
        break;
        }
//-------------------------
		case 3: // interval 3
        {
            TCNT1 = 0x0000;
            dot = 0;

            while (dot == 3)
            {
                
                if (TCNT1 == 0xFFFF)           
                {
                    dot++;
                }

                if (dot < 3)           
                {
                    PORTD = 0b00000000;
                }
                
            }
            break;
        }
//-------------------------
        case 4:  // interval 4
        {
            TCNT1 = 0x0000;
            dot = 0;
            
            while (dot == 4)
            {

                if (TCNT1 == 0xFFFF)           
                {
                    dot++;
                }
                
                if (dot < 4)           
                {
                    PORTD = 0b00000000;
                }
                USART_Transmit('_');
            }
            break;
        }
        default:
        {}
	}
}
//-------------------------

char message;

int main (void)
{   

    USART_Init (8); //115200
	sei();
	USART_Transmit('Enter a message:\n');

//-------------------------

    message = getchar();
    symbols(message);
    getchar(); // Clean buffer
    while(message == '!')
	{
	}
    USART_Transmit('Thanks for the work!:\n');
    return;
}
    