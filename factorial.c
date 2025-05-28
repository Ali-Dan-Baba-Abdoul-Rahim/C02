// Inclusion de la bibliothèque standard pour les entrées/sorties
#include <stdio.h>

// Fonction principale, point d'entrée du programme
int main() {
    // Déclaration des variables : n pour l'entier saisi, fact pour le factoriel
    int n;
    long long fact = 1; // Utilisation de long long pour gérer de grandes valeurs
    
    // Lecture de l'entier saisi par l'utilisateur
    scanf("%d", &n);
    
    // Vérification si l'entier est négatif (factoriel non défini pour les négatifs)
    if (n < 0) {
        printf("Le factoriel n'est pas défini pour les nombres négatifs.\n");
    } else {
        // Calcul du factoriel avec une boucle for
        for (int i = 1; i <= n; i++) {
            fact *= i; // Multiplie fact par i à chaque itération
        }
        // Affichage du résultat
        printf("Le factoriel de %d est : %lld\n", n, fact);
    }
    
    // Indique que le programme s'est terminé avec succès
    return 0;
}
