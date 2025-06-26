# 💡 Smart Light Control using IoT

## 🚀 Project Title:
**Design a System to Control an LED Light Using a Microcontroller and a Mobile App**

---

## 📋 Intern Details

- **👨‍💼 Name:** Shaik Javed Ahmed  
- **🎓 Intern ID:** CT04DF594  
- **🏢 Company:** CodTech IT Solutions  
- **🌐 Domain:** Internet of Things  
- **📅 Internship Duration:** 4 Weeks  
- **🧑‍🏫 Mentor:** Neela Santhosh  

---

## 📌 Project Overview

This project demonstrates a **smart lighting system** using **Arduino Uno** (or NodeMCU) and the **Blynk app** to remotely control an LED light. The LED responds instantly to commands sent from a mobile app, representing a simple yet effective IoT automation prototype.

---

## 🔧 Components Required

| Component         | Quantity |
|------------------|----------|
| Arduino Uno or NodeMCU | 1        |
| LED              | 1        |
| 220Ω Resistor    | 1        |
| Blynk App        | 1 (on smartphone) |
| Jumper Wires     | As required |
| USB Cable        | 1        |
| Wi-Fi Connection (if using NodeMCU) | 1 |

---

## 🧩 Circuit Connections (for Arduino Uno)

| Component | Pin         |
|----------|-------------|
| LED +    | Pin 7 (Digital Output) |
| LED -    | GND (via 220Ω resistor) |

---

## 📱 Blynk Setup Instructions

1. Install **Blynk IoT** app from Play Store or App Store.
2. Create a **new project**, select **Device: NodeMCU** or **Arduino Uno (with ESP8266 shield)**.
3. Add a **Button Widget**:
   - Set to Virtual Pin **V0**
   - Mode: **Switch**
4. Copy the **Auth Token** (sent to your email).

---
![Image](https://github.com/user-attachments/assets/f532a292-f639-424c-a128-2ee246998fd9)
## 💻 Arduino Code (`smart_light.ino`)

### ▶ For NodeMCU (WiFi-enabled)

```cpp
#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_TEMPLATE_NAME "SmartLight"
#define BLYNK_AUTH_TOKEN "YourAuthToken"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "YourAuthToken";
char ssid[] = "YourWiFiName";
char pass[] = "YourWiFiPassword";

#define LED_PIN D1

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}

BLYNK_WRITE(V0) {
  int value = param.asInt();
  digitalWrite(LED_PIN, value);
}

void loop() {
  Blynk.run();
}


