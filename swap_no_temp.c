#include <stdio.h>

int main() {
    double a_double, b_double;
    int a, b;
    
    // Lire deux nombres (entiers ou réels)
    scanf("%lf %lf", &a_double, &b_double);
    
    // Convertir en entiers (tronquer la partie décimale)
    a = (int)a_double;
    b = (int)b_double;
    
    // Inverser avec logique arithmétique
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Afficher exactement comme demandé
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0;
}
