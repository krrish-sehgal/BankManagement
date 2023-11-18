#pragma once
#include <time.h>

char* getCurrentDate() {
    static char date[11];  // Buffer for the date in "YYYY-MM-DD" format

    time_t currentTime;     //this time_t variable is used to store a long integer type time format , 
    struct tm *localTime;

    time(&currentTime);    //he time function takes a pointer to a time_t variable as an argument, and it sets the value of that variable to the current time and that value is no of seconds from the start of epoch (1970). 
    localTime = localtime(&currentTime);    //this is used to get the local time (IST) not grand meridean time and it breaks down the bad format of time function into much readable form.


    strftime(date, sizeof(date), "%Y-%m-%d", localTime);
    //this helps in formatting the date and time as we wish --> Y= year(cur_year) , m= month(01-12) , d = day(01-31) and store like the format in the string buffer 

    return date;
}