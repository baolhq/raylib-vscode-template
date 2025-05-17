#include <iostream>
#include <raylib.h>

#include "lib/raylib-cpp.hpp"
#include "inc/constant.h"

using namespace std;

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "raylib [core] example - basic window");
    SetTargetFPS(60);

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
}