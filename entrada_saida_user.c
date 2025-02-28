#include <stdio.h>

int main() {
    char nome[50]; // Usaremos uma array de caracteres para armazenar o nome
    int idade = 0;

    printf("Digite seu nome: ");
    scanf("%s", &nome); // Lê uma string (nome) fornecida pelo usúario

    printf("Digite sua idade: ");
    scanf("%d", &idade); //Lê um número inteiro (idade) fornecido pelo usúario

    printf("Seu nome é: %s\n", nome);
    printf("Sua idade é: %d\n", idade);

    return 0;
}