# Road Runner Security 🚗💨

**Road Runner Security** is an IoT deterrent system designed to protect vehicles from vandalism and theft through real-time monitoring and audio alerts.

## 📌 Project Overview
This project utilizes a **Particle Photon 2** and an **ESP32 Camera** to detect unauthorized access. When a breach is detected via a **Hall Effect sensor**, the system triggers a loud alarm and activates the camera to capture the incident.


| Attribute | Details |
| :--- | :--- |
| **Difficulty** | Intermediate |
| **Status** | Work in Progress 🛠️ |
| **Time to Build** | 7+ Days |

---

## 🛠️ Things

### Hardware
*   **Particle Photon 2:** The main controller (IoT enabled).
*   **ESP32 Camera Module:** For visual monitoring and capturing footage.
*   **Hall Effect Sensor:** Magnetic sensor used to trigger the system when a door or window is opened.
*   **Speaker:** Emits a high-pitched alarm sound.
*   **SparkFun Qwiic Single Relay:** Steps up the 3.3V Photon signal to the 5V required by the camera.
*   **PNP Transistor & Resistors (220Ω, 2.21kΩ):** Circuit management and signal regulation.

### Software & Tools
*   **IDEs:** Arduino IDE, VS Code (Arduino extension).
*   **Fabrication:** Laser Cutter (main enclosure), 3D Printer (sensor housings).
*   **Design:** Adobe Illustrator (vector design for housing).

---

## 📖 Story
After dealing with vehicle vandalism, I developed this system as a functional deterrent. The build process involved:

*   **Custom Enclosures:** Using Adobe Illustrator and a laser cutter to create a secure housing for the main components, plus 3D-printed mounts for the hall effect sensor and camera.
*   **Power Management:** Since the Photon 2 operates at 3.3V, I integrated a relay to provide the necessary 5V power to the ESP32 camera upon activation.
*   **Connectivity:** The system is linked to an online dashboard, allowing for remote monitoring via the internet.

---

## 🔌 Schematics
> **Note:** Ensure you upload your wiring diagram to the repository and link it here.

Key connections involve:
1.  **Hall Effect Sensor** triggering the Photon 2 digital pins.
2.  **Photon 2** activating the relay for the camera.
3.  **PNP Transistor** regulating the speaker alarm.

---

## 💻 Code Logic
The system logic follows this execution flow:

1.  **Monitor:** Poll the Hall Effect sensor state.
2.  **Detect:** If the magnetic field is broken (door opened):
    *   Set **Relay Pin** to `HIGH` (powering the ESP32 camera).
    *   Activate the **Speaker** for the audio deterrent.
    *   Send a notification via the **Particle Cloud**.

---
*Created by [Your Name/GitHub Handle]*
