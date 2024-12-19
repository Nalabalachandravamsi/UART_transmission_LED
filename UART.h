void UART_init (void);

volatile char *UCSR1_A = 0XC8;
volatile char *UDR = 0xCE;

void UART_init (void){
   
  volatile char *UCSR1_B = 0XC9;
  //volatile char *UCSR1_A = 0XC8;
  volatile char *UCSR1_C = 0XCA;
  //volatile char *UDR = 0xCE;
  *UCSR1_B = 0x68;
  *UCSR1_A = 0X00;
  *UCSR1_C = 0X06;
  
}
