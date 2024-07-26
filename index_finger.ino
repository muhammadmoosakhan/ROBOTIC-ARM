#include <Servo.h>

Servo myServo; // Create a servo object

void setup() {
    myServo.attach(6); // Attach the servo to pin 6
    myServo.write(0); // Move the servo to 0 degrees
    delay(500); // Wait for 0.5 seconds
}

void loop() {
    // Move the servo from 0 to 90 degrees
    for (int angle = 0; angle <= 90; angle++) {
        myServo.write(angle); // Move the servo to the specified angle
        delay(50); // Delay for smooth movement
    }

    delay(10000); // Wait for 10 seconds

    // Move the servo from 90 to 0 degrees
    for (int angle = 90; angle >= 0; angle--) {
        myServo.write(angle); // Move the servo to the specified angle
        delay(50); // Delay for smooth movement
    }

    delay(10000); // Wait for 10 seconds
}
