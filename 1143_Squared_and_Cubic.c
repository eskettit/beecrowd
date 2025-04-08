#include <stdio.h>

int main() {
    int N;
    scanf("%i", &N);

    for (int i = 1; i <= N; i++) {
        int square = i * i;
        int cube = i * i * i;
        printf("%i %i %i\n", i, square, cube);
    }
}