#include "UART.h"
void setup() {
  // put your setup code here, to run once:
 void UART_init (void);
 while(*UCSR1_A == 0X20){
  *UDR = 0xAA;
 }
}

void loop() {
  // put your main code here, to run repeatedly:

}
