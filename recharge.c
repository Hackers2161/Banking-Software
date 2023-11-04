void Recharge() {
    int choicePlan, len3;
    char mobileNumber[10];
    printf("Enter Mobile Number: ");
    scanf("%s", mobileNumber);
    int len3=strlen(mobileNumber);
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
    scanf("%d", &choicePlan);
    switch (choicePlan) {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7:
            printf("PROCEED TO PAY\n");
            break;
            default :
            printf("Wrong Input\n");
            printf("Please Select a Valid Plan Number\n");
            Recharge2();
    }
    }
    else{
        printf("Please Enter a valid Mobile Number\n");
        Recharge();
    }
}
void paymentMethodSelection(){
    int reEnterChoice, paymentMethod;
    printf("Please Re-Enter your choice Number : ");
    scanf("%d",&reEnterChoice);
    switch (reEnterChoice) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            printf("PROCEED TO PAY\n");
            printf("Select an option to pay\n ");
            printf("1.Paytm UPI\n");
            printf("2.Wallet / Postpaid\n");
            printf("3. Credit / Debit / ATM card\n");
            printf("4.Net Banking\n"); 
            printf("Select an option to Pay : ");
            scanf("%d",&paymentMethod);
            switch(paymentMethod)
            {
                case 1: case 2: case 3: case 4:
                printf("Pay Securely");
                break;
                default :
                printf("Wrong Input\n");
                Recharge3();
            }
            
            break;
            default :
            printf("Wrong Input\n");
            paymentMethodSelection();
    }
            
}
void invalidChoiceNumber(){
    int reEnterChoiceNumberAgain;
     printf("Please Re-Enter your choice Number : ");
     scanf("%d",&reEnterChoiceNumberAgain);
     switch(reEnterChoiceNumberAgain){
          case 1: case 2: case 3: case 4:
                printf("Pay Securely");
                break;
                default :
                printf("Wrong Input\n");
                invalidChoiceNumber();
     }
}
void PayBills() {
    int billChoice, electricityBoard;
    long long int consumerNumber;
    printf("\n");
    printf("1. Electricity Bill Payment\n");
    printf("2. Water and Sewage Bill Payment\n");
    printf("3. Gas Cylinder Bill Payment\n");
    printf("------------------------------\n");
    printf("enter your choice number: ");
    scanf("%d", &billChoice);
    if (billChoice == 1) {
        printf("1. Paschim Gujarat Vij Company Limited\n");
        printf("2. Madhya Gujarat Vij Company Limited\n");
        printf("3. Dasshin Gujarat Vij Company Limited\n");
        printf("4. Uttar Gujarat Vij Company Limited\n");
        printf("5. Vaghani Energy Limited\n");
        printf("-------------------------------\n");
        printf("Select your electricity board name: ");
        scanf("%d", &electricityBoard);
    }
    switch (electricityBoard) {
        case 1: case 2: case 3: case 4: case 5:
            printf("Please enter your 5 or 11 digit Consumer Number: ");
            scanf("%lld", &consumerNumber);
            printf("PROCEED TO PAY");
            break;
        default:
            printf("Wrong Input");
    }
}
