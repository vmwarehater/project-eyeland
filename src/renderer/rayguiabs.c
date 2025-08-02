#include "rayguiabs.h"


#define RAYGUI_IMPLEMENTATION
#include "../extern/raylib/raygui.h"




VOID RGuiButton(Rectangle bounds, const char *text){
    GuiButton(bounds, text);
}