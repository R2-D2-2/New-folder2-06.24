#include "usart.h"

//-------------------------------------------------------------
// Usart

void USART_Init (unsigned int speed) // Settings
{
		UBRR0H = (unsigned char)(speed>>8); // 115200
		UBRR0L = (unsigned char)speed;
		
		UCSR0B |= (1<<RXEN0)|( 1<<TXEN0); // RXENn: Receiver Enable n
		// TXENn: Transmitter Enable n; 
		UCSR0B |= (1<<RXCIE0); // RXCIEn: RX Complete Interrupt Enable n

		// Asynchronous USART; USBSn: Stop Bit Select 1 bit; 
		UCSR0C |= (1<<UCSZ01)|(1<<UCSZ00); // UCSZn Bits Settings/ 8 bit
		sei ();
}

void USART_Transmit (unsigned char data) // Input and output of information
{
	while (!(UCSR0A & (1 << UDRE0)));
	UDR0 = data;
	while (!(UCSR0A & (1 << TXC0)));
	UCSR0A |= (1 << TXC0);
}

void USART_sendLine (unsigned char *string)
{
	while ( *string )
	{
		USART_Transmit(*string);
		string++;
	}
}

ISR (USART_RX_vect) // Handler RX UART0
{
	message  = UDR0; // Save received data
	UCSR0A &= ~(1 << RXC0); // Clear flag receive is over
	UDR0 = message;
}