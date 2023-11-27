#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    float income;
    float loanAmount;
    int status; // 0: Not Applied, 1: Applied, 2: Approved, 3: Rejected
} LoanApplication;

void applyForLoan(LoanApplication *application) {
    printf("Enter your name: ");
    scanf("%s", application->name);

    printf("Enter your monthly income: ");
    scanf("%f", &application->income);

    printf("Enter the loan amount you are applying for: ");
    scanf("%f", &application->loanAmount);

    application->status = 1; // Application submitted
}

void checkLoanStatus(LoanApplication *application) {
    if (application->status == 0) {
        printf("You have not applied for a loan.\n");
    } else if (application->status == 1) {
        printf("Your loan application is pending approval.\n");
    } else if (application->status == 2) {
        printf("Congratulations! Your loan has been approved.\n");
        printf("Loan Details:\n");
        printf("Name: %s\n", application->name);
        printf("Monthly Income: $%.2f\n", application->income);
        printf("Loan Amount: $%.2f\n", application->loanAmount);
    } else if (application->status == 3) {
        printf("Sorry, your loan application has been rejected.\n");
    }
}

int main() {
    LoanApplication userLoan;

    // Load existing loan application data from a file (if any)
    FILE *file = fopen("loan_data.txt", "rb");
    if (file != NULL) {
        fread(&userLoan, sizeof(LoanApplication), 1, file);
        fclose(file);
    } else {
        userLoan.status = 0; // Set status to Not Applied
    }

    int choice;

    do {
        printf("\nBanking Software\n");
        printf("1. Apply for a Loan\n");
        printf("2. Check Loan Status\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                applyForLoan(&userLoan);
                break;
            case 2:
                checkLoanStatus(&userLoan);
                break;
            case 3:
                // Save the loan application data to a file before exiting
                file = fopen("loan_data.txt", "wb");
                if (file != NULL) {
                    fwrite(&userLoan, sizeof(LoanApplication), 1, file);
                    fclose(file);
                }
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}
