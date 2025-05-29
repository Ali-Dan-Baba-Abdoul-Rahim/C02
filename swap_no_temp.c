#include <stdio.h>

int main() {
    double a, b;
    
    // Lire deux nombres (entiers ou réels)
    scanf("%lf %lf", &a, &b);
    
    // Inverser avec logique arithmétique
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Afficher exactement comme demandé, avec les décimales pour les réels
    printf("Après échange: a = %f, b = %f\n", a, b);
    
    return 0;
}
