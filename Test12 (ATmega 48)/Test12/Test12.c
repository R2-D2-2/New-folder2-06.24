#include "main.h"
//----------------------------------------
void port_ini(void)
{
	PORTD=0x00;
	DDRD=0xFF;
}
//----------------------------------------
ISR(USART_RXC_vect)
{
	
}
//----------------------------------------
int main(void)
{
	USART_Init (8); //115200
	sei();
	USART_Transmit('LED Menu\n'); // We transmit it when you turn it on
	USART_Transmit('\n');
	USART_Transmit('Red\n Blue\n Green\n');
	while(1)
	{
	}
}