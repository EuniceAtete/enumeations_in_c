#include <stdio.h>
#include <string.h>
 
enum Colors { Red, Green, Blue };
 
char *colorNames[] = {"Red", "Green", "Blue"};
 
int main() {
    int totalColors = 3;
    char input[20];
    printf("Enter a color (Red, Green, Blue): ");
    scanf("%s", input);
    int i;
    for (i = 0; i < totalColors; i++) {
        if (strcmp(input, colorNames[i]) == 0) {
            enum Colors c = i;
            printf("'%s' found! Enum value = %d\n", input, c);
            break;
        }
    }
    if (i == totalColors)
        printf("'%s' is not a valid color!\n", input);
    return 0;
}