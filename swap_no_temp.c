// Inclusion de la bibliothèque standard pour les entrées/sorties
#include <stdio.h>

// Fonction principale, point d'entrée du programme
int main() {
    // Déclaration des variables pour stocker les deux nombres
    int a, b;
    
    // Lecture des deux nombres saisis par l'utilisateur
    scanf("%d %d", &a, &b);
    
    // Échange des valeurs sans variable temporaire en utilisant l'opérateur XOR
    a = a ^ b; // a contient a XOR b
    b = a ^ b; // b prend la valeur initiale de a
    a = a ^ b; // a prend la valeur initiale de b
    
    // Affichage des valeurs après l'échange
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    // Indique que le programme s'est terminé avec succès
    return 0;
}
