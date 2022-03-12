int main(void){

//DDRD = 0b10000000; //set pin 7 as output
//DDRD = 128;
DDRD = 1<<6; //left shigting 

while(1){

PORTD =0b01000000; //set pin 7 high
_delay_ms(1000);
PORTD =0b00000000;
_delay_ms(1000);

  }
  
}
