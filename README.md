TODOOOOOOOO

with [@drougeek](https://github.com/drougeek)

Emulates a keyboard.
What you can do ? Everything you can do with a keyboard. 
You need an Arduino compatible with Keyboard.h :
* Leonardo
* Micro
* Due

This script is used to open a console/terminal, to type commands to download an executable, to hide it a bit, and to launch it.

If you are not using an US keyboard keyboard, it may not emulate the pressing of the key you wanted, but the pressing of an other one. 
You need to change the Keyboard.cpp file of the Keyboard library.
Use [LocaleKeyboard.BAT](https://github.com/BlueArduino20/LocaleKeyboard.BAT) to generate the right Keyboard.cpp file corresponding with your keyboard.
Then change C:\Program Files (x86)\Arduino\libraries\Keyboard\src\Keyboard.cpp with the new generated file.

For Linux you can use [LocaleKeyboard.SH](https://github.com/BlueArduino20/LocaleKeyboard.SH)