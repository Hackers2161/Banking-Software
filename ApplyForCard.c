void ApplyForNewDebitCard(){
    char NameOnCard[100], CardIssueAdd[200];
    int tpin2;
    printf("Enter you 10 Digit Account Number : ");
    scanf(" %[^\n]",AccountNumber);
    int len1=strlen(AccountNumber);
    int name_on_card, card_choice;
    //n1->name_on_card
    //n2->card_choice
    if(len1==10){
       printf("Enter you 10 Digit  Confirm Account Number : ");
    scanf(" %[^\n]",ConfirmAccountNumber);
    int len2=strlen(ConfirmAccountNumber);
    if(len2==10){
     if (strcmp(AccountNumber,ConfirmAccountNumber) == 0){
        printf("Enter Account Holder Name : ");
        scanf(" %[^\n]",HolderName);
        printf("Do You Want account holder name as name on the card?\nIf yes, enter 1\nIf no, enter 0");
        printf("\nEnter your choice : ");
        scanf("%d",&name_on_card);
        if(name_on_card==0){
            printf("Enter Name that you want to be printed on card : ");
            scanf(" %[^\n]",NameOnCard);
            printf("Enter Card Issuance Address : ");
            scanf(" %[^\n]",CardIssueAdd);
            printf("----Select Card Type----\n");
            printf("1. Rupay NCMC Platinum (PRS)\n");
            printf("2. Visa Platinum Contactless\n");
            printf("3. Rupay Select\n");
            printf("Enter your choice Number : ");
            scanf("%d",&card_choice);
            switch(card_choice){
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
        else if(name_on_card==1){
             printf("Enter Card Issuance Address : ");
            scanf(" %[^\n]",CardIssueAdd);
            printf("----Select Card Type----\n");
            printf("1. Rupay NCMC Platinum (PRS)\n");
            printf("2. Visa Platinum Contactless\n");
            printf("3. Rupay Select\n");
             printf("Enter your choice Number : ");
            scanf("%d",&card_choice);
            switch(card_choice){
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
