#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "deposit.h"

const int VALID_ACCOUNT_NUMBER_LENGTH = 10;
static char* account_number[10];
static char* account_number_confirmation[10];


int contains_only_digits(const char *s) {
    while (*s) {
        if (!isdigit(*s)) {
            return 0;
        }
        s++;
    }
    return 1;
}

const char* get_valid_length_account_number() {

    static char valid_length_number[10];
    printf("Please enter you 10 digit account number:");
    scanf("%s", valid_length_number);
    printf("Length of valid_length_number is: %lX", strlen(valid_length_number));
    if(strlen(valid_length_number) != VALID_ACCOUNT_NUMBER_LENGTH) {
        printf("Whoops! Invalid account number\n");
        printf("Please enter your %d digit account number:", VALID_ACCOUNT_NUMBER_LENGTH);
        scanf("%s", valid_length_number);

    }
    //validate that the string contains only digits
    if(! contains_only_digits(valid_length_number)) {
        printf("Whoops! Invalid account number. Account number can contain only digits.\n");
        printf("Please enter your %d digit account number:", VALID_ACCOUNT_NUMBER_LENGTH);
        scanf("%s", valid_length_number);
    }

    return valid_length_number;
}

void get_account_number() {
    strcpy(account_number, get_valid_length_account_number());
}

void get_account_number_confirmation() {
//    static char* confirmation_number;
    printf("Let's confirm the account number\n");
//    printf("%d\n", strcmp(account_number, account_number_confirmation));
    strcpy(account_number_confirmation, get_valid_length_account_number());
    if(strcmp(account_number, account_number_confirmation) != 0) {
        printf("Whoops! Account number confirmation does not match.\n");
        get_account_number_confirmation();
    }
//    strcpy(account_number_confirmation, confirmation_number);
}

int get_deposit_amount() {
    int deposit_amount;
    printf("How much do you want to deposit: (enter the amount below)\n");
    scanf("%d", &deposit_amount);
    printf("%d", deposit_amount);
//    printf("%d\n", isnumber(deposit_amount));
//    if(!isnumber(deposit_amount)) get_deposit_amount();

    return deposit_amount;
}
int deposit(int balance){
    int deposit_amount;
    int new_balance = balance;
    printf("Current Balance: %d | Depositing to your account...", balance);
    get_account_number();

    get_account_number_confirmation();
    deposit_amount = get_deposit_amount();
    new_balance = balance + deposit_amount;

    printf("===============================================================\n");
    printf("Rupees %d has been deposited in your account %s.\n", deposit_amount, account_number);
    printf("Total balance available is: Rupees %d\n",  new_balance);
    printf("===============================================================\n");
    printf("\n");

    return deposit_amount;
}
