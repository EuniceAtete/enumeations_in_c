#include <stdio.h>
 
enum Gender {
    Male,   // 0
    Female, // 1
    Other   // 2
};
 
int main() {
    int choice;
    printf("Enter a number (0=Male, 1=Female, 2=Other): ");
    scanf("%d", &choice);
    enum Gender g = choice;
    switch (g) {
        case Male:   printf("Gender: Male\n");   break;
        case Female: printf("Gender: Female\n"); break;
        case Other:  printf("Gender: Other\n");  break;
        default:     printf("Invalid choice!\n");
    }
    return 0;
}