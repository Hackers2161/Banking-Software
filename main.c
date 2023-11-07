#include <stdio.h>
#include <string.h>
long long int Depos, TotalAmount = 10000000, Withd,Trans;
char AccountNumber[11], ConfirmAccountNumber[11],HolderName[100], MobileNumber[11];
 int old_UPI_PIN,new_UPI_PIN,Confirm_UPI_PIN;

int b,c;
void Deposit();   // Function prototype
void Withdraw();   // Function prototype
void Transfer1();   // Function prototype
void Recharge();   // Function prototype
void PayBills();   // Function prototype
void Change_UPI_PIN();  // function prototype
void ApplyForNewDebitCard();     // function prototype
void TransactionHistory();    // function prototype
void Exit();        // Function prototype
int main() {
    int a;
    printf("1. DEPOSIT AMOUNT\n");
    printf("2. WITHDRAW AMOUNT\n");
    printf("3. BANK TRANSFER\n");
    printf("4. RECHARGE\n");
    printf("5. PAY BILLS\n");
    printf("6. Change UPI PIN\n");
    printf("7. Apply For New Debit Card\n");
    printf("8. Transactions History\n");
    printf("9. EXIT\n");
    printf("-----------------------\n");
    printf("Enter your choice number: ");
    scanf("%d", &a);
    if (a == 1)
        Deposit();
    else if (a == 2)
        Withdraw();
    else if (a == 3)
        Transfer1();
    else if (a == 4)
        Recharge();
    else if (a == 5)
        PayBills();
    else if(a==6)
        Change_UPI_PIN();
    else if(a==7)
        ApplyForNewDebitCard();
    else if(a==8)
        TransactionHistory();
    else if (a == 9)
        Exit();
    else {
        printf("Wrong input\n");
        printf("Please Enter a Valid Choice number\n");
        printf("--------------------------------------\n");
        main();
    }
    return 0;
}

void Transfer2();   // Function prototype
void Transfer3();   // Function prototype
void Transfer4();   // Function prototype
void Recharge2();   // function prototype
void Recharge3();   // function prototype
void choicenum1();    // function prototype
void choicenum2();    // function prototype
void Change_UPI_PIN2();  // function prototype

