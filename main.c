#include <stdio.h>
#include <string.h>
int Amount, TotalAmount = 100000, Withd, Trans;
long long int MN;
void Deposit();   // Function prototype
void Withdraw();   // Function prototype
void Transfer();   // Function prototype
void Recharge();   // Function prototype
void PayBills();   // Function prototype
void Exit();        // Function prototype
int main() {
    int n;
    printf("1. DEPOSIT AMOUNT\n");
    printf("2. WITHDRAW AMOUNT\n");
    printf("3. BANK TRANSFER\n");
    printf("4. RECHARGE\n");
    printf("5. PAY BILLS\n");
    printf("6. EXIT\n");
    printf("-----------------------\n");
    printf("Enter your choice number: ");
    scanf("%d", &n);
    if (n == 1)
        Deposite();
    else if (n == 2)
        Withdraw();
    else if (n == 3)
        Transfer();
    else if (n == 4)
        Recharge();
    else if (n == 5)
        PayBills();
    else if (n == 6)
        Exit();
    else {
        printf("Wrong input\n");
        printf("Please Enter a Valid Choice number\n");
        printf("--------------------------------------\n");
        main();
    }
    return 0;
}
