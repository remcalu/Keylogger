# Keylogger and Clicklogger

## Author
Remus Calugarescu

## Last Modified
August 27, 2020

## Purpose
Logs keypresses and mouseclicks and then writes them to a log file that gets generated in the same directory

## Instructions
You can simply just run the main.exe but if you wish to compile it yourself you need to have mingw32 installed, the following makefile commands are available
~~~~
mingw32-make main
mingw32-make clean
~~~~

## Notes
To terminate the keylogger run the attached batch file "maintaskkill.bat" which ends the process, or you can just go into task manager yourself and end the main.exe task
