#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);

    int sequence[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &sequence[i]);
    }

    int count = 1;
    for (int i = 1; i < N; i++) {
        if (sequence[i] != sequence[i -1]) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}