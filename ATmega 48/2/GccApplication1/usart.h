#ifndef USART_H_
#define USART_H_

#include "main.h"

void USART_Init( unsigned int speed);
void USART_Transmit( unsigned char data );
void USART_sendLine( unsigned char *string);

unsigned char message;

#endif /* USART_H_ */