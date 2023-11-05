#include <stdio.h>
#include <string.h>
long long int Depos, TotalAmount = 10000000, Withd,Trans;
char AccountNumber[11], ConfirmAccountNumber[11],HolderName[100], MobileNumber[11];
int b,c;
void Deposit();   // Function prototype
void Withdraw();   // Function prototype
void Transfer1();   // Function prototype
void Recharge();   // Function prototype
void PayBills();   // Function prototype
void Exit();        // Function prototype
int main() {
    int a;
    printf("1. DEPOSIT AMOUNT\n");
    printf("2. WITHDRAW AMOUNT\n");
    printf("3. BANK TRANSFER\n");
    printf("4. RECHARGE\n");
    printf("5. PAY BILLS\n");
    printf("6. EXIT\n");
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
    else if (a == 6)
        Exit();
    else {
        printf("Wrong input\n");
        printf("Please Enter a Valid Choice number\n");
        printf("--------------------------------------\n");
        main();
    }
    return 0;
}
