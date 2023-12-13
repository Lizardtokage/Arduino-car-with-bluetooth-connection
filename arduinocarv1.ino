/*arduino car*/

char data;

const int inPin[4] = {11,10,9,8};

void setup() {
  Serial.begin(9600);
  for(int i = 0; i < 4; i++ ){
    pinMode(inPin[i],OUTPUT);
  }
}

void loop() {
  if (Serial.available() > 0) {
    char inputvalue = char(Serial.read());
    if (inputvalue == 'w') {
      digitalWrite(in1Pin,LOW);
      digitalWrite(in2Pin,HIGH);
      digitalWrite(in3Pin,LOW);
      digitalWrite(in4Pin,HIGH);
    }
    else if (inputvalue == 's') {
       digitalWrite(in1Pin,HIGH);
       digitalWrite(in2Pin,LOW);
       digitalWrite(in3Pin,HIGH);
       digitalWrite(in4Pin,LOW);
    }

    else if (inputvalue == 'd') {
     digitalWrite(in1Pin,LOW);
     digitalWrite(in2Pin,HIGH);
     digitalWrite(in3Pin,HIGH);
     digitalWrite(in4Pin,LOW);
    }

    else if (inputvalue == 'a') {
     digitalWrite(in1Pin,HIGH);
     digitalWrite(in2Pin,LOW);
     digitalWrite(in3Pin,LOW);
     digitalWrite(in4Pin,HIGH);
    }

    else if (inputvalue == 'C') {
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
    }

    else if (inputvalue == 'A') {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
    }

    else if (inputvalue == 'O') {
      digitalWrite(10, HIGH);
    }

    else if (inputvalue == 's') {
      digitalWrite(1, LOW);
    }

    else if (inputvalue == 'S') {
     digitalWrite(in1Pin,LOW);
     digitalWrite(in2Pin,LOW);
     digitalWrite(in3Pin,LOW);
     digitalWrite(in4Pin,LOW);
    }
  }
}