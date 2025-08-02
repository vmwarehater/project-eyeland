#ifndef LUASUBSYSTEM_H_INCLUDED
#define LUASUBSYSTEM_H_INCLUDED





#include "../../typedef.h"





STATUS BeginTheLuaSubsystem();
STATUS EndTheLuaSubsystem();
STATUS InterpretLuaScript(const PCHAR filename);

int poo(const char* poo);





#endif