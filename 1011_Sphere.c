#include <stdio.h>

int main() { 
    const double pi = 3.14159;
    double R;

    scanf("%lf", &R);

    double volume = (4.0 / 3) * pi * (R * R * R);
    
    printf("VOLUME = %.3f\n", volume);

    return 0;
}