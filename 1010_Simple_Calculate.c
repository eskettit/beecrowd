#include <stdio.h>

struct Product {
    int code;
    int units;
    float price;
};

int main() {
    struct Product p1, p2;
    
    scanf("%d %d %f", &p1.code, &p1.units, &p1.price);    
    scanf("%d %d %f", &p2.code, &p2.units, &p2.price);
    
    float total1 = p1.units * p1.price;
    float total2 = p2.units * p2.price;
    
    float total_to_pay = total1 + total2;
    
    printf("VALOR A PAGAR: R$ %.2f\n", total_to_pay);
    
    return 0;
}