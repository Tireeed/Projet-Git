#include <stdio.h>

int main() {
    int a, b;
    
    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &b);

    int sum = a + b;
    printf("La somme de %d et %d est : %d\n", a, b, sum);

    return 0;
}
