void Change_UPI_PIN(){
   
    printf("\n | UPI PIN will keep your account secure from unauthorized access. do not share this PIN with anyone. | \n");
    printf("\nENTER 4-DIGIT OLD UPI PIN : ");
    scanf("%d",&old_UPI_PIN);
    if(old_UPI_PIN==1234){
       Change_UPI_PIN2();
    }
    else{
        printf("INVALID OLD UPI PIN\n");
        printf("plese Re-Enter your UPI PIN\n");
        Change_UPI_PIN2();
    }
   
}
 void Change_UPI_PIN2(){
         printf("ENTER 4-DIGIT NEW UPI PIN : ");
        scanf("%d",&new_UPI_PIN);
         printf("CONFIRM 4-DIGIT NEW UPI PIN : ");
        scanf("%d",&Confirm_UPI_PIN);
        if(new_UPI_PIN==Confirm_UPI_PIN){
            printf("UPI PIN updated Succesfully");
        }
        if(new_UPI_PIN!=Confirm_UPI_PIN){
        printf("PIN didn't match\n");
        Change_UPI_PIN2();
        }
    }
void Exit() {
    printf("Thank You for Visiting");
}
void ApplyForNewDebitCard(){
    char NameOnCard[100], CardIssueAdd[200];
    int tpin2;
    printf("Enter you 10 Digit Account Number : ");
    scanf(" %[^\n]",AccountNumber);
    int len1=strlen(AccountNumber);
    int n1,n2;
    if(len1==10){
       printf("Enter you 10 Digit  Confirm Account Number : ");
    scanf(" %[^\n]",ConfirmAccountNumber);
    int len2=strlen(ConfirmAccountNumber);
    if(len2==10){
     if (strcmp(AccountNumber,ConfirmAccountNumber) == 0){
        printf("Enter Account Holder Name : ");
        scanf(" %[^\n]",HolderName);
        printf("Do You Want account holder name as name on the card?\n");
        printf("if yes,  then Enter 1\n");
        printf("otherwise  Enter 0\n");
        printf("enter your choice : ");
        scanf("%d",&n1);
        if(n1==0){
            printf("Enter Name that you want to be printed on card : ");
            scanf(" %[^\n]",NameOnCard);
            printf("Enter Card Issuance Address : ");
            scanf(" %[^\n]",CardIssueAdd);
            printf("----Select Card Type----\n");
            printf("1. Rupay NCMC Platinum (PRS)\n");
            printf("2. Visa Platinum Contactless\n");
            printf("3. Rupay Select\n");
            printf("Enter your choice Number : ");
            scanf("%d",&n2);
            switch(n2){
                case 1: case 2: case 3:
                 printf("Enter Transaction Password(TPIN) : ");
            scanf("%d",&tpin2);
             printf("you have Succefully Registred for Debit Card, you can Collect your Debit Card after 14 to 20 Working days from your respective bank \n");
             printf("------------------------------------------------------\n");
             main();
            
            break;
            default : 
            printf("Wrong Input");
            }
           
        }
        else if(n1==1){
             printf("Enter Card Issuance Address : ");
            scanf(" %[^\n]",CardIssueAdd);
            printf("----Select Card Type----\n");
            printf("1. Rupay NCMC Platinum (PRS)\n");
            printf("2. Visa Platinum Contactless\n");
            printf("3. Rupay Select\n");
             printf("Enter your choice Number : ");
            scanf("%d",&n2);
            switch(n2){
                case 1: case 2: case 3:
                 printf("Enter Transaction Password(TPIN) : ");
            scanf("%d",&tpin2);
            printf("you have Succefully Registred for Debit Card, you can Collect your Debit Card after 14 to 20 Working days from your respective bank \n");
              printf("------------------------------------------------------\n");
            main();
            break;
            default : 
            printf("Wrong Input");
            }
            
          
        }
        else{
            printf("Wrong Input");
        }
     }
     else{
         printf("Account Number and Confirm Account Number are not same\n");
         ApplyForNewDebitCard(); 
     }
    }
    else{
      printf("Please Enter a Valid 10 digit  Confirm Account Number\n");
        ApplyForNewDebitCard();  
    }
    }
    else{
        printf("Please Enter a Valid 10 digit Account Number\n");
        ApplyForNewDebitCard();
    }
}
