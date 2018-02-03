#ifndef STRING_H
#define STRING_H

//C Runtime Header Files
#ifndef TCHAR_INC_
#include <tchar.h>
#endif // TCHAR_INC
#ifndef STRING_
#include<string>
#endif // STRING_H

//Defines
#ifdef UNICODE
    #define tstring wstring
    #define TOSTRING(value) std::to_wstring(value)
#else

    #define tstring string
    #define TOSTRING(value) std::to_string(value)
#endif // UNICODE

#endif // STRING_H
