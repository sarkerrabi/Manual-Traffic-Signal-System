//int led_Green = 13;
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
}

void loop()
{
  //For LEFT SIGNAL
if (var == 0)
  {  digitalWrite(led_GREEN_left, HIGH);
     digitalWrite(led_RED_left, LOW);
    digitalWrite(led_RED_down, HIGH);
    digitalWrite(led_RED_right, HIGH);
    digitalWrite(led_RED_up, HIGH);
    delay(3000);
    digitalWrite(led_GREEN_left,LOW);
    digitalWrite(led_YELLOW_left , HIGH);
     var = 1;
    delay(3000);
    digitalWrite(led_YELLOW_left ,LOW);
    digitalWrite(led_RED_left,HIGH);

  }
     //For DOWN SIGNAL
  if (var == 1)
  {  digitalWrite(led_RED_down,LOW);
    digitalWrite(led_GREEN_down, HIGH);
    delay(3000);
    digitalWrite(led_GREEN_down,LOW);
    digitalWrite(led_YELLOW_down, HIGH);
     var = 2;
    delay(3000);
    digitalWrite(led_YELLOW_down,LOW);
    digitalWrite(led_RED_down,HIGH);
  }
    // For RIGHT SIGNAL
  if (var == 2)
  {  digitalWrite(led_RED_right,LOW);
    digitalWrite(led_GREEN_right, HIGH);
    delay(3000);
    digitalWrite(led_GREEN_right,LOW);
    digitalWrite(led_YELLOW_right, HIGH);
     var = 3;
    delay(3000);
    digitalWrite(led_YELLOW_right,LOW);
    digitalWrite(led_RED_right,HIGH);
  }

     // For UP SIGNAL
   if (var == 3)
  {  digitalWrite(led_RED_up,LOW);
    digitalWrite(led_GREEN_up, HIGH);
    delay(3000);
    digitalWrite(led_GREEN_up,LOW);
    digitalWrite(led_YELLOW_up, HIGH);
     var = 0;
    delay(3000);
    digitalWrite(led_YELLOW_up,LOW);
    digitalWrite(led_RED_up,HIGH);
  }
}
