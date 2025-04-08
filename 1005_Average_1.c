#include <stdio.h>
 
int main() {
    double A, B;
    scanf("%lf", &A);  
    scanf("%lf", &B);  
    double MEDIA = (3.5 * A + 7.5 * B) / 11;
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}