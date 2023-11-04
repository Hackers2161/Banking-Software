#include <stdio.h>
#include <string.h>

// Structure to represent a bank account
struct BankAccount {
    int accountNumber;
    char accountHolderName[100];
    double balance;
    double loanAmount;
    int isLoanActive;
};

// Function to display account details
void displayAccountDetails(struct BankAccount account) {
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Holder Name: %s\n", account.accountHolderName);
    printf("Account Balance: $%.2lf\n", account.balance);
    
    if (account.isLoanActive) {
        printf("Ongoing Loan Amount: $%.2lf\n", account.loanAmount);
    } else {
        printf("No ongoing loans.\n");
    }
    
    // add code to display schemes such as those for senior citizens or sukanya samridhhi, etc here
}

int main() {
    struct BankAccount userAccount;
    
    // Input account details from the user
    printf("Enter Account Number: ");
    scanf("%d", &userAccount.accountNumber);
    
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]s", userAccount.accountHolderName);  // Read the whole line including spaces
    
    printf("Enter Account Balance: $");
    scanf("%lf", &userAccount.balance);
    
    printf("Is there an ongoing loan? (1 for Yes, 0 for No): ");
    scanf("%d", &userAccount.isLoanActive);
    
    if (userAccount.isLoanActive) {
        printf("Enter Ongoing Loan Amount: $");
        scanf("%lf", &userAccount.loanAmount);
    }
    
    // Display the account details
    printf("\nAccount Details:\n");
    displayAccountDetails(userAccount);

    return 0;
}
