# IoT AutoCar – Obstacle Avoiding and Routing Robot

This repo contains the code for my final lab project in the IoT Devices course at University of Illinois (Coursera).

## 🔧 Hardware Used
- Raspberry Pi 4B
- PiCamera v2
- Ultrasonic Sensor (HC-SR04)
- L298N Motor Driver
- 2 DC motors
- Power bank or battery pack

## 📂 Files

- `main.py` – main execution loop
- `navigation.py` – A* pathfinding and motor movement logic
- `mapping.py` – handles ultrasonic scanning and map updates
- `object_detection.py` – TensorFlow Lite object detection wrapper
- `wiring_diagram.fzz` – Fritzing diagram showing connections

## 🚀 How to Run

1. Install dependencies:
   ```bash
   pip install numpy picamera tensorflow opencv-python
