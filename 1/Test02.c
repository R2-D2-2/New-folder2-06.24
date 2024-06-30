#define F_CPU 8000000
#include <avr/io.h>

int main(void)
{
	DDRD = 0xFF;
	PORTD = 0b00000000;
	while(1)
	{
		PORTD |= (1<<(PORTD0));
		_delay_ms(500);
		PORTD &= ~(1<<(PORTD0));
		_delay_ms(500);
	}
}

#define F_CPU 8000000
#include <stdio.h>

int main(void)
{
	DDRD = 0xFF;

	while(1)
	{
		PORTD = 0b00000001;
		_delay_ms(500);
		PORTD = 0b00000000;
		_delay_ms(500);
        PORTD = 0b00000010;
		_delay_ms(500);
        PORTD = 0b00000000;
		_delay_ms(500);
	}
}