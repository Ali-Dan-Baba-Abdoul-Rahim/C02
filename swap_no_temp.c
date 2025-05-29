#include <stdio.h>

int main() {
    int a, b;
    
    // Lire deux nombres
    scanf("%d %d", &a, &b);
    
    // Inverser avec logique arithmétique
    a = a * b;
    b = a / b;  // b = a_initial
    a = a / b;  // a = b_initial
    
    // Afficher exactement comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0;
}
