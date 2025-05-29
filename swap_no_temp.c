#include <stdio.h>

int main() {
    int a, b;
    
    // Lire deux nombres et vérifier si la lecture est réussie
    if (scanf("%d %d", &a, &b) != 2) {
        return 1; // Retourner 1 si l'entrée est invalide (non numérique ou incomplète)
    }
    
    // Inverser avec logique arithmétique
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Afficher exactement comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0; // Succès
}
