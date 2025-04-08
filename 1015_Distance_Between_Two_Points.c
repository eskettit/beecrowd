#include <stdio.h>
#include <math.h>

int main() {

    double x1, y1;
    double x2, y2;

    scanf ("%lf%lf", &x1, &y1);
    scanf ("%lf%lf", &x2, &y2);

    double x = x2 - x1;
    double y = y2 - y1;

   double distance =  hypot(x,y);
   printf("%.4f\n", distance);
}