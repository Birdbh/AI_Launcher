#include <Servo.h>
#include <Stepper.h>

Servo myservo;  // create servo object to control a servo

const int stepsPerRevolution = 2038;// Defines the number of steps per rotation

int pos = 0;    // variable to store the servo position

// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myservo.attach(7);  // attaches the servo on pin 9 to the servo object
}

// myservo.write(40); 
  // while(true);

void loop() {
  myStepper.setSpeed(10);
	myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  //myStepper.setSpeed(0);
  delay(1500);
  myservo.write(170); 

  myStepper.setSpeed(10);
	myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
	delay(500);
  myservo.write(50);

	// // Rotate CW slowly at 5 RPM
	// myStepper.setSpeed(5);
	// myStepper.step(stepsPerRevolution);
	// delay(2000);
	
	while(true){
    delay(5000);
  }
}