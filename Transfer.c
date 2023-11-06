void Transfer1() {
    
    printf("Select Bank\n");
    printf("1. State Bank of India (SBI)\n");
    printf("2. ICICI Bank\n");
    printf("3. Axis Bank\n");
    printf("4. HDFC Bank\n");
    printf("5. Union Bank of India\n");
    printf("6. Central Bank of India\n");
    Transfer2();
}
void Transfer2(){
    long long int f;
        printf("Enter your choice number: ");
    scanf("%d", &b);
   if(b<7){
     printf("\n Enter IFSC Code: ");
    scanf("%lld", &f);
    Transfer3();
   }
   else{
       printf("Please enter a valid choice Number\n");
       Transfer2();
   }
    }
void Transfer3(){
     int tpin;
     printf("Please Enter your  10 Digit Account Number : ");
    scanf(" %[^\n]",AccountNumber);
     int len1=strlen(AccountNumber);
     if(len1==10)
     {
        printf("Confirm Your 10 Digit Account Number : ");
        scanf(" %[^\n]",ConfirmAccountNumber);
         int len2 = strlen(ConfirmAccountNumber);
         if(len2==10)
         {
             if(strcmp(AccountNumber,ConfirmAccountNumber)==0){
                  printf("Enter Account Holder Name : ");
        scanf(" %[^\n]",HolderName);
                  printf("Enter the Amount You Wish to transfer : ");
                   scanf("%lld",&Trans);
                  printf("Enter Your TPIN: ");
                   scanf("%d", &tpin);
                   if(tpin==1234){
                       if(Trans<=TotalAmount){
                             TotalAmount=TotalAmount-Trans;
                 printf("A/c 3XXXXX6925 debited by Rs.%lld \nTotal Bal:%lld \nNever share OTP/Password for EMI postponement or any reason.",Trans ,TotalAmount);
                       }
                       else{
                            printf("You do not have sufficient Balance in your Account\n");
                       }
                   }
                   else{
                         printf("INCORRECT TPIN\n");
                        Transfer4(); 
                   }
             }
             else{
                  printf("Account Number and Confirm Account Number are not same\n");
                  Transfer3();
             }
         }
         else{
               printf("Please Enter a Valid 10 Digit Confirm Account Number\n");
      Transfer2();
         }
     }
     else{
           printf("Please Enter a Valid 10 Digit Account Number\n");
         Transfer3();
     }
   
}



void Transfer4() {
    int tpin;
    printf("Re-Enter Your TPIN: ");
    scanf("%d", &tpin);

    if (tpin == 1234) {
        if (Trans <= TotalAmount) {
            TotalAmount = TotalAmount - Trans;
            printf("A/c 3XXXXX6925 debited by Rs.%lld \nTotal Bal:%lld\nNever share OTP/Password for EMI postponement or any reason.",Trans, TotalAmount);
        } else {
            printf("You do not have sufficient Balance in your Account\n");
        }
    } else {
        printf("INVALID TPIN\n");
        Transfer4();
    }
}
