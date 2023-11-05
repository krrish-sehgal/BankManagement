#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomAccNo() {
    // Seed the random number generator with the current time
    srand(time(NULL));                                                      //srand is included 

    // Generate a random 10-digit number
    unsigned long long random10DigitNumber = 0;

    for (int i = 0; i < 10; i++) {
        random10DigitNumber = random10DigitNumber * 10 + (rand() % 10);
    }

    // Display the random 10-digit number
    return random10DigitNumber;

}
char* generateRandomCreditCardNumber() {
    static char cardNumber[20];  // 16 digits + 3 spaces + null terminator

    // Seed the random number generator with the current time
    srand(time(NULL));

    for (int i = 0; i < 16; i++) {
        if (i > 0 && i % 4 == 0) {
            cardNumber[i] = ' ';  // Insert a space at every 4 digits
        } else {
            cardNumber[i] = '0' + rand() % 10;  // Generate random digits
        }
    }

    cardNumber[16] = '\0';  // Null-terminate the string

    return cardNumber;
}