TODOOOOOOOO
Emulates a keyboard.
Script used to download a script and to launch it
You need an Arduino compatible with Keyboard.h :
* Leonardo
* Micro
* Due

If you don't use a qwerty keyboard, use https://github.com/BlueArduino20/LocaleKeyboard.BAT to generate the right file Keyboard.cpp.
Then change C:\Program Files (x86)\Arduino\libraries\Keyboard\src\Keyboard.cpp with the new file generated.