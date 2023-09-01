#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    float temp;

    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }

    printf("Valores em ordem ascendente: %d, %d, %d\n", A, B, C);

    return 0;
}
