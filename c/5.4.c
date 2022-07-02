#include<stdio.h>
int main(){
    double loan, total, interest_rate, years, monthly_payment;
    printf("Enter the loan amount: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf",&interest_rate);
    printf("Enter the number of years: ");
    scanf("%lf", &years);
    total=loan+loan*years*interest_rate/100.00;
    monthly_payment=total/(years*12);
    printf("Total amount: %0.4lf\n", total);
    printf("Monthly amount: %0.4lf\n", monthly_payment);
}
