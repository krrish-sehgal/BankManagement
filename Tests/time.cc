#include <iostream>
#include <time.h>

char* getCurrentDate() {
    static char date[11];  // Buffer for the date in "YYYY-MM-DD" format
    time_t currentTime;
    std::cout << currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);

    strftime(date, sizeof(date), "%Y-%m-%d", localTime);

    return date;
}
int main (){
    printf("%s",getCurrentDate());
}