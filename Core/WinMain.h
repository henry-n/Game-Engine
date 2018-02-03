#ifndef WINMAIN_H
#define WINMAIN_H

#ifndef WINDOW_
    #include <windows.h>
#endif // WINDOW_

//used for debugging inside console
int tmain(int argc, char* argvp[]);

//make sure console window shows up
int CALLBACK_WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow );


#endif // WINMAIN
