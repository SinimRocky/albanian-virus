#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>
#include "qifsha.h"
#include "dingdong.h"
#pragma comment(lib, "winmm.lib")

int main() {

    int r = MessageBox(
        NULL,
        "Hi, I am an Albanian virus but because of poor technology in my country unfortunately I am not able to harm your computer. Please be so kind to delete one of your important files yourself and then forward me to other users. Many thanks for your cooperation! Best regards, Albanian virus.",
        "Virus Alert!",
        MB_ICONERROR | MB_YESNO | MB_DEFBUTTON1
    );

    PlaySound(TEXT("SystemHand"), NULL, SND_ALIAS | SND_ASYNC);

    if (r == IDYES) {
        BOOL ok = PlaySound(
          (LPCSTR)dingdong_wav,
          NULL,
          SND_MEMORY | SND_ASYNC
      );

      if (!ok) {
          MessageBox(NULL, "PlaySound failed", "Error", MB_ICONERROR);
      }

      Sleep(9000);
    } else if (r == IDNO) {
      // Play WAV from memory
      BOOL ok = PlaySound(
          (LPCSTR)qifsha,
          NULL,
          SND_MEMORY | SND_ASYNC
      );

      if (!ok) {
          MessageBox(NULL, "PlaySound failed", "Error", MB_ICONERROR);
      }

      Sleep(8500);
    }

    return 0;
}