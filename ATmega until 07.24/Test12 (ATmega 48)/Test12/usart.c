#include "usart.h"

void USART_Init( unsigned int ubrr)//
{
		// USART 115200
		UBRRH = (unsigned char)(ubrr>>8);
		UBRRL = (unsigned char)ubrr;
		
		UCSRB=(1<<RXEN)|( 1<<TXEN); 
		UCSRB |= (1<<RXCIE); 
		UCSRA |= (1<<U2X); 
		UCSRC = (1<<URSEL)|(1<<USBS)|(1<<UCSZ1)|(1<<UCSZ0);
}

void USART_Transmit( unsigned char data )
{
	while ( !(UCSRA & (1<<UDRE)) );
	UDR = data;
}