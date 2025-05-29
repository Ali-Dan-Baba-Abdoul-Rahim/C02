#include <stdio.h>

int main() {
    int a, b;

    // Lire deux entiers
    scanf("%d %d", &a, &b);

    // Échanger sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    // Afficher le résultat
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}
