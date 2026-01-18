# Sundial

Sundial detects light and controls a servo motor and it was done while I was participating in Open Project Space by IEEE. In this project, the servo motor acts as a pointer to point to the sun or moon in a spectrum. This project uses a photoresistor, ESP32 microcontroller, and a resistor. The photoresistor and resistor are connected in series and the input pin of the microcontroller is in between the regular resistor and photoresisotr. This allows the microcontroller to detected the voltage across the photoresistor and change its output pin controlling the servo motor.

---

Demo
(Optional) Link to live demo or screenshots.
[Sundial.zip](https://github.com/user-attachments/files/24698790/Sundial.zip)

---

Tech Stack
- Ardunio IDE
- ESP32Servo.h library
