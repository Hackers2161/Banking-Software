void Transfer2();   // Function prototype
void Transfer3();   // Function prototype
void Recharge2();   // function prototype
void Recharge3();   // function prototype
void choicenum1();    // function prototype
void choicenum2();    // function prototype


void Deposit() {
    printf("Enter your 10 Digit Account Number: ");
    scanf(" %[^\n]",AccountNumber);
    int len1 = strlen(AccountNumber);
    if (len1 == 10) {
        printf("Confirm your 10 Digit Account Number: ");
         scanf(" %[^\n]", ConfirmAccountNumber);
        int len2 = strlen(ConfirmAccountNumber);
            if (len2 == 10) {
                if (strcmp(AccountNumber,ConfirmAccountNumber) == 0) {
                    printf("Enter Account Holder Name : ");
        scanf(" %[^\n]",HolderName);
                    printf("Enter the Amount you want to Deposit: ");
                    scanf("%lld", &Depos);
                    TotalAmount = TotalAmount + Depos;
                    printf("A/c 3XXXXX6925 credited by Rs. %lld \nTotal Bal: Rs. %lld\nNever share OTP/Password for EMI postponement or any reason.\n", Depos, TotalAmount);
                    printf("-------------------------------------------------------------\n");
                    main();
                } else {
                    printf("Account Number and Confirm Account Number are not the same\n");
                    Deposit();
                }
            } else {
                printf("Please Enter a Valid 10 digit Confirm Account Number\n");
                Deposit();
            }
       
    } else {
        printf("Please Enter a Valid 10 digit Account Number\n");
        Deposit();
    }
}
