#include <stdio.h>
 
int main() {

    int N;
    scanf("%i", &N);
    int termo = 1;

    for (int i = 1; i <= N; i++) {
        termo *= i;
    }
    printf("%i\n", termo);
    return 0;
}