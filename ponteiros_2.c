#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *ponteiro = array; // ponteiro aponta para o primeiro elemento do array

    printf("%d\n", *(ponteiro + 2)); // Isso emprimirá o terceiro elemento do array: 3
    return 0;
}