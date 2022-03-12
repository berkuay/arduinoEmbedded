int main(void){

DDRD = 0b10000000; //SET PİN 7 AS OUTPUT
PORTD = 0b00010000; //enable internal pull up on pin 4
  
  
  while(1){
    if(PIND & 0b00010000){ //check if pin 4 is high (button not pushed)
      PORTD &= 0b01111111; // set pin 7 off
      
    }
    else{
    PORTD |= 0b10000000; // set pin 7 on
    }
    
  }
  
  
}