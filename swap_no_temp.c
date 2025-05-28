// Inclusion de la bibliothèque standard pour les entrées/sorties
#include <stdio.h>

// Fonction principale, point d'entrée du programme
int main() {
    // Déclaration des variables pour les deux nombres
    int a, b;
    
    // Lecture des deux nombres saisis par l'utilisateur
    scanf("%d %d", &a, &b);
    
    // Manipulation des variables pour échanger les valeurs sans temporaire
    a = a + b; // Ajoute b à a : a contient la somme
    b = a - b; // Soustrait b de la somme : b prend la valeur initiale de a
    a = a - b; // Soustrait le nouveau b de la somme : a prend la valeur initiale de b
    
    // Affichage des valeurs après l'échange
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    // Indique que le programme s'est terminé avec succès
    return 0;
}
