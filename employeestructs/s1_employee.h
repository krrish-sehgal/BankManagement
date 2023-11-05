struct Employee{
    
    char fullName[100];                // Full legal name
    char dateOfBirth[12];             // Date of birth (e.g., "YYYY-MM-DD")
    char contactInfo[100];           // Contact information (address, phone number, email)
    char citizenshipStatus[50];     // Citizenship status
    char governmentID[50];         //Adhar
    char employee_id [50];
    int a;
    int b;
};

struct history{
    char * transactionTime[100];
    char * transactionDate[100];
    int transactions[100];
    int custIdx;            
};