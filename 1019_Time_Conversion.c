#include <stdio.h>

int main() {
    int seconds;
    scanf("%i", &seconds);

    int hours = seconds / 3600;
    int remaining_seconds = seconds % 3600;
    int minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    printf("%i:%i:%i\n", hours, minutes, seconds);

    return 0;
}
