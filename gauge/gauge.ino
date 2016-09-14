#include <Servo.h>
Servo myservo;
char servodata[3];

void setup() {

  //setting for serials, and data
  Serial.begin(115200);
  servodata[0] =  servodata[1] =  servodata[2] = 0;
  //setting for servo engine
  myservo.attach(5);
  myservo.write(0);

}

void loop() {

  while (Serial.available() > 3) {
    //FIRST 3 BYTE IS SERVO DATA
    servodata[0] = Serial.read();
    servodata[1] = Serial.read();
    servodata[2] = Serial.read();
    Serial.print(servodata[0]);
    Serial.print(servodata[1]);
    Serial.println(servodata[2]);

    //write on servo
    Serial.print(atoi(servodata)); Serial.println("Servo degree");
    myservo.write(atoi(servodata));

    servodata[0] =  servodata[1] =  servodata[2] = 0;

  }


}
