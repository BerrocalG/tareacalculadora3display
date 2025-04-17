//base para tarea 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main (void){


  DDRB|=0X0F;//salidas b9 b10 b11
  DDRD|=0X0C; //d2 d3
  PORTD&=~0x0c; //empiece en 00 para catodo
 
  while (1){
 
    PORTD&=~0X08; //desactivo d3
    PORTD|=0X04; //activo d2
    PORTB|=0X06; //mandoel 6
    PORTB&=0xF6;


  _delay_ms(1000);


    PORTD&=~0X04; //activo d3
    PORTD|=0X08; //desactivo d2
    PORTB|=0X07; //mando el 7
    PORTB&=0xF7;
    _delay_ms(1000);




}
}
