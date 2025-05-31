#include <stdio.h>

int main() {
    int a, b;  // Déclaration de deux variables entières a et b

    // Lire les deux entiers saisis par l'utilisateur
    if (scanf("%d %d", &a, &b) != 2) {
        // Affiche un message d'erreur si la lecture échoue
        fprintf(stderr, "Erreur : veuillez entrer deux entiers valides.\n");
        return 1;  // Quitte le programme avec un code d'erreur
    }

    // Échange des valeurs sans utiliser de variable temporaire
    a = a + b;  // a devient la somme de a et b
    b = a - b;  // b devient l'ancienne valeur de a
    a = a - b;  // a devient l'ancienne valeur de b

    // Afficher les valeurs après l'échange
    printf("Après échange : a = %d, b = %d\n", a, b);

    return 0;  // Indique que le programme s'est terminé avec succès
}
