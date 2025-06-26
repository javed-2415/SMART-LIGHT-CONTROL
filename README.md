# Smart Light Control using Arduino & Mobile App
## 📋 Intern Details

- **👨‍💼 Name:** Shaik Javed Ahmed  
- **🎓 Intern ID:** CT04DF594  
- **🏢 Company:** CodTech IT Solutions  
- **🌐 Domain:** Internet of Things  
- **📅 Internship Duration:** 4 Weeks  
- **🧑‍🏫 Mentor:** Neela Santhosh  


## ✅ Description
A simple IoT project that lets you control an LED using a mobile phone via Bluetooth and an Arduino Uno.

## 🔧 Components
- Arduino Uno
- HC-05 Bluetooth Module
- LED
- 220Ω Resistor
- Breadboard & Wires
- Android Phone with Bluetooth Terminal app

## 🔌 How It Works
- The phone sends a signal (`1` or `0`) over Bluetooth.
- Arduino reads the signal and turns the LED ON or OFF.

## 📲 Instructions
1. Upload `led_control.ino` to your Arduino.
2. Connect the HC-05 module to Arduino:
   - TX to RX (pin 0)
   - RX to TX (pin 1)
   - VCC to 5V, GND to GND
3. Connect the LED to pin 13 with a resistor.
4. Use an app like **Serial Bluetooth Terminal**:
   - Send `1` → LED ON
   - Send `0` → LED OFF

## 🏁 Completion
This project is submitted as **Task 1** for the CodTech Internship.

