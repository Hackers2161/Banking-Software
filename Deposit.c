void Deposit() {
    char accountNumber[11], confirmAccountNumber[11], holderName[100];
    printf("Enter your 10 Digit Account Number: ");
    scanf("%s", accountNumber);
    int len1 = strlen(accountNumber);
    if (len1 == 10) {
        printf("Confirm your 10 Digit Account Number: ");
        scanf("%s", confirmAccountNumber);
        int len2 = strlen(confirmAccountNumber);
       
        if (len1 == 10) {
            if (len2 == 10) {
                if (strcmp(accountNumber, confirmAccountNumber) == 0) {
                     printf("Enter Account Holder Name : ");
        scanf(" %[^\n]", holderName);
                    printf("Enter the Amount you want to Deposit: ");
                    scanf("%d", &Amount);
                    TotalAmount = TotalAmount + Amount;
                    printf("A/c 3XXXXX6925 credited by Rs. %d \nTotal Bal: Rs. %d\nNever share OTP/Password for EMI postponement or any reason.\n", Amount, TotalAmount);
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
            printf("Please Enter a Valid 10 digit Confirm Account Number\n");
            Deposit();
        }
    } else {
        printf("Please Enter a Valid 10 digit Account Number\n");
        Deposit();
    }
}
