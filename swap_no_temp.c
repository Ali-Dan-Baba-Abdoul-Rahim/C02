#include <stdio.h>

int main() {
    int a, b;
    
    // Lire deux nombres et vérifier si la lecture est réussie
    if (scanf("%d %d", &a, &b) != 2) {
        // Si la lecture échoue (entrées non numériques ou manquantes), quitter
        return 1; // Code de retour non nul pour indiquer une erreur
    }
    
    // Vérifier si les valeurs sont dans une plage raisonnable pour éviter le débordement
    // Par exemple, limiter à la plage d'un int 32 bits
    if (a > 1000000000 || a < -1000000000 || b > 1000000000 || b < -1000000000) {
        // Si hors plage, quitter (ou ajuster selon l'énoncé)
        return 1;
    }
    
    // Inverser avec logique arithmétique
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Afficher exactement comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0;
}
