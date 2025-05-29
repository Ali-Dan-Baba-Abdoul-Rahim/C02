#include <stdio.h>

int main() {
    int a, b;

    // Lire les deux nombres
    if (scanf("%d %d", &a, &b) != 2) {
        return 1; // Sortie avec une erreur
    }

    // Inversion sans variable temporaire
    a = a + b; // Étape 1
    b = a - b; // Étape 2
    a = a - b; // Étape 3

    // Afficher le résultat
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}
