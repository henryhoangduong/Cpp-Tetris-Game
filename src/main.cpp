#include <raylib.h>
#include "grid.h"
#include "game.h"
int main(){
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300,600, "raylib Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    Game game = Game();
    while(WindowShouldClose() ==false){
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
