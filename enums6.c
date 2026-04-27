#include <stdio.h>
 
enum Days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
 
int isWeekday(enum Days day) {
    if (day == Saturday || day == Sunday) return 0;
    return 1;
}
 
int main() {
    enum Days allDays[] = {Monday, Tuesday, Wednesday,
                           Thursday, Friday, Saturday, Sunday};
    char *dayNames[] = {"Monday","Tuesday","Wednesday",
                        "Thursday","Friday","Saturday","Sunday"};
    int i;
    for (i = 0; i < 7; i++) {
        if (isWeekday(allDays[i]))
            printf("%s --> Weekday\n", dayNames[i]);
        else
            printf("%s --> Weekend\n", dayNames[i]);
    }
    return 0;
}