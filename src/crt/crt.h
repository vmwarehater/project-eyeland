#ifndef CRT_H_INCLUDED
#define CRT_H_INCLUDED









#ifndef _WIN32
#include "../typedef.h"
#else
#include <Windows.h>
#endif


PVOID AllocateMemory(SIZE_T size);
void FreeMemory(PVOID mem, SIZE_T size);








#endif