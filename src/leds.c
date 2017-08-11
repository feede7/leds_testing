#include "leds.h"

static uint16_t *pleds;
void Leds_Create(uint16_t *leds){
  pleds = leds;
  *pleds = 0x0000;
}

void LedOn(int led){
  // if(validar(led))
    *pleds |= (1 << (led-1));
}

void LedOff(int led){
  *pleds &= ~(1 << (led-1));
}

void LedsLoad(uint16_t load){
  *pleds = load;
}

void LedOnAll(){
  *pleds = 0xFFFF;
}

void LedOffAll(){
  *pleds = 0x0000;
}

bool LedStatus(int led){
   return (bool) (*pleds & (1 << (led-1)));
 }
