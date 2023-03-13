#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c = 0, found = 0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }
    
    if (c == n) {
        printf("%d pertence à sequência de Fibonacci.\n", n);
        found = 1;
    }
    else {
        printf("%d não pertence à sequência de Fibonacci.\n", n);
    }
    
    return 0;
}
