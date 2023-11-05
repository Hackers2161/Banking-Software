void Withdraw() {
    printf("Enter your 10 Digit Account Number: ");
    scanf(" %[^\n]",AccountNumber);
    int len1 = strlen(AccountNumber);

    if (len1 == 10) {
        printf("Confirm your 10 Digit Account Number: ");
        scanf(" %[^\n]",ConfirmAccountNumber);
        int len2 = strlen(ConfirmAccountNumber);
            if (len2 == 10) {
                if (strcmp(AccountNumber,ConfirmAccountNumber) == 0) {
                       printf("Enter Account Holder Name : ");
        scanf(" %[^\n]",HolderName);
                    printf("Enter the Amount you want to Withdraw: ");
                    scanf("%lld", &Withd);
                    TotalAmount = TotalAmount - Withd;
                    printf("A/c 3XXXXX6925 debited by Rs. %lld \nTotal Bal: Rs. %lld\nNever share OTP/Password for EMI postponement or any reason.\n", Withd, TotalAmount);
                    printf("-------------------------------------------------------------\n");
                    main();
                } else {
                    printf("Account Number and Confirm Account Number are not the same\n");
                    Withdraw();
                }
            } else {
                printf("Please Enter a Valid 10 digit Confirm Account Number\n");
                Withdraw();
            }
        } else {
            printf("Please Enter a Valid 10 digit Confirm Account Number\n");
            Withdraw();
        }
}
