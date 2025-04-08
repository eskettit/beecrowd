#include <stdio.h>

int main(){
    char  name[100];
    double salary;
    double sales;
    
    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &sales);
    printf("NAME = %s\n", name);
    double total = salary + (sales * 0.15);
    printf("TOTAL = R$ %.2f\n", total);
}
