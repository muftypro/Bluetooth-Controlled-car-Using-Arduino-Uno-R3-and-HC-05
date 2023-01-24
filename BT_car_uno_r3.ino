//t.me/muftypro

int motor1_Back = 8, motor1 = 7, motor2 = 2, motor2_Back = 4;

int command;

void setup() {

  pinMode(motor1, OUTPUT);
  pinMode(motor1_Back, OUTPUT);

  pinMode(motor2, OUTPUT);
  pinMode(motor2_Back, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    Serial.print("command=");
    Serial.println(command);

    if (command == 82) {      //right turn  //left motor HIGH/ON
      digitalWrite(motor1, HIGH);
      digitalWrite(motor1_Back, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor2_Back, LOW);
    }



    if (command == 76) {      //left turn //right motor HIGH/ON
      digitalWrite(motor1, LOW);
      digitalWrite(motor1_Back, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor2_Back, LOW);
    }

   if (command == 70) {   //Towards
      digitalWrite(motor1, HIGH);
      digitalWrite(motor1_Back, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor2_Back, LOW);
    }

       if (command == 66) {   //Backwards
      digitalWrite(motor1, LOW);
      digitalWrite(motor1_Back, HIGH);
      digitalWrite(motor2, LOW);
      digitalWrite(motor2_Back, HIGH);
    }


    if (command == 83) {  //Stop
      digitalWrite(motor1, LOW);
      digitalWrite(motor1_Back, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor2_Back, LOW);
    }
  }
}