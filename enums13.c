#include <stdio.h>
 
enum Command { CMD_START, CMD_STOP, CMD_PAUSE, CMD_RESTART };
 
void handleStart()   { printf("Action: Starting...\n");   }
void handleStop()    { printf("Action: Stopping...\n");   }
void handlePause()   { printf("Action: Pausing...\n");    }
void handleRestart() { printf("Action: Restarting...\n"); }
 
int main() {
    int input;
    printf("Commands: 0=START, 1=STOP, 2=PAUSE, 3=RESTART, -1=EXIT\n");
    while (1) {
        printf("\nEnter command: ");
        scanf("%d", &input);
        if (input == -1) {
            printf("Exiting interpreter...\n");
            break;
        }
        enum Command cmd = input;
        switch (cmd) {
            case CMD_START:   handleStart();   break;
            case CMD_STOP:    handleStop();    break;
            case CMD_PAUSE:   handlePause();   break;
            case CMD_RESTART: handleRestart(); break;
            default: printf("Unknown command: %d\n", input);
        }
    }
    return 0;
}