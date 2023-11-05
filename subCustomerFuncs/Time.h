#pragma once
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