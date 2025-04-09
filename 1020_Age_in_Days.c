#include <stdio.h>

int main() {
    int dias;
    scanf("%d", &dias);

    int anos = dias / 365;
    int dias_restantes = dias % 365;
    int meses = dias_restantes / 30;
    dias = dias_restantes % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
