#include <stdio.h>
#include <stdlib.h>

void main() {
    int x = 0; //criando uma variável inteira
    printf("Valor de x: %d\n",x);
    x++; //incrementando x em 1 unidade
    printf("Valor de x: %d\n",x);
    float y = 12.345678; //criando uma variárel Real
    printf("Valor de y: %f\n",y);
    //Imprimindo o valor de y com apenas 2 casas
    printf("Valor de y: %.2f\n",y);
    //1 Caractere deve estar entre apóstrofo
    char sexo = 'M'; //variável que aceita 1 caractere
    printf("Sexo: %c\n", sexo);
    //Criando uma variável String (Texto)
    char nome[30] = "Joao";
    printf("Nome: %s\n", nome);
    //Imprimindo a primeira letra do nome
    printf("Primeira Letra: %c\n", nome[0]);
    printf("\nDigite o valor de x: ");
    scanf("%d", &x);
    printf("O valor digitado foi %d\n", x);
    printf("Olá Mundo!");
}
