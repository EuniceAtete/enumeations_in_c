#include <stdio.h>
 
enum AppConfig { MODE_DEVELOPMENT, MODE_STAGING, MODE_PRODUCTION };
 
void log_debug(enum AppConfig mode, char *message) {
    if (mode == MODE_DEVELOPMENT)
        printf("[DEBUG]   --> %s\n", message);
}
 
void log_warning(enum AppConfig mode, char *message) {
    if (mode == MODE_DEVELOPMENT || mode == MODE_STAGING)
        printf("[WARNING] --> %s\n", message);
}
 
void log_error(enum AppConfig mode, char *message) {
    if (mode == MODE_DEVELOPMENT || mode == MODE_STAGING)
        printf("[ERROR]   --> %s (console)\n", message);
    else
        printf("[ERROR]   --> %s (file)\n", message);
}
 
void runApp(enum AppConfig mode) {
    switch (mode) {
        case MODE_DEVELOPMENT: printf("--- DEVELOPMENT mode ---\n"); break;
        case MODE_STAGING:     printf("--- STAGING mode ---\n");     break;
        case MODE_PRODUCTION:  printf("--- PRODUCTION mode ---\n");  break;
    }
    log_debug(mode,   "Starting up the application");
    log_warning(mode, "Memory usage is high");
    log_error(mode,   "Failed to connect to database");
    printf("\n");
}
 
int main() {
    runApp(MODE_DEVELOPMENT);
    runApp(MODE_STAGING);
    runApp(MODE_PRODUCTION);
    return 0;
}