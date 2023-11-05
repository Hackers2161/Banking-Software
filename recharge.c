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
