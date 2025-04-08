#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int correct = 0;

    for (int i = 0; i < 5; i++) {
        int guess;
        scanf("%d", &guess);
        if (guess == T) {
            correct++;
        }
    }

    printf("%d\n", correct);
    return 0;
}