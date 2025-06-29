#include "raylib.h"

int main() {
    InitWindow(800, 600, "Hello World!!");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Raylib C++ VScode Template - Shanmukha", 200, 300, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}