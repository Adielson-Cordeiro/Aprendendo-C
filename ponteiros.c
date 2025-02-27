#include <stdio.h>

int main() {
    int x = 10;
    int *ponteiro; // Declara um ponteiro para um inteiro
    ponteiro = &x; // ponteiro aponta para o endereço de memória de x
    printf("O valor de x é: %d\n", *ponteiro);
    
    return 0;
}