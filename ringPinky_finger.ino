#include <Servo.h>
#ring and pinky fingers move together. one motor controls both fingers u can do seprate it according to your preference.
Servo myServo; // Create a servo object

void setup() {
    myServo.attach(10); // Attach the servo to pin 10
    myServo.write(0); // Move the servo to 0 degrees
    delay(500); // Wait for 0.5 seconds
}

void loop() {
    // Move the servo from 0 to 135 degrees
    for (int angle = 0; angle <= 135; angle++) {
        myServo.write(angle); // Move the servo to the specified angle
        delay(50); // Delay for smooth movement
    }

    delay(10000); // Wait for 10 seconds

    // Move the servo from 135 to 0 degrees
    for (int angle = 135; angle >= 0; angle--) {
        myServo.write(angle); // Move the servo to the specified angle
        delay(50); // Delay for smooth movement
    }

    delay(10000); // Wait for 10 seconds
}
