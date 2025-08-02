#include "luasubsystem.h"
#include "../../extern/lua/lualib.h"
#include "../../extern/lua/lauxlib.h"




static lua_State* lstate;






STATUS BeginTheLuaSubsystem(){
    lstate = luaL_newstate();
    luaL_openlibs(lstate);
    
    return SUCCESS;
}

STATUS EndTheLuaSubsystem(){
    return SUCCESS;
}