#ifndef IOSTREAM_H
#define IOSTREAM_H

//C Runtime Header Files
#ifndef IOSTREAM
    #include <iostream>
#endif // IOSTREAM

//Defines
#ifndef UNICODE
#define tcout wcout

#else
#define tcout cout
#define tcin cin

#endif // UNICODE

#endif // IOSTREAM_H
