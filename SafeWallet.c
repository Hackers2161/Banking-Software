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
    printf("8. EXIT\n");
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
    else if (a == 8)
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
void Recharge() {
    int d;

    printf("Enter Mobile Number: ");
    scanf(" %[^\n]",MobileNumber);
    int len3=strlen(MobileNumber);
    if(len3==10){
    printf("\nSelect a Plan, e.g. 239 or 28 days\n");
    printf("1. ₹19    Validity- 1 Days     Data- 1.5GB\n");
    printf("2. ₹399   Validity- 28 Days    Data- 2GB/Day\n");
    printf("3. ₹749   Validity- 90 Days    Data- 2GB/Day\n");
    printf("4. ₹808   Validity- 84 Days    Data- 3GB/Day\n");
    printf("5. ₹2,999  Validity- 365 Days   Data- 2.5GB/Day\n");
    printf("6. ₹3,359  Validity- 365 Days   Data- 2.5GB/Day\n");
    printf("7. ₹1,799  Validity- 365 Days   Data- 2GB/Day\n");
    printf("\nEnter your choice: ");
    scanf("%d", &d);

    switch (d) {
        int e;
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7:
             printf("Select an option to pay\n");
            printf("  1.Paytm UPI\n");
            printf("  2.Wallet / Postpaid\n");
            printf("  3.Credit / Debit / ATM card\n");
            printf("  4.Net Banking\n"); 
            printf("Select an option to Pay : ");
            scanf("%d",&c);
           Recharge3();
            break;
            default :
            printf("Wrong Input\n");
            printf("Please Select a Valid Plan Number\n");
            Recharge();
    }
    }
    else{
        printf("Please Enter a valid Mobile Number\n");
        Recharge();
    }
}

void Recharge2(){
     printf("Please Re-Enter your choice Number : ");
     scanf("%d",&c);
     Recharge3();
}
void Recharge3(){
     switch(c){
         int e;
                case 1: 
                 printf("ENTER 4-DIGIT UPI PIN : ");
                scanf("%d",&e);
                printf("\npayment Succefull");
                break;
                case 3:
                long long int x1;
                int x2,x3;
                printf("Enter card Number : ");
                scanf("%lld",&x1);
                printf("\nEnter expiry / Validity : ");
                scanf("%d",&x2);
                printf("\n Enter CVV : ");
                scanf("%d",&x3);
                printf("\nPyment Succesfull");
                break;
                case 4:
                 printf("Select Bank\n");
    printf("1. State Bank of India (SBI)\n");
    printf("2. ICICI Bank\n");
    printf("3. Axis Bank\n");
    printf("4. HDFC Bank\n");
    printf("5. Union Bank of India\n");
    printf("6. Central Bank of India\n");
    break;
          default :
          printf("Wrong input");
              Recharge2();  
                
            }
}
void PayBills() {
    int a1, b1,n1,n2,d1,n3;
    long long int e1;
    long long int c1;
    printf("\n");
    printf("1. Electricity Bill Payment\n");
    printf("2. Water and Sewage Bill Payment\n");
    printf("3. Gas Cylinder Bill Payment\n");
    printf("------------------------------\n");
    printf("enter your choice number: ");
    scanf("%d", &a1);

    if (a1 == 1) {
        printf("1. Paschim Gujarat Vij Company Limited\n");
        printf("2. Madhya Gujarat Vij Company Limited\n");
        printf("3. Dasshin Gujarat Vij Company Limited\n");
        printf("4. Uttar Gujarat Vij Company Limited\n");
        printf("5. Vaghani Energy Limited\n");
        printf("-------------------------------\n");
        printf("Select your electricity board name: ");
        scanf("%d", &b1);
    
   
    switch (b1) {
        case 1: case 2: case 3: case 4: case 5:
            printf("Please enter your 5 or 11 digit Consumer Number: ");
            scanf("%lld", &c1);
            printf("PROCEED TO PAY");
            break;
        default:
            printf("Wrong Input");
    }
    }
    if(a1==2){
        printf("\n1. Vadodara Municipal Corporation\n");
        printf("2. GRAMPANCHAYAT NEVARI\n");
        printf("3. Grampanchayat Ambegaon\n");
        printf("4. Grampanchayat Hingangaon Budruk\n");
        printf("5. Grampanchayat Kheradewangi\n");
        printf("6. Surat Municipal Corporation\n");
        printf("\nSelect Your Water board : ");
        scanf("%d",&n1);
        switch(n1){
            case 1:  case 2:  case 3:  case 4:  case 5:  case 6:
             printf("Please enter your Customer ID: ");
             scanf("%d",&d1);
             printf("Please enter your customer Mobile : ");
             scanf("%lld",&e1);
             printf("PROCESSED TO PAY");
             break;
             default : 
             printf("Wrong Input\n");
             printf("Please Enter a valid choice Number\n");
        }
    }
    if(a1==3){
        printf("1. Bharat Gas\n");
        printf("2. HP Gas\n");
        printf("3. Bharat Gas - Commercial(NEW)\n");
        printf("4. Indane Gas(Indian Oil)\n");
        printf("\nSelect your Biller : ");
        scanf("%d",&n2);
        switch(n2){
            case 1: case 2: case 3: case 4:
            printf("1. Mobile Number\n");
            printf("2. LPG ID\n");
            printf("\nSelect Booking method : ");
            scanf("%d",&n3);
            switch(n3){
                case 1:
                int n5;
                long long int n4;
                printf("Please Enter Registered Contact Number : ");
                scanf("%lld",&n4);
                 printf("PROCESSED TO PAY");
                break;
                case 2:
                printf("Please Enter a Valid LPG ID : ");
                scanf("%d",&n5);
                 printf("PROCESSED TO PAY");
                 break;
                 default: 
                 printf("Please Enter a valid choice number ");
                
            }
            break;
            default:
            printf("Wrong input");
            
        }
        
    }
}
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










