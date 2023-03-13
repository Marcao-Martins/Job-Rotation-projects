#include <stdio.h>
#include <string.h>

void inverteString(char str[]) {
    int tamanho = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = tamanho-1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char string[] = "Quero me dedicar no trabalho!";
    
    printf("String original: %s\n", string);
    
    inverteString(string);
    
    printf("String invertida: %s\n", string);
    
    return 0;
}
