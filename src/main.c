#include <Arduino.h>
#include <util/delay.h>
#include "utilities.h"




int main(){
    configTimerCMR(1, 5, 7812);
    sei();

    establishPortOut(PX2, PORT_D);
    i64 a = 0;
    while(1){
        a++;
    }
    return 0;
}

ISR(TIMER1_COMPA_vect) //Funcion de invocacion del vector de interrupciones (TIMERO en comparacion en nuestro caso)
{
  if(bit_is_clear(PIND, PD2)){
    SET_PIN(PORTD, PD2);
  }else CLEAR_PIN(PORTD, PD2);
}