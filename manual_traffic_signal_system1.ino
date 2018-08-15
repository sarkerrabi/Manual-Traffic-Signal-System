
int var = 0;  // variable

//GREEN
int led_GREEN_left = 2;
int led_GREEN_down = 8;
int led_GREEN_right = 11;
int led_GREEN_up = 5;

//YELLOW
int led_YELLOW_left = A1;
int led_YELLOW_down = 7;
int led_YELLOW_right = 10;
int led_YELLOW_up = 4;

//RED
int led_RED_left = A0;
int led_RED_down = 6;
int led_RED_right = 9;
int led_RED_up = 3;

//BUTTONS
int button_left = 12;
int button_right = A2;

int counter =0;
//int left=0,right =0,up=0,down=0;


int state = HIGH;      // the current state of the output pin
int reading;           // the current reading from the input pin
int previous = LOW;    // the previous reading from the input pin

// the follow variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long time = 0;         // the last time the output pin was toggled
long debounce = 200;   // the debounce time, increase if the output flickers

int state1 = HIGH;      // the current state of the output pin
int reading1;           // the current reading from the input pin
int previous1 = LOW;    // the previous reading from the input pin

// the follow variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long time1 = 0;         // the last time the output pin was toggled
long debounce1 = 200;   // the debounce time, increase if the output flickers




void setup()  {

  pinMode(led_RED_left, OUTPUT);
  pinMode(led_YELLOW_left , OUTPUT);
  pinMode(led_GREEN_left, OUTPUT);

  pinMode(led_RED_down, OUTPUT);
  pinMode(led_YELLOW_down, OUTPUT);
  pinMode(led_GREEN_down, OUTPUT);

  pinMode(led_RED_right, OUTPUT);
  pinMode(led_YELLOW_right, OUTPUT);
  pinMode(led_GREEN_right, OUTPUT);

  pinMode(led_RED_up, OUTPUT);
  pinMode(led_YELLOW_up, OUTPUT);
  pinMode(led_GREEN_up, OUTPUT);

  pinMode(button_left, INPUT);
  pinMode(button_right, INPUT);
  Serial.begin(9600);


  digitalWrite(button_left,HIGH);
  digitalWrite(button_right,HIGH);

  digitalWrite(led_RED_left, HIGH);
  digitalWrite(led_YELLOW_left , LOW);
  digitalWrite(led_GREEN_left, LOW);

  digitalWrite(led_RED_down, HIGH);
  digitalWrite(led_YELLOW_down, LOW);
  digitalWrite(led_GREEN_down, LOW);

  digitalWrite(led_RED_right, HIGH);
  digitalWrite(led_YELLOW_right, LOW);
  digitalWrite(led_GREEN_right, LOW);

  digitalWrite(led_RED_up, LOW);
  digitalWrite(led_YELLOW_up, LOW);
  digitalWrite(led_GREEN_up, HIGH);





}
void loop()
{
  reading = digitalRead(button_left);
  reading1 = digitalRead(button_right);
//
  if (reading == HIGH && previous == LOW && millis() - time > debounce) {
    if (state == HIGH){
      digitalWrite(led_YELLOW_up, HIGH);
      digitalWrite(led_YELLOW_down, HIGH);
      digitalWrite(led_YELLOW_right, HIGH);
      digitalWrite(led_YELLOW_left, HIGH);   
  		delay(100);               
      digitalWrite(led_YELLOW_up, LOW);
      digitalWrite(led_YELLOW_down, LOW);
      digitalWrite(led_YELLOW_right, LOW);
      digitalWrite(led_YELLOW_left, LOW);    
  		delay(100);              

      state = LOW;
    }else{
      digitalWrite(led_YELLOW_up, HIGH);
      digitalWrite(led_YELLOW_down, HIGH);
      digitalWrite(led_YELLOW_right, HIGH);
      digitalWrite(led_YELLOW_left, HIGH);   
      delay(100);               
      digitalWrite(led_YELLOW_up, LOW);
      digitalWrite(led_YELLOW_down, LOW);
      digitalWrite(led_YELLOW_right, LOW);
      digitalWrite(led_YELLOW_left, LOW);    
      delay(100); 
      state = HIGH;
    }

    time = millis();
  }else if (reading1 == HIGH && previous1 == LOW && millis() - time1 > debounce1) {
    if (state1 == HIGH){
      digitalWrite(led_YELLOW_up, HIGH);
      digitalWrite(led_YELLOW_down, HIGH);
      digitalWrite(led_YELLOW_right, HIGH);
      digitalWrite(led_YELLOW_left, HIGH);   
      delay(100);               
      digitalWrite(led_YELLOW_up, LOW);
      digitalWrite(led_YELLOW_down, LOW);
      digitalWrite(led_YELLOW_right, LOW);
      digitalWrite(led_YELLOW_left, LOW);    
      delay(100); 
      
      state1 = LOW;            
    }else{
      digitalWrite(led_YELLOW_up, HIGH);
      digitalWrite(led_YELLOW_down, HIGH);
      digitalWrite(led_YELLOW_right, HIGH);
      digitalWrite(led_YELLOW_left, HIGH);   
      delay(100);               
      digitalWrite(led_YELLOW_up, LOW);
      digitalWrite(led_YELLOW_down, LOW);
      digitalWrite(led_YELLOW_right, LOW);
      digitalWrite(led_YELLOW_left, LOW);    
      delay(100); 
      state1 = HIGH;
      
    }

    time1 = millis();
  }





  if(state == LOW && state1 == LOW){

    left_RED_t0_GREEN();

  }else if(state == LOW && state1 == HIGH ) {

    down_RED_t0_GREEN();

  }else if(state == HIGH && state1 == LOW ) {

    right_RED_t0_GREEN();

  }else if(state == HIGH && state1 == HIGH ) {

    up_RED_t0_GREEN();

  }

  previous = reading;
  previous1 = reading1;
//





}
void left_GREEN_t0_RED(){

    // left_RED=1;
    digitalWrite(led_RED_left, HIGH);

    // left_GREEN=0;
    digitalWrite(led_GREEN_left,LOW);

    }
void left_RED_t0_GREEN(){

    // left_RED=0;
    digitalWrite(led_RED_left,LOW);

    up_GREEN_t0_RED();
    down_GREEN_t0_RED();
    right_GREEN_t0_RED();

    // left_GREEN=1;
    digitalWrite(led_GREEN_left,HIGH);

    }


void right_GREEN_t0_RED(){

    // right_RED=1;
    digitalWrite(led_RED_right, HIGH);

    // right_GREEN=0;
    digitalWrite(led_GREEN_right,LOW);

    }
void right_RED_t0_GREEN(){

    // right_RED=0;
    digitalWrite(led_RED_right, LOW);


    up_GREEN_t0_RED();
    down_GREEN_t0_RED();
    left_GREEN_t0_RED();


    // right_GREEN=1;
    digitalWrite(led_GREEN_right, HIGH);
    }

void up_GREEN_t0_RED(){

    // up_RED=1;
    digitalWrite(led_RED_up, HIGH);

    // up_GREEN=0;
    digitalWrite(led_GREEN_up, LOW);

    }
void up_RED_t0_GREEN(){

    // up_RED=0;
    digitalWrite(led_RED_up, LOW);

    right_GREEN_t0_RED();
    down_GREEN_t0_RED();
    left_GREEN_t0_RED();


    // up_GREEN=1;
    digitalWrite(led_GREEN_up, HIGH);
    }

void down_GREEN_t0_RED(){

    // down_RED=1;
    digitalWrite(led_RED_down, HIGH);


    // down_GREEN=0;
    digitalWrite(led_GREEN_down, LOW);

    }
void down_RED_t0_GREEN(){

    // down_RED=0;
    digitalWrite(led_RED_down, LOW);

    up_GREEN_t0_RED();
    right_GREEN_t0_RED();
    left_GREEN_t0_RED();


    // down_GREEN=1;
    digitalWrite(led_GREEN_down, HIGH);
    }
