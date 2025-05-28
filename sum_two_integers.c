// Inclusion de la bibliothèque standard pour les entrées/sorties
#include <stdio.h>

// Fonction principale, point d'entrée du programme
int main() {
    // Déclaration des variables pour stocker les deux entiers et leur somme
    int a, b, somme;
    
    // Lecture des deux entiers saisis par l'utilisateur
    scanf("%d %d", &a, &b);
    
    // Calcul de la somme des deux entiers
    somme = a + b;
    
    // Affichage du résultat avec un message clair
    printf("La somme est : %d\n", somme);
    
    // Indique que le programme s'est terminé avec succès
    return 0;
}
