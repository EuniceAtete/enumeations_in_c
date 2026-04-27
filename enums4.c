#include <stdio.h>
 
enum Priority {
    Low      = 10,
    Medium   = 20,
    High     = 30,
    AfterHigh       // automatically = 31
};
 
int main() {
    printf("Low       = %d\n", Low);
    printf("Medium    = %d\n", Medium);
    printf("High      = %d\n", High);
    printf("AfterHigh = %d (continues from 31)\n", AfterHigh);
    return 0;
}