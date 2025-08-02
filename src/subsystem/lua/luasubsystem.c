#include "luasubsystem.h"
#include "../../extern/lua/lualib.h"
#include "../../extern/lua/lauxlib.h"
#include "funcdefines.h"



static lua_State* lstate;


STATUS BeginTheLuaSubsystem(){
    lstate = luaL_newstate();
    luaL_openlibs(lstate);
    RegisterFunctions(lstate);
    return SUCCESS;
}

STATUS InterpretLuaScript(const PCHAR filename){
    int status = luaL_dofile(lstate, filename);
    if(status == TRUE){
        return FAILED_TO_INTERPRET_FILE;
    }
    return SUCCESS;
}

STATUS EndTheLuaSubsystem(){
    lua_close(lstate);
    return SUCCESS;
}