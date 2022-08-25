# 🪐 Raspberry-pi-extension

This repositoy is the basic introductory for getting started with Embeded sytems that involves communication between Raspbery pi and Arduino.
The solution includes a project example on Arduino side and Raspberry Pi Side where we connect them using both pyserial and pyfirmata libraries.

![RPi Arduino-Extension](https://user-images.githubusercontent.com/88959075/186722895-67ee5b5e-be8c-41da-9a63-2b881fc0ff12.jpg)

# WHY PUT THEM TOGETHER?
The purpose of this Extension is to make best use of both world.
We can easily access the GPIO pins on connected Arduino, just like they are on Raspberry Pi; accept analog input and generate accurate PWM output via the GPIO pins on Arduino.  It is also possible to make use of the shields for Arduino, indirectly on Raspberry Pi.

There are some factors that limit the usage of Raspberry Pi in many scenarios.

Raspberry Pi is a mini functioning computer that runs with Linux .  It is very easy to connect Raspberry Pi to the internet and make it a real server.  Many USB devices are compatible with Raspberry Pi and can work without installing the driver.  Raspberry Pi provides up to 17 GPIO pins for programming, however that’s usually not enough if you plan to build a serious project: making a simple digital clock could use up all of the GPIO pins.  

What’s more, Raspberry Pi could not accept analog input via the GPIO pins, and has only one pin that could output PWM with hardware.

Arduino is run with predefined program to process input/output on its GPIO pins.  Better than Raspberry Pi, Arduino has some GPIO pins that could accept analog input, and has several (usually 6) GPIO pins that could generate PWM output with hardware.  There are many well designed shields for Arduino, which could extend Arduino to do specific job. 
And sadly Usually Arduino doesn’t have network connection, and could not work as USB host.



# Supportive Micro-Controllers

Read more about these boards.
https://www.raspberrypi.org/


https://www.arduino.cc/


This idea may work fine with many com

# IOT DEVELOPMENT
The Internet of Things (IoT) describes the network of physical objects—“things”—that are embedded with sensors, software, and other technologies for the purpose of connecting and exchanging data with other devices and systems over the internet.
![What-is-IOT](https://user-images.githubusercontent.com/88959075/186719390-8f8edf68-4104-4009-823e-9ce07635c6b9.png)

