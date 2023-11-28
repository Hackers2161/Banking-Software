#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define ppin 1234
#define Attemt 3
// Function to calculate simple interest
float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

// Function to calculate compound interest
float compoundInterest(float principal, float rate, float time, int periods) {
    return principal * pow((1 + rate / periods), periods * time) - principal;
}
void main2();     // Function prototype
 char Count;
bool vpin(int Apin);
void requirements();
void details();
void pin();
void choiceinvalid();
void uname();

struct user 
{
    char name[50];
    char address[100];
    char phone[11];
    char email[50];
    double balance;
};

int main()
{
    printf("|  Welcome to your trusted banking system  |\n\n");
    printf("1. Open a new account\n\n");
    printf("2. login to the current account\n\n");
    printf("-----------------------------\n");
     choiceinvalid();
}
void choiceinvalid()
{
   int n, k;
   char adcard[12], rtcard[10], pancard[10], passnum[12], vdcard[16], username[100];
    printf("Enter your choice: ");
    scanf("%d", &n);
   

    switch (n)
     {
        case 1:
            printf("| Which type of account would you like to create? |\n\n");
            printf("1. Saving account\n");
            printf("2. Current account\n");
            printf("3. Fixed deposit account\n");
            printf("4. Recurring deposit account\n\n");
            printf("----------------------------\n");
            printf("Enter your choice: ");
            scanf("%d", &k);
            printf("----------------------------\n");
            switch (k)
            {
                case 1:

                    details();
                    requirements();

                    break;

                case 2:
                    
                    details();
                    requirements();

                    break;
                

                case 3:

                details();
                requirements();

                case 4:

                details();
                requirements();
                
                    break;

                default:
                    printf("Invalid choice. You can enter 1 to 4 options as per your need.\n");
                    break;
          }
            break;
        
              case 2:
            printf("You selected option 2 (Access current account).\n");
        
           uname();
            break;

            default:
            printf("Invalid choice. Please select 1 or 2.\n");
            choiceinvalid();
            break;
     }
}


void uname() {
    char username[100];
    int attempts = 0;

    while(attempts < 3) {
        printf("Enter your username: ");
        scanf("%s", username);

        if(strcmp(username, "hetal") == 0) {
            pin();
            return ;
        } else {
            printf("Incorrect username. Please try again.\n");
            attempts++;
        }
    }

    printf("You have exceeded the maximum number of attempts.\n");
    return ;
}

bool vpin(int Apin)
{
    return Apin == ppin ;
}

void pin()
{
    int attempts = 0;

    while (attempts < Attemt)
    {
        int Apin;
        printf("Enter a PIN : ");
        scanf("%d", &Apin);
    

        if (vpin(Apin))
        {
            printf("Login successfully.\n");
             main2();
            return;
        }
        else
        {
            printf("Incorrect PIN.\n");
            attempts++;

            if (attempts < Attemt)
            {
                printf("You have %d more attempts.\n", Attemt - attempts);
            }
            else
            {
                printf("Access denied after %d attempts.\n", Attemt);
            }
        }
    }
}
void details()
{
               struct user u;

                       printf("Enter your name: ");
                       scanf(" %[^\n]",u.name);
                        u.name[strcspn(u.name, "\n")] = 0;
                       printf("-  -  -  -  -  -  -  -  -  -  -\n");
                        printf("Enter you current address: ");
                        scanf(" %[^\n]",u.address);
                        u.address[strcspn(u.address, "\n")] = 0;
                          printf("-  -  -  -  -  -  -  -  -  -  -\n");


                        printf("Enter your phone number: ");
                        scanf(" %[^\n]",u.phone);
                        char cont = 0 ;
                        while(Count > 10 && Count < 10)
                        {
                         printf("Please enter a valid phone number : ");
                         scanf("%s", u.phone);
                         Count = strlen(u.phone);
                        }
                        u.phone[strcspn(u.phone, "\n")] = 0;
                          printf("-  -  -  -  -  -  -  -  -  -  -\n");
                        printf("Enter mail email: ");
                        scanf(" %[^\n]",u.email);
                        
                        u.email[strcspn(u.email, "\n")] =0;
                          printf("-  -  -  -  -  -  -  -  -  -  -\n");
                        printf("Enter minimum balance (1000 to 2000) for first time : ");
                        scanf("%lf", &u.balance);
                        printf("----------------------------\n");
                        printf("\n\n");
                        printf("your name is %s\n", u.name);
                        printf("your address is %s\n", u.address);
                        printf("Phone number %s\n", u.phone);
                        printf("your email id is %s\n", u.email);
                        printf("your balance is %lf\n", u.balance);
   
}

void requirements()
{
   int n, k;
    char adcard[12];
    char rtcard[10];
    char pancard[10];
    char passnum[12];
    char vdcard[16];
    char count;

       printf("Please provide the following documents:\n");
       printf("-------------------------------\n");
       printf("-- Aadhaar card number: ");
       scanf("%s", adcard);
      count = strlen(adcard);

       while(count > 12 || count < 12)
   {
     printf("Please enter a valid Aadhaar card number: ");
     scanf("%s", adcard);
     count = strlen(adcard);
   }
   printf("-- PAN card number (optional): ");
   scanf("%s", pancard);
   count = strlen(pancard);

  while(count > 10 || count < 10)
  {
    printf("Please enter a valid pancard number: ");
    scanf("%s", pancard);
    count = strlen(pancard);
  }
   printf("-- Ration card number: ");
  scanf("%s", rtcard);
   count = strlen(rtcard);

  while (count > 10 || count < 10)
    {
   printf("Please enter a valid ration card number: ");
    scanf("%s", rtcard);
     count = strlen(rtcard);
   }
   printf("-- Voter ID card number: ");
   scanf("%s", vdcard);
   count = strlen(vdcard);

  while (count > 16 || count < 16)
  {
  printf("Please enter a valid voterID card number: ");
  scanf("%s", vdcard);
  count = strlen(vdcard);
  }
  printf("-- Passport number (Optional): ");
   scanf("%s", passnum);
     count = strlen(passnum);

  while(count > 12 || count < 12)
 {
    printf("Please enter a valid Passport number: ");
  scanf("%s", passnum);
  count = strlen(passnum);
     }

  printf("* Optional (not necessary)\n");
}
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
void main3();    // function prototype

void Exit();        // Function prototype
void main2() {
    int a;
    printf("---------------------------");
    printf("\n1. DEPOSIT AMOUNT\n");
    printf("2. WITHDRAW AMOUNT\n");
    printf("3. BANK TRANSFER\n");
    printf("4. RECHARGE\n");
    printf("5. PAY BILLS\n");
    printf("6. Change UPI PIN\n");
    printf("7. Apply For New Debit Card\n");
    printf("8. Simple interest\n");
    printf("9. EXIT\n");
    printf("----------------------------\n");
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
    else if(a==8)
        main3();
    else if (a == 9)
        Exit();
    else {
        printf("Wrong input\n");
        printf("Please Enter a Valid Choice number\n");
        printf("--------------------------------------\n");
        main2();
    }
  
}

void Transfer2();   // Function prototype
void Transfer3();   // Function prototype
void Transfer4();   // Function prototype
void Recharge2();   // function prototype
int Recharge3();   // function prototype
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
                    printf("\nA/c 3XXXXX6925 credited by Rs. %lld \nTotal Bal: Rs. %lld\nNever share OTP/Password for EMI postponement or any reason.\n", Depos, TotalAmount);
                    printf("-------------------------------------------------------------\n");
                    main2();
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
                    printf("\nA/c 3XXXXX6925 debited by Rs. %lld \nTotal Bal: Rs. %lld\nNever share OTP/Password for EMI postponement or any reason.\n", Withd, TotalAmount);
                    printf("-------------------------------------------------------------\n");
                    main2();
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
                 printf("\nA/c 3XXXXX6925 debited by Rs.%lld \nTotal Bal:%lld \nNever share OTP/Password for EMI postponement or any reason.",Trans ,TotalAmount);
                 main2();
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
      Transfer3();
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
            printf("  2.Credit / Debit / ATM card\n");
            printf("  3.Net Banking\n"); 
            printf("Select an option to Pay : ");
            scanf("%d",&c);
           Recharge3(c);
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
int Recharge3(int c){
  long long int x1;
  int x2,x3;
     switch(c){
         int e;
                case 1: 
                 printf("ENTER 4-DIGIT UPI PIN : ");
                scanf("%d",&e);
                printf("\npayment Succefull");
                break;
                case 2:
                
                
                printf("Enter card Number : ");
                scanf("%lld",&x1);
                printf("\nEnter expiry / Validity : ");
                scanf("%d",&x2);
                printf("\n Enter CVV : ");
                scanf("%d",&x3);
                printf("\nPyment Succesfull");
                break;
                case 3:
                 printf("Select Bank\n");
    printf("1. State Bank of India (SBI)\n");
    printf("2. ICICI Bank\n");
    printf("3. Axis Bank\n");
    printf("4. HDFC Bank\n");
    printf("5. Union Bank of India\n");
    printf("6. Central Bank of India\n");
    printf("----------------------------\n");
    printf("choice your bank : ");
    scanf("%d",&c);
     
    switch(c){
        case 1: case 2: case 3: case 4: case 5: case 6:
        int tpin,Trans1=12000;
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
                  printf("Enter Your TPIN: ");
                   scanf("%d", &tpin);
                   if(tpin==1234){
                       if(Trans1<=TotalAmount){
                             TotalAmount=TotalAmount-Trans1;
                 printf("\nA/c 3XXXXX6925 debited by Rs.%lld \nTotal Bal:%lld \nNever share OTP/Password for EMI postponement or any reason.",Trans ,TotalAmount);
                 main2();
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
      Transfer3();
         }
     }
     else{
           printf("Please Enter a Valid 10 Digit Account Number\n");
         Transfer3();
     }
   
        break;
        dafault :
        printf("wrong input\n");
    }
    break;
          default :
          printf("Wrong input\n");
              Recharge2();  
                
            }
            return 0;
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
            int n5;
             long long int n4;
            switch(n3){
                case 1:
                
               
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
        printf("\nDo You Want account holder name as name on the card?\n");
        printf("------if yes,  then Enter 1------\n");
        printf("------otherwise  Enter 0------\n");
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
                 printf("Set your Transaction Password(TPIN) : ");
            scanf("%d",&tpin2);
             printf("\nyou have Succefully Registred for Debit Card, you can Collect your Debit Card after 14 to 20 Working days from your respective bank \n");
             printf("------------------------------------------------------\n");
             main2();
            
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
            main2();
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
void main3() {
    float principal, rate, time;
    int periods;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("For simple interest:\n");
    printf("Simple Interest = %.2f\n", simpleInterest(principal, rate, time));

    printf("For compound interest:\n");
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &periods);

    printf("Compound Interest = %.2f\n", compoundInterest(principal, rate / 100, time,periods));


}
