# Multi-Purpose-Robot
Hardware components and setup
• L293D Motor driver
• 4x BO Motors
• ESP32 WROOM 32D module
• Ultrasonic Sensors
• Infrared sensors
• Servo Motor
• RGB LEDs
• Push button
• Voltage Regulator(7805)

Features
1.Bluetooth Controlled
2.Object Following
3.Obstacle Avoidance
4.Push Button control of above features
1)Bluetooth Controlled
Wireless Control
Connect your smartphone or 
tablet to the Arduino via 
Bluetooth and take full control 
of the project.
Mobile App
Utilize a custom-built mobile 
app to seamlessly interface 
with the Arduino, enabling 
precise remote operation.
Intuitive Interface
Enjoy an intuitive and 
responsive control interface, 
allowing you to easily navigate 
the project's features.

2)Object Following-
Sensor Integration
Our Arduino project uses 
ultrasonic sensor and 
infrared sensors to detect 
and track nearby objects, 
allowing the robot to 
follow them 
autonomously.
Tracking Algorithm
The object following mode 
employs a sophisticated 
computer vision algorithm 
to continuously monitor 
the position and 
movement of target 
objects.
Directional Control
Powerful motors and 
precise control of IR 
sensors enable our robot 
to dynamically adjust its 
movement to closely 
follow the target object.

3)Obstacle avoidance-
Sensor Monitoring
Our robot constantly scans its 
surroundings using ultrasonic 
sensors, detecting any 
obstacles in its path.
Path Planning
When an obstacle is detected, 
the robot autonomously plans 
an alternate route to navigate 
around it safely.
Emergency Stop
If the robot is unable to safely 
navigate around an obstacle, it 
will reverse its direction


Software architecture and programming
• The programming is done in C/C++ using the 
Arduino IDE.
• Arduino and ESP32 libraries are included to 
simplify sensor integration, motor control, and 
communication protocols.

