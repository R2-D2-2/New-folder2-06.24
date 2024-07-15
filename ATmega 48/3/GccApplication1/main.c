/*
 * GccApplication1.c
 *
 * Created: 12.07.2024 20:52:55
 * Author : Andrey
 */ 

#include "main.h"

void port_ini(void)
{	
	DDRB = 0xFF;
	PORTB = 0x00;
}

int main(void)
{
	
	USART_Init (8); //115200
	sei();
	
	unsigned int tt=0; // Переменная для хранения температуры
	port_ini(); // Инициализируем порты
	
	while(1)
	{
		tt = converttemp(dt_check()); //измеряем температуру
		USART_Transmit(tt/10+0x30);//Преобразуем число в код числа
		USART_Transmit(tt%10+0x30);//Преобразуем число в код числа
		USART_Transmit('*');
		USART_Transmit('C');
	}
}

