#include <stdio.h>
#include <time.h>

char* getCurrentTime() {
    static char Time[9];  // Buffer for the time in "HH:MM:SS" format
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);

    strftime(Time, sizeof(Time), "%H:%M:%S", localTime);

    return Time;
}
char* getCurrentDate() {
    static char date[11];  // Buffer for the date in "YYYY-MM-DD" format
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);

    strftime(date, sizeof(date), "%Y-%m-%d", localTime);

    return date;
}

int main() {
    char* currentTime = getCurrentTime();
    printf("Current Time: %s\n", currentTime);

    char* currentDate = getCurrentDate();
    printf("Current Date: %s\n", currentDate);
    return 0;
}
