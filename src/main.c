#include "crt/crt.h"
#include <stdio.h>



int main(int argc, char* argv[]){
    char* i = (char*)AllocateMemory(10);
    i[0] = 'h';
    i[1] = '\0';
    puts(i);
    FreeMemory(i, 10);
    // should crash
    puts(i);

}