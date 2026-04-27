#include <stdio.h>
 
enum ErrorCode {
    OK,           // 0
    FileNotFound, // 1
    AccessDenied  // 2
};
 
void printErrorMessage(enum ErrorCode code) {
    switch (code) {
        case OK:
            printf("ErrorCode %d: Everything is fine!\n", code); break;
        case FileNotFound:
            printf("ErrorCode %d: The file was not found!\n", code); break;
        case AccessDenied:
            printf("ErrorCode %d: Access has been denied!\n", code); break;
        default:
            printf("ErrorCode %d: Unknown error!\n", code);
    }
}
 
int main() {
    printErrorMessage(OK);
    printErrorMessage(FileNotFound);
    printErrorMessage(AccessDenied);
    return 0;
}