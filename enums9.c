#include <stdio.h>
 
enum GameState { Idle, Playing, Paused, GameOver };
 
void printState(enum GameState state) {
    switch (state) {
        case Idle:     printf("Game is IDLE...\n");  break;
        case Playing:  printf("Game is PLAYING!\n"); break;
        case Paused:   printf("Game is PAUSED.\n");  break;
        case GameOver: printf("GAME OVER!\n");       break;
    }
}
 
int main() {
    enum GameState current = Idle;
    while (1) {
        printState(current);
        switch (current) {
            case Idle:    current = Playing;  break;
            case Playing: current = Paused;   break;
            case Paused:  current = GameOver; break;
            case GameOver: break;
        }
        if (current == GameOver) {
            printState(current);
            break;
        }
    }
    return 0;
}