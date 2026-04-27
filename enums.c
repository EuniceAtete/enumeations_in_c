#include <stdio.h>
 
enum Days {
    Monday,    // 0
    Tuesday,   // 1
    Wednesday, // 2
    Thursday,  // 3
    Friday,    // 4
    Saturday,  // 5
    Sunday     // 6
};
 
int main() {
    printf("Monday    = %d\n", Monday);
    printf("Tuesday   = %d\n", Tuesday);
    printf("Wednesday = %d\n", Wednesday);
    printf("Thursday  = %d\n", Thursday);
    printf("Friday    = %d\n", Friday);
    printf("Saturday  = %d\n", Saturday);
    printf("Sunday    = %d\n", Sunday);
    return 0;
}