#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

int main() {

  int r = MessageBox(
    NULL, 
    "Hi, I am an Albanian virus but because of poor technology in my country unfortunately I am not able to harm your computer. Please be so kind to delete one of your important files yourself and then forward me to other users. Many thanks for your cooperation! Best regards, Albanian virus.",
    "Virus Alert!",
    MB_ICONERROR | MB_YESNOCANCEL | MB_DEFBUTTON1
  );

    PlaySound(TEXT("SystemHand"), NULL, SND_ALIAS | SND_ASYNC);

  return 0;
}
