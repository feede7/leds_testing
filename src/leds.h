#include <stdint.h>
#include <stdbool.h>
void Leds_Create();
void LedOn(int led);
void LedOff(int led);
void LedsLoad(uint16_t load);
void LedOnAll();
void LedOffAll();
bool LedStatus(int led);
