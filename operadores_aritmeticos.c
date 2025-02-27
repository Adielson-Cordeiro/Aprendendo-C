#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int soma = a + b;
    int subtracao = b - a;
    int multiplicacao = a * b;
    float divisao = (float)b / a;
    int resto = b % a;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);
    printf("Resto: %d\n"), resto;

    return 0;
}