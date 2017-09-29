# Optical Bio Laser Target Angulation

This repo consists all arduino and windows form application for the clamp programmed to angulate target.
It has also got the IGES format files of the componentsthat have been printed for this project.
To install the GUI of the clamp in a PC,

* Copy Application Files, Autorun.inf and the setup.exe file into computer in a single directory.  
* Install the GUI using setup.exe
* Plug Arduino of the clamp to PC
* Go to device manager and check for the COM port of Arduino
* Right click on the Arduino's COM port and go to Properties
* Check Port settings
* Change COM Port to COM10
* Once Arduino is on COM10, Open Clamp.exe
* Use GUI to control position of the motor

### Design Files

* Clamp.iges file consists of the clamp design which holds threded rod of M-12 size and couples it to the motor
* Motor.iges file consists of the holder design which couples the motor to the slider

### Code Files

* servo_gui.ino consists the arduino code for the clamp which is to be uploaded
* Application Files folder consists all build files of the application which need not be tweaked
* Autorun.inf allows computer to select the application files when form is executed
* Clamp.exe is the executable file for the GUI

### Precautions

* Ensure Arduino is on COM10
* Do not put additional weight on clamp over 6kg
* Tweak servo_gui.ino to adjust the mean postion of the servo
