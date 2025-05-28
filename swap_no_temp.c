#include <stdio.h>

int main() {
    int a, b;
    
    // Lire deux nombres
    scanf("%d %d", &a, &b);
    
    // Inverser avec XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    // Afficher le résultat
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0;
}
