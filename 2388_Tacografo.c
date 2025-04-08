#include <stdio.h>

int main() {

    int N;
    scanf("%i", &N);

    int T, V;
    int total = 0;
    
    for (int i = 0; i < N; i++) {
        
        scanf("%i%i", &T, &V);
        int distance = T * V;
        total += distance;
        
    }
    printf("%i\n", total);
}