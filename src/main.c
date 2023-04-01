#include <Arduino.h>
#include "utilities.h"




int main(){

    establishPortIn(PX0,PORT_D, 1);
    establishPortOut(PX0 | PX2, PORT_D);
    int a = 0;
    while(1){
       a = 1+1;
    }
    return 0;
}