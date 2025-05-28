// Inclusion de la bibliothèque standard pour les entrées/so// Inclusion de la bibliothèque standard pour les entrées/sorties
#include <stdio.h>
#include <limits.h> // Pour les constantes comme LLONG_MAX

// Fonction principale, point d'entrée du programme
int main() {
    // Déclaration des variables pour stocker les deux nombres (long long pour grandes valeurs)
    long long a, b;
    
    // Lecture des deux nombres saisis par l'utilisateur
    printf("Entrez deux nombres : ");
    scanf("%lld %lld", &a, &b);
    
    // Vérification pour éviter un débordement potentiel dans l'algorithme arithmétique
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
