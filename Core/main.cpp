#include "WinMain.h"

#ifndef STRING_H
    #include "String.h"

#endif // STRING_H

#ifndef IoSTREAM_H
    #include "Iostream.h"

#endif // IoSTREAM_H


#if defined (DEBUG) | defined(_DEBUG)
int tmain(int args, char* argvp[])
{
    UNREFERENCED_PARAMETER(argc);
    UNREFERENCED_PARAMETER(argv);

    //LOGER::Log("Starting the program");

    //Use WinMain Function
    WinMain((HINSTANCE)GetModuleHandle(NULL),0,0 SW_SHOW);
}


#endif // defined

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nCmdShow)
{
    UNREFERENCED_PARAMETER(hInstance);
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(IpCmdLine);
    UNREFERENCED_PARAMETER(nCmdShow);

    //Catch Memory Leaks in Debug Mode

    #if defined (DEBUG) | (_DEBUG)
        HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);

        //Enable run-time memory leak check for debug builds


    #endif // defined
}
