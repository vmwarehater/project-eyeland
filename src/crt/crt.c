#include "crt.h"


#ifdef _WIN32
#include <Windows.h>
#elif  __linux__
#include <sys/mman.h>
#endif







PVOID AllocateMemory(SIZE_T size){  
    #ifdef _WIN32
    return VirtualAlloc(NULL, size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    #elif  __linux__
    PVOID mem = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if(mem == (void*)-1){
        return NULL;
    } else return mem;
    #endif
}

void FreeMemory(PVOID mem, SIZE_T size){  
    #ifdef _WIN32
    VirtualFree(mem, 0, MEM_RELEASE);
    #elif  __linux__
    munmap(mem, size);
    #endif
}