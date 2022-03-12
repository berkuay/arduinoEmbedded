// C++ code
//
int main(void){
  
  DDRD = 0b11110000; //set pins 4 and 7 as output
  PORTD = 0b10000000; //set pin 7 high
  _delay_ms(1000);
  

  
  while(1){
    //PORTD = 0b10000000;
   	PORTD = PORTD | 0b10100000; //set pin 7 high
    _delay_ms(500);
    PORTD = PORTD & 0b10000000;
	_delay_ms(1000);
    PORTD = PORTD | 0b10010000;
    _delay_ms(500);
    
  	
    
  }

}