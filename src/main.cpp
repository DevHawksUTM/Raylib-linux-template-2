#include <raylib.h> // Include the raylib library header file
#include "example_functions.h" // Include example_functions header file

using namespace std;

int main(){

    InitWindow(600, 400, "Test window"); // Create the window instance
    SetTargetFPS(60); // 60 FPS

    // 
    float x = 0;
    float y = 0;

    while(!WindowShouldClose()){ // While the window remains open

        BeginDrawing();// Being drawing sequence

            ClearBackground(SKYBLUE); // Clear the background
            WASD_move_deltaTime(x, y, 500, 500); // 
            DrawRectangle(x, y, 50, 50, RED);

        EndDrawing(); // End drawing sequence
    }

    CloseWindow(); // Ensure that the window is closed
    return 0;
}