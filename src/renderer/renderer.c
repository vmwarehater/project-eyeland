#include "../extern/raylib/raylib.h"
#include "../extern/tinycthread/tinycthread.h"
#include "renderer.h"


static thrd_t rendthread;

INT RendererThread(PVOID thread){
    

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    SetTraceLogLevel(LOG_ERROR);
    InitWindow(800, 600, "Project-Eyeland");

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);
       
        EndDrawing();
    }
    CloseWindow();
    return 0;
}


VOID BeginRendererThread(){
    thrd_create(&rendthread, RendererThread, NULL);
}

VOID CloseRendererThread(){
    
}