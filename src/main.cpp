#include "raylib.h"

int main()
{
    InitWindow(1280, 720, "My first window in Raylib!");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(DARKGRAY);
            DrawText("Hello world!", 40, 40, 50, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}