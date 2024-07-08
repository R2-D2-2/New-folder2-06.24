//-------------------------------------------------------------
// SPI

// DIN <- MOSI
// DOUT -> MISO
// CS <- SS
// SCLK <- SCK

SPCR |= (1<<SPR1); // Fosc/64
SPCR &= ~(1<<SPR0);
SPSR &= ~(1<<SPI2X);

SPCR |= (1<<SPHA); // CPHA: Clock Phase
SPCR |= (1<<CPOL); // CPOL: Clock Polarity
SPCR |= (1<<MSTR); // MSTR: Master/Slave Select
SPCR |= (1<<DORD); // DORD: Data Order

SPCR |= (1<<SPE); // SPE: SPI Enable
SPCR |= (1<<SPIE); // SPIE: SPI Interrupt Enable

//-------------------------------------------------------------
//

DDRC |= (1<<MOSI)|(1<<SCK)|(1<<SS);
DDRC &= ~(1<<MISO);
PORTC |= (1<<SS);

//-------------------------------------------------------------
//

void SPI_Transmit (unsigned char c_data)
{
    SPDR = c_data; // The beginning of the transfer
    while (!(SPSR& (1<<SPIF))); // Waiting for the transfer to complete
}

while (1)
{
    if ()
    {
        SPI_Transmit ();
        _delay_ms (1000);
    }
}