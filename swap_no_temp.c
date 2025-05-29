#include <stdio.h>

int main() {
    int a, b;
    
    // Lire deux nombres
    scanf("%d %d", &a, &b);
    
    // Inverser avec logique arithmétique
    a = a ^ b;
    b = a ^ b;  // b = a_initial (car a ^ b ^ b = a)
    a = a ^ b;  // a = b_initial (car a ^ b ^ a = b)
    
    // Afficher exactement comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0;
}
