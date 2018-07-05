int led_Green = 13;
int led_Yellow = 12;
int led_Red = 11;
int on_off = 7;
boolean on = false;
void setup(){
	pinMode(led_Green, OUTPUT);
  	pinMode(led_Yellow, OUTPUT);
  	pinMode(led_Red, OUTPUT);
  	pinMode(on_off, INPUT);
  
}
void loop(){
  
  if(digitalRead(on_off)==HIGH){
    if(on==true){
      on=false;
    }else{
      on= true;
    }

  }
  
  if(on == true){
  	digitalWrite(led_Green, HIGH);
	delay(100);
	digitalWrite(led_Yellow, HIGH);
	delay(100);
  	digitalWrite(led_Red, HIGH);
	delay(100);
  }else{
	
	digitalWrite(led_Green, LOW);
	delay(100);
	digitalWrite(led_Yellow, LOW);
	delay(100);
  	digitalWrite(led_Red, LOW);
	delay(100);
  }
}