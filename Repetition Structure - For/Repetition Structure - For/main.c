#include <stdio.h>
#include <stdlib.h>

// Aluno: Vitor Inacio Borges
// Prof: Marcos
// Dats: 19/05/2025

int main()
{
    // Exercicio 1

    int num;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++){
        printf("%d  ", i);
    }

    // Exercicio 2

    int num;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    for (int i = num; i >= 0; i--){
        printf("%d  ", i);
    }

    // Exercicio 3

    int num, cont = 0;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    for (int i = 1; cont < num; i++){
        if (((i % 2) != 0)){
            printf("%d  ", i);
            cont++;
        }
    }

    // Exercicio 4

    for (int i = 3; i <= 15; i++){
        if((i % 3) == 0){
            printf("%d  ", i);
        }
    }

    // Exercicio 5

    int soma = 0, cont = 0;
    for (int i = 1; cont < 50; i++){
        if((i % 2) == 0){
            soma += i;
            cont++;
        }
    }
    printf("%d", soma);

    // Exercicio 6

    for(int i = 10; i >= 0; i--){
        printf("%d\n", i);
    }
    printf("FIM");

    // Exercicio 7

    int num, cont = 1, linha = 1;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        if(linha == cont){
            printf("%d\n", i);
            linha++;
            cont = 1;
        } else {
            printf("%d ", i);
            cont++;
        }
    }

    // Exercicio 8

    int num, x = 0;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        if(num % i == 0) x++;
    }
    if(x == 2) printf("E PRIMO!");
    else printf("NAO E PRIMO!");
}
