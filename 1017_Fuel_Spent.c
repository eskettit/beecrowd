#include <stdio.h>

int main () {

    int time;
    int avg_speed;
    scanf("%i%i", &time, &avg_speed);

    float distance = (float) (time * avg_speed);
    printf("%.3f\n", distance/12);
}
