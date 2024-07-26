#include <Servo.h>

Servo myServo; // Create a servo object

void setup() {
    myServo.attach(9); // Attach the servo to pin 9
    myServo.write(0); // Move the servo to 0 degrees
    delay(500); // Wait for 0.5 seconds
}

void loop() {
    // Move the servo from 0 to 130 degrees
    for (int angle = 0; angle <= 130; angle++) {
        myServo.write(angle); // Move the servo to the specified angle
        delay(50); // Delay for smooth movement
    }

    delay(10000); // Wait for 10 seconds

    // Move the servo from 130 to 0 degrees
    for (int angle = 130; angle >= 0; angle--) {
        myServo.write(angle); // Move the servo to the specified angle
        delay(50); // Delay for smooth movement
    }

    delay(10000); // Wait for 10 seconds
}
