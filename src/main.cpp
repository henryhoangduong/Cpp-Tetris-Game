#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main(){
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300,600, "raylib Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();
    JBlock jblock= JBlock();
    jblock.Move(4,3);

    while(WindowShouldClose() ==false){
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        jblock.Draw();
        jblock.Move(4,3);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
