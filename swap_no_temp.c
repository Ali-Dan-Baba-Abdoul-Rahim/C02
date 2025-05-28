#include <stdio.h>

int main() {
    int a, b;
    
    // Lire l'entrée
    scanf("%d %d", &a, &b);
    
    // Inverser avec XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    // Afficher exactement comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0;
}
