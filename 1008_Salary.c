#include <stdio.h>

int main(){
    int emp_id;
    int hours;
    float hour_pay;
    
    scanf("%i", &emp_id);
    scanf("%i", &hours);
    scanf("%f", &hour_pay);

    float payment = hours * hour_pay;

    printf("NUMBER = %i\n", emp_id);
    printf("SALARY = U$ %.2f\n", payment);

}