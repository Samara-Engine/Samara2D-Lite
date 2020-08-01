/*
Main.c
Samara 2D Lite
Created by phani srikar on 01/08/20.
Copyright © 2020 phani srikar. All rights reserved.

    CHANGELOG :
    - 1-8-2020
    * Project Initialised 

    Header Files Hierarchy :

*/

#include<raylib.h>

int main(){
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Samara2D Lite Test Bed");
    SetTargetFPS(60);

    while(!WindowShouldClose()){

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawFPS(10, 10);


        EndDrawing();
    }
    CloseWindow();
    return 0;
}
