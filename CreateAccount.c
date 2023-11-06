#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define ppin 9313
#define Attemt 3
 char Count;
bool vpin(int Apin);
void requirements();
void details();
void pin();

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
    int n, k;
    char adcard[12];
    char rtcard[10];
    char pancard[10];
    char passnum[12];
    char vdcard[16];
   

    printf("|  Welcome to your trusted banking system  |\n\n");
    printf("1. Open a new account\n\n");
    printf("2. login to the current account\n\n");
    printf("-----------------------------\n");
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
            pin();
            break;

            default:
            printf("Invalid choice. Please select 1 or 2.\n");
            break;
     }
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
