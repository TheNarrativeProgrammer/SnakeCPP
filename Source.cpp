#include <iostream>
#include "Snake.h"
// Main game loop
int main() 
{
    Setup();                                                    // Initialize game variables
    while (!gameOver) {                                         // Run the game until the player loses
        Draw();                                                 // Display the game board
        Input();                                                // Handle user input
        Logic();                                                // Update the game state
        Sleep(100);                                             // Slow down the game loop for better playability
    }
    return 0;                                                   // Exit the program
}
