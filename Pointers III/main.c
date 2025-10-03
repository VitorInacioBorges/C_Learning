#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Aluno: Vitor Inacio Borges
// Professor: Marcos Monteiro
// Data: 03/10/2025

int main()
{
    // Exercicio 1

    float array[10];
    float *p = array; // &array[0]

    for(int i = 0; i < 10; i++){
        printf("%p \n", (void*)(p+i));
    }


    // Exercicio 2

    int linhas = 3, colunas = 3;
    float matriz[linhas][colunas];
    float *p = &matriz[0][0];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%p\n", (void*)(p + (i*colunas) + j));
        }
    }


    // Exercicio 3

    int array[5];
    int *p = array;

    for(int i=0; i<5; i++){
        printf("\nEscreva um numero: ");
        scanf("%d", (p+i));
    }
    for(int i=0; i<5; i++){
        printf("%d ", 2*(*(p+i)));
    }


    // Exercicio 4

    int array[5];
    int *p = array;

    for(int i=0; i<5; i++){
        printf("\nEscreva um numero: ");
        scanf("%d", (p+i));
    }
    for(int i=0; i<5; i++){
        if(((*(p+i)) % 2) == 0){
            printf("Posicao %d --> ", i);
            printf("Endereco: %p\n", (void*)(p+i));
        }
    }


}
