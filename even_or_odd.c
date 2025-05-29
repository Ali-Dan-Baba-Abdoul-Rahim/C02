// Inclusion de la bibliothèque standard pour les entrées/sorties
#include <stdio.h>

// Fonction principale, point d'entrée du programme
int main() {
    // Déclaration de la variable pour stocker l'entier saisi
    int nombre;
    
    // Lecture de l'entier saisi par l'utilisateur
    scanf("%d", &nombre);
    
    // Vérification si l'entier est pair ou impair à l'aide de l'opérateur modulo
    if (nombre % 2 == 0) {
        // Si le reste de la division par 2 est 0, le nombre est pair
        printf("%d est pair.\n", nombre);
    } else {
        // Sinon, le nombre est impair
        printf("%d est impair.\n", nombre);
    }
    
    // Indique que le programme s'est terminé avec succès
    return 0;
}
