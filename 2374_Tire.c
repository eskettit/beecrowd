#include <stdio.h>

int main() {
    int N;
    int M;

    scanf("%i", &N);
    scanf("%i", &M);

    int pressure = N - M;
    printf ("%i\n", pressure);
}
