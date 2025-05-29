#include <stdio.h>

int main() {
    int a, b;
    
    // Lire deux nombres
    scanf("%d %d", &a, &b);
    
    // Inverser avec logique arithmétique
    a = a + b;    // a contient la somme
    b = a - b;    // b prend la valeur initiale de a
    a = a - b;    // a prend la valeur initiale de b
    
    // Afficher exactement comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0;
}
