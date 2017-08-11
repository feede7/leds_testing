#include "unity.h"
#include "leds.h"

static uint16_t ledsVirtuales;

void setUp(void){
  Leds_Create(&ledsVirtuales);
}

void tearDown(void){

}

void test_LedsOffAfterCreate(void){
  uint16_t ledsVirtuales = 0xFFFF;
  Leds_Create(&ledsVirtuales);
  TEST_ASSERT_EQUAL_HEX16(0,ledsVirtuales);
  //TEST_FAIL_MESSAGE("Empezamos");
}

void test_LedOn(void){
  LedOn(3);
  TEST_ASSERT_EQUAL_HEX16(4,ledsVirtuales);
}

void test_LedOff(void){
  LedOn(4);
  LedOff(4);
  TEST_ASSERT_EQUAL_HEX16(0,ledsVirtuales);
}

void test_LedsLoad(void){
  LedsLoad(0x1234);
  TEST_ASSERT_EQUAL_HEX16(0x1234,ledsVirtuales);
}

void test_LedOnAll(void){
  LedOnAll();
  TEST_ASSERT_EQUAL_HEX16(0xFFFF,ledsVirtuales);
}

void test_LedOffAll(void){
  LedOnAll();
  LedOffAll();
  TEST_ASSERT_EQUAL_HEX16(0x0000,ledsVirtuales);
}

void test_LedStatus(void){
  LedOn(3);
  TEST_ASSERT_EQUAL_HEX16(1,LedStatus(3));
}
