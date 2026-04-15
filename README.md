Road Runner Security 🚗💨
Road Runner Security is a smart deterrent system designed to protect vehicles from vandalism and theft through real-time monitoring and aggressive audio alerts. By combining IoT connectivity with localized sensors, it ensures you’re notified the moment your vehicle is tampered with. 
📌 Overview
This project leverages the Particle Photon 2 and an ESP32 Camera to create a dual-layered security response. When a breach is detected via a magnetic Hall Effect sensor, the system instantly triggers a high-pitched alarm and powers on the camera to capture the incident. 
Difficulty: Intermediate
Status: Work in Progress 🛠️
Build Time: 7+ Days
🛠️ Components
Hardware
Particle Photon 2: The brain of the operation (IoT enabled).
ESP32 Camera Module: Captures visual evidence during a breach.
Hall Effect Sensor: Magnetic trigger for doors or windows.
Speaker: Emits a high-decibel deterrent alarm.
SparkFun Qwiic Single Relay: Steps up the 3.3V Photon signal to 5V for the camera.
PNP Transistor & Resistors (220Ω, 2.21kΩ): Used for circuit regulation and speaker signal management. 
Software & Tools
IDEs: Arduino IDE, VS Code (with Arduino extension).
Fabrication: Laser Cutter (enclosure), 3D Printer (sensor mounts).
Design: Adobe Illustrator.
📖 The Story
After experiencing vehicle vandalism firsthand, I built Road Runner Security as a functional, proactive deterrent. The development focused on three pillars:
Custom Fabrication: I used Adobe Illustrator and a laser cutter for the main housing, while 3D printing custom mounts to ensure the Hall Effect sensor and camera sit flush against vehicle trim.
Power Logic: Since the Photon 2 operates on 3.3V, I integrated a relay to "gate" the 5V power required by the ESP32 camera, ensuring it only draws power during an active alert.
Cloud Connectivity: The system syncs with an online dashboard for remote monitoring and real-time status updates. 
🔌 Schematics
Note: Insert your wiring diagram image here.
Key Connections:
Input: Hall Effect sensor connects to Photon 2 Digital Pins.
Relay: Triggered by the Photon to provide 5V to the ESP32 Cam.
Audio: PNP Transistor manages the high-current draw for the speaker alarm. 
💻 Code Logic
The system follows a straightforward but effective logic flow:
Monitor: Continuously polls the state of the Hall Effect sensor.
Detect: If the magnetic field is broken (door/window opened):
Set Relay Pin to HIGH (Booting the ESP32 Camera).
Trigger Speaker Pin (Pulsing the alarm).
Publish an event to the Particle Cloud for mobile notification.
