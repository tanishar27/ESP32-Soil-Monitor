# 🌱 ESP32 Smart Soil Moisture Monitoring & Automatic Irrigation System

## 📌 About the Project

The ESP32 Smart Soil Moisture Monitoring and Automatic Irrigation System is an IoT-based project designed to monitor soil moisture levels and automate the watering process.

The system uses an ESP32 microcontroller and a soil moisture sensor to check the moisture level of the soil. Based on the readings, a relay controls the water pump to provide water when the soil becomes dry.

The main goal is to reduce manual watering, save water, and support efficient plant care.

## 🎯 Objectives

- Monitor soil moisture levels using a sensor.
- Automate the plant watering process.
- Control a water pump using an ESP32 and relay module.
- Reduce unnecessary water usage.
- Build a simple and affordable IoT-based irrigation system.

## 🛠️ Technologies & Components

**Hardware:**
- ESP32 Development Board
- Soil Moisture Sensor
- Relay Module
- DC Water Pump (6–12V)
- Jumper Wires
- External Power Supply

**Software:**
- C++
- PlatformIO
- Visual Studio Code
- Arduino Framework

## ⚙️ Working Principle

1. The soil moisture sensor measures the moisture level in the soil.
2. The sensor sends readings to the ESP32.
3. The ESP32 processes the sensor readings.
4. When the soil becomes dry, the ESP32 activates the relay.
5. The relay switches on the water pump.
6. When sufficient moisture is detected, the pump is switched off.

## 🔌 Pin Connections

| Component | ESP32 Pin |
|---|---|
| Soil Moisture Sensor | GPIO 34 |
| Relay IN | GPIO 26 |
| Sensor VCC | As per sensor specification |
| Sensor GND | GND |

**Note:** Connect the pump through a suitably rated relay and external power supply. Do not power the pump directly from the ESP32.

## 📂 Project Structure

```text
ESP32_Soil_Monitor/
│
├── include/
├── lib/
├── src/
│   └── main.cpp
├── test/
├── platformio.ini
└── README.md
```

## 🚀 How to Run

1. Install Visual Studio Code.
2. Install the PlatformIO IDE extension.
3. Open the project folder in VS Code.
4. Connect the ESP32 to your computer.
5. Check the board and upload settings in `platformio.ini`.
6. Build and upload the program using PlatformIO.
7. Open the Serial Monitor to observe sensor readings.

## 🌍 Applications

- Home gardening
- Small-scale agriculture
- Indoor plant monitoring
- Automated irrigation systems
- Smart farming applications

## 🔮 Future Improvements

- IoT-based remote monitoring.
- Mobile application integration.
- Cloud-based moisture data storage.
- Multiple soil moisture sensors.
- Real-time notifications.

## 👩‍💻 Author

**Tanisha Rajpurohit**

B.Tech – Artificial Intelligence and Data Science

- GitHub: https://github.com/tanishar27
- LinkedIn: https://www.linkedin.com/in/tanisharajpurohit/
- X: https://x.com/tanisha_rp_x

---

⭐ If you find this project interesting, consider giving this repository a star!