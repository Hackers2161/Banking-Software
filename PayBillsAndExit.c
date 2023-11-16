void PayBills() {
    int a1, b1,n1,n2,d1,n3;
    //a1 -> bill_choice
    long long int e1;
    long long int c1;
    printf("\n");
    printf("1. Electricity Bill Payment\n");
    printf("2. Water and Sewage Bill Payment\n");
    printf("3. Gas Cylinder Bill Payment\n");
    printf("------------------------------\n");
    printf("enter your choice number: ");
    scanf("%d", &a1);

    if (bill_choice == 1) {
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
    if(bill_choice==2){
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
    if(bill_choice==3){
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
