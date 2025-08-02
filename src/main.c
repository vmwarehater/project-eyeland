#include <stdio.h>
#include "extern/lua/lauxlib.h"
#include "subsystem/lua/luasubsystem.h"




int main(int argc, char* argv[]){
    BeginTheLuaSubsystem();

    InterpretLuaScript("tests/test1.lua");

    EndTheLuaSubsystem();
}