#include <stdio.h>

int main(){
  int yojana_choice;
  char applicant_name[100];
  unsigned int dob;
  printf("Enter choice to apply for Yojana:\n 1. Sukanya Samridhhi Yojana(SSY) Scheme\n 2. Pradhan Mantri Suraksha Bima Yojana Scheme\n 3. Atal Pension Yojana Scheme\n 4. Pradhan Mantri Jeevan Jyoti Yojana\n");
  scanf("%d", &yojana_choice);
  if(yojana_choice==1){
    printf("Applying for Sukanya Samridhhi Yojana (SSY) Scheme\nEnter the following information:");
    printf("Enter name of applicant:\n");
    scanf("%[^\n]", applicant_name);
    printf("Enter date of birth (ddmmyyyy):\n");
    scanf("%d", &dob);
    
  
