#include <stdio.h>
#include "extern/lua/lauxlib.h"
#include "renderer/renderer.h"
#include "subsystem/lua/luasubsystem.h"




int main(int argc, char* argv[]){
    BeginTheLuaSubsystem();
    BeginRendererThread();
    InterpretLuaScript("tests/test1.lua");
    while(1){continue;};
    EndTheLuaSubsystem();
}