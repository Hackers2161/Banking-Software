void Transfer() {
    int optionSelected, tpin;
    long long int isfc;
    char accountNumber[10], confirmAccountNumber[10];
    printf("Select Bank\n");
    printf("1. State Bank of India (SBI)\n");
    printf("2. ICICI Bank\n");
    printf("3. Axis Bank\n");
    printf("4. HDFC Bank\n");
    printf("5. Union Bank of India\n");
    printf("6. Central Bank of India\n");
    printf("Enter your choice number: ");
    scanf("%d", &option);
    printf("\n Enter IFSC Code: ");
    scanf("%lld", &isfc);
    printf("\n Enter Account Number: ");
    scanf("%s", accountNumber);
    int len1 = strlen(accountNumber);
    if(len1==10){
    
    if (strcmp(accountNumber, confirmAccountNumber)!=0) {
        printf("Enter the Amount you want to Transfer: ");
        scanf("%d", &Trans);
        printf("Enter Your TPIN: ");
        scanf("%d", &tpin);
    } else {
        printf("Account Number and Confirm Account Number are not the same\n");
    }
    if (tpin == 1234) {
        if (Trans <= TotalAmount) {
            TotalAmount = TotalAmount - Trans;
            switch (optionSelected) {
                case 1: case 2: case 3: case 4: case 5: case 6:
                    if (strcmp(accountNumber, confirmAccountNumber)!=0) {
                        printf("A/c 3XXXXX6925 debited by Rs.%d \nTotal Bal:%d\nNever share OTP/Password for EMI postponement or any reason.", Trans, TotalAmount);
                    }
                    break;
                default:
                    printf("Wrong input");
            }
        } else {
            printf("You do not have sufficient Balance in your Account\n");
        }
    } else {
        printf("INVALID TPIN\n");
        invalidTpin();
    }
    }
    else{
        printf("Please Enter a valid Account Number\n");
        invalidAccountNumber();
    }
}
void invalidAccountNumber(){
    char accountNumber[10], confirmAccountNumber[10];
    int Amount, tpin;
    printf("Please Re-Enter your  10 Digit Account Number : ");
    scanf("%s", accountNumber);
     int len1 = strlen(accountNumber);
     if(len1==10)
     {
         printf("Confirm Your 10 Digit Account Number : ");
         scanf("%s", confirmAccountNumber);
         int len2 = strlen(confirmAccountNumber);
         if(len2==10){
         printf("Enter the Amount You Wish to transfer : ");
         scanf("%d",&Amount);
         printf("Enter Your TPIN: ");
        scanf("%d", &tpin);
        if(tpin==1234){
            if(Amount<=TotalAmount){
                TotalAmount=TotalAmount-Amount;
                 printf("A/c 3XXXXX6925 debited by Rs.%d \nTotal Bal:%d\nNever share OTP/Password for EMI postponement or any reason.",Amount, TotalAmount);
                    
     }
     else{
         printf("You do not have sufficient Balance in your Account\n");
     }
        }
     else{
        printf("INCORRECT TPIN\n");
         invalidTpin();
         }
         }
     else{
      printf("Please Enter a Valid 10 Digit Confirm Account Number\n");
      invalidAccountNumber();
     }
     }
     else{
         printf("Please Enter a Valid 10 Digit Account Number\n");
         invalidAccountNumber();
     }
         
}
void invalidTpin() {
    int tpin, g, h;
    printf("Re-Enter Your TPIN: ");
    scanf("%d", &tpin);
    if (tpin == 1234) {
        if (Trans <= TotalAmount) {
            TotalAmount = TotalAmount - Trans;
            printf("A/c 3XXXXX6925 debited by Rs.%d \nTotal Bal:%d\nNever share OTP/Password for EMI postponement or any reason.",Trans, TotalAmount);
        } else {
            printf("You do not have sufficient Balance in your Account\n");
        }
    } else {
        printf("INVALID TPIN\n");
        invalidTpin();
    }
}
