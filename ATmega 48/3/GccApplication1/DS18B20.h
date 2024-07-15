#ifndef DS18B20_H_
#define DS18B20_H_

#include "main.h"

#define NOID 0xCC // SKIP ROM [CCh]
#define T_CONVERT  0x44 // CONVERT T [44h]
#define READ_DATA 0xBE // READ SCRATCHPAD [BEh]

#define PORTTEMP PORTC
#define DDRTEMP DDRC
#define PINTEMP PINC
#define BITTEMP 0

int dt_check(void); //функция преобразования показаний датчика в температуру
char converttemp (unsigned int tt); //преобразование температуры в единицы

#endif /* DS18B20_H_ */