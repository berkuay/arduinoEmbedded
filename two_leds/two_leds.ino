// C++ code
//
int main(void){
  
  DDRD = 0b10010000; //set pins 4 and 7 as output
  PORTD = 0b00010000; //set pin 4 high
  _delay_ms(1000);
  

  
  while(1){
    //PORTD = 0b10000000;
   	PORTD = 0b00010000 | 0b10000000; //set pin 7 high
    _delay_ms(1000);
    //PORTD = 0b00000000;
    PORTD = 0b10010000 & 0b01111111; //set pin 7 low, 4 high
    _delay_ms(1000);
    PORTD = PORTD ^ 0b11111111; //set pin 4 low
    _delay_ms(1000);

    
  
    
  }

}