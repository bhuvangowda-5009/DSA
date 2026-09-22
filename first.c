/*A college mess bills residents monthly. Charges depend on the meal plan: code 1 is vegetarian at 
Rs 110 per day, code 2 is non-vegetarian at Rs 145 per day, and code 3 is a special diet at Rs 170 
per day. A resident present for 25 days or more earns a 5 percent loyalty rebate, calculated on the 
base amount only. Guest meals are charged at a flat Rs 90 each and are never rebated. 
Given the number of days present, the meal plan code and the guest meal count, print the base 
amount, the rebate, the guest total and the net amount, each to two decimal places. 
If the resident was present for zero days, print NO CHARGE and nothing else. If the plan code is not 
1, 2 or 3, print INVALID PLAN and nothing else. */


#include<stdio.h>
int main(){
    int code_no,no_of_days,guest_meal;
    double amount=0;
    double guest_total=0;
    printf("Enter the code number:\n");
    scanf("%d",&code_no);
    printf("Enter the number of days:\n");
    scanf("%d",&no_of_days);
   
    printf("Enter the guest meal:\n");
    scanf("%d",&guest_meal);
    if(no_of_days==0){
        printf("No Charge.\n");
        return 0;
    }

    if(code_no==1){
        amount=no_of_days*110;

    }
    else if(code_no==2){
        amount=no_of_days*145;
    }
   else if(code_no==3){
    amount=no_of_days*170;
   }
   else{
    printf("Invalid plan");
    return 0;
   }
   double discount=0;
   if(no_of_days>=25){
    discount=amount*0.05;
   }
   guest_total=guest_meal*90;
   double amount_to_be_paid=amount-discount+guest_total;
   
   printf("Base amount=%lf\n",amount);
   printf("Disount=%lf\n",discount);
   printf("Guest amount=%.3f\n",guest_total);
   printf("netAmount=%lf\n",amount_to_be_paid);
  return 0;
}