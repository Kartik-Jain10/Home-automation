# Home-automation
**Overview**
This project is a comprehensive home automation system designed to control home appliances through voice commands using Google Assistant. The system leverages the ESP32 microcontroller, Blynk IoT Cloud, and IFTTT services to provide an intuitive and efficient automation solution.

**Technologies Used**
-Microcontroller: ESP32
-IoT Platform: Blynk IoT Cloud
-Voice Command Integration: Google Assistant
-Automation Services: IFTTT (Webhooks and Google Assistant)
-Hardware: Relay Module
**Features**
-Voice Control: Hands-free control of home appliances using Google Assistant.
-IoT Integration: Management and monitoring of ESP32 pins through Blynk IoT Cloud virtual pins.
-Automation: IFTTT services used to connect Blynk virtual pins to Google Assistant commands.
-Hardware Implementation: Relay module for controlling the on/off state of home appliances.
**Project Components**
**Hardware**
-ESP32 Microcontroller: The brain of the system, handling all the operations and communication.
-Relay Module: Used to control home appliances.
-Power Supply: Ensures the ESP32 and relay module are powered.
**Software**
-Blynk IoT Cloud: For connecting and managing ESP32 pins through virtual pins.
-IFTTT: For creating applets that link Google Assistant commands to Blynk virtual pins using webhooks.
-Arduino IDE: For programming the ESP32.
-Setup and Installation
**Hardware Setup**
-Connect the ESP32 to your computer and upload the code using Arduino IDE.
-Connect the relay module to the ESP32 as per the pin configuration.
-Ensure the relay module is connected to the home appliances you wish to control.
**Software Setup**
**Blynk IoT Cloud:**
Create a new project and add virtual pins for each appliance.
Obtain the authentication token.
**IFTTT:**
Create new applets with Google Assistant as the trigger.
Use webhooks as the action to link Google Assistant commands to Blynk virtual pins.
**Arduino IDE:**
Install the necessary libraries (Blynk, WiFi, etc.).
Upload the provided code to the ESP32, ensuring you input your Blynk authentication token, WiFi credentials, and virtual pin configuration.
