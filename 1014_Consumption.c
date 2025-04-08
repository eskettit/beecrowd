#include <stdio.h>

int main() {
    
    int distance;
    double fuel;
    scanf("%i", &distance);
    scanf("%lf", &fuel);

    double average = distance / fuel;

    printf("%.3f km/l\n", average);
}