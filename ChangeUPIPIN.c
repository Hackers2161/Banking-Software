

void Change_UPI_PIN(){
   
    printf("\n | UPI PIN will keep your account secure from unauthorized access. do not share this PIN with anyone. | \n");
    printf("\nENTER 4-DIGIT OLD UPI PIN : ");
    scanf("%d",&old_UPI_PIN);
    if(old_UPI_PIN==1234){
       reset_UPI_PIN();
       //Change_UPI_PIN2 -> reset_UPI_PIN
    }
    else{
        printf("INVALID OLD UPI PIN\n");
        printf("plese Re-Enter your UPI PIN\n");
        reset_UPI_PIN();
    }
   
}
 void reset_UPI_PIN(){
         printf("ENTER 4-DIGIT NEW UPI PIN : ");
        scanf("%d",&new_UPI_PIN);
         printf("CONFIRM 4-DIGIT NEW UPI PIN : ");
        scanf("%d",&Confirm_UPI_PIN);
        if(new_UPI_PIN==Confirm_UPI_PIN){
            printf("UPI PIN updated Succesfully");
        }
        if(new_UPI_PIN!=Confirm_UPI_PIN){
        printf("PIN didn't match\n");
        reset_UPI_PIN();
        }
    }
