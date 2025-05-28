// Inclusion des bibliothèques standard pour les entrées/sorties et les limites
#include <stdio.h>
#include <limits.h>

// Fonction principale, point d'entrée du programme
int main() {
    // Déclaration des variables pour stocker les deux nombres
    long long a, b;
    
    // Lecture des deux nombres saisis par l'utilisateur
    printf("Entrez deux nombres : ");
    if (scanf("%lld %lld", &a, &b) != 2) {
        // Vérifie si la lecture a réussi (entrées valides)
        printf("Erreur : veuillez entrer deux nombres entiers valides.\n");
        return 1; // Termine le programme avec une erreur
    }
    
    // Vérification pour éviter un débordement dans l'algorithme arithmétique
    if (a > LLONG_MAX - b || a < LLONG_MIN + b) {
        printf("Erreur : les nombres sont trop grands pour être échangés sans débordement.\n");
        return 1; // Termine le programme avec une erreur
    }
    
    // Échange des valeurs sans variable temporaire en utilisant des opérations arithmétiques
    a = a + b; // a contient la somme de a et b
    b = a - b; // b prend la valeur initiale de a (somme - b)
    a = a - b; // a prend la valeur initiale de b (somme - nouveau b)
    
    // Affichage des valeurs après l'échange
    printf("Après échange: a = %lld, b = %lld\n", a, b);
    
    // Indique que le programme s'est terminé avec succès
    return 0;
}
