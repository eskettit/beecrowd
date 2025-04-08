#include <stdio.h>
 
int main() {
    int A, B, C, D;
    scanf("%i", &A);  
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);

    int diff = (A * B)-(C * D);

    printf("DIFERENCA = %i\n", diff);
}
