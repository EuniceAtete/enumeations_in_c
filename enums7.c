#include <stdio.h>
 
enum FileAccess {
    Read    = 1, // 001
    Write   = 2, // 010
    Execute = 4  // 100
};
 
void checkPermissions(int permissions) {
    printf("Permissions value: %d\n", permissions);
    if (permissions & Read)    printf("--> Has READ permission\n");
    if (permissions & Write)   printf("--> Has WRITE permission\n");
    if (permissions & Execute) printf("--> Has EXECUTE permission\n");
    printf("\n");
}
 
int main() {
    int myPermissions = Read | Write;
    printf("Read | Write:\n");
    checkPermissions(myPermissions);
 
    int allPermissions = Read | Write | Execute;
    printf("Read | Write | Execute:\n");
    checkPermissions(allPermissions);
 
    int onlyExecute = Execute;
    printf("Execute only:\n");
    checkPermissions(onlyExecute);
    return 0;
}