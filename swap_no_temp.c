#include <stdio.h>

int main() {
    int a, b;
    
    // Read two numbers
    scanf("%d %d", &a, &b);
    
    // Swap without temporary variable
    a = a + b;    // a now holds sum of both
    b = a - b;    // b gets original a value
    a = a - b;    // a gets original b value
    
    // Print result
    printf("Après échange: a = %d, b = %d\n", a, b);
    
    return 0;
}
