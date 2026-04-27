#include <stdio.h>
 
enum TrafficLight { Red, Yellow, Green };
 
void printMessage(enum TrafficLight light) {
    switch (light) {
        case Red:    printf("Red Light    --> STOP!\n");      break;
        case Yellow: printf("Yellow Light --> GET READY!\n"); break;
        case Green:  printf("Green Light  --> GO!\n");        break;
        default:     printf("Unknown light state!\n");
    }
}
 
int main() {
    enum TrafficLight current;
    current = Red;    printMessage(current);
    current = Yellow; printMessage(current);
    current = Green;  printMessage(current);
    return 0;
}