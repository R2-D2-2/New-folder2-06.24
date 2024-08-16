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
	
	unsigned int tt=0; // ���������� ��� �������� �����������
	port_ini(); // �������������� �����
	
	while(1)
	{
		tt = converttemp(dt_check()); //�������� �����������
		USART_Transmit(tt/10+0x30);//����������� ����� � ��� �����
		USART_Transmit(tt%10+0x30);//����������� ����� � ��� �����
		USART_Transmit('*');
		USART_Transmit('C');
	}
}

