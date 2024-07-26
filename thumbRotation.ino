#include <Servo.h>

Servo myServo; // Create a servo object

void setup() {
    myServo.attach(5); // Attach the servo to pin 5
    myServo.write(0); // Move the servo to 0 degrees
    delay(500); // Wait for 0.5 seconds
}

void loop() {
    // Move the servo from 0 to 120 degrees
    for (int angle = 0; angle <= 120; angle++) {
        myServo.write(angle); // Move the servo to the specified angle
        delay(50); // Delay for smooth movement
    }

    delay(10000); // Wait for 10 seconds

    // Move the servo from 120 to 0 degrees
    for (int angle = 120; angle >= 0; angle--) {
        myServo.write(angle); // Move the servo to the specified angle
        delay(50); // Delay for smooth movement
    }

    delay(10000); // Wait for 10 seconds
}
