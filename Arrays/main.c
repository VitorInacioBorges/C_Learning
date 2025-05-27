#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Aluno: Vitor Inacio Borges
Professor: Msrcos
Data: 26/05/2025
*/

int main(){


    // Exercicio 1

    int i, vet[6];
    for(i = 0; i < 6; i++){
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 6; i++){
        printf("%d ", vet[i]);
    }


    // Exercicio 2

    int i, vet[6];
    for(i = 0; i < 6; i++){
        scanf("%d", &vet[i]);
    }
    for(i = 5; i > -1; i--){
        printf("%d ", vet[i]);
    }


    // Exercicio 3

    int i, vet[5];
    double soma = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 5; i++){
        soma += vet[i];
    }
    soma = soma / i;
    printf("%lf", soma);


    // Exercicio 4

    int A[6] = {1, 0, 5, -2, -5, 7};
    int valores = A[0] + A[1] + A[5];
    printf("Soma: %d\n", valores);
    A[4] = 100;
    for (int i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }


    // Exercicio 6

    int vet[10], pares;
    printf("Escreva 10 numeros:\n");
    for (int i=0; i<10; i++){
        scanf("%d", &vet[i]);
    }
    for (int i=0; i<10; i++){
        if (vet[i] % 2 == 0){
            pares++;
        }
    }
    printf("Temos %d pares", pares);


    // Exercicio 7

    int X[10], maior, menor;
    printf("Escreva 10 numeros:\n");
    for (int i=0; i<10; i++){
        scanf("%d", &X[i]);
    }
    for (int i=0; i<10; i++){
        if (i == 0) maior = menor = X[i];
        else if (X[i] > maior) maior = X[i];
        else if (X[i] < menor) menor = X[i];
    }
    printf("%d - MAIOR / %d - MENOR", maior, menor);


    // Exercicio 8

    int vet[10], somaPares = 0, contNegativos = 0;
    printf("Escreva 10 numeros:\n");
    for (int i=0; i<10; i++){
        scanf("%d", &vet[i]);
        if(vet[i] < 0) contNegativos++;
        else if(vet[i] > 0) somaPares += vet[i];
    }
    printf("%d - Numero de Negativos / %d - Soma dos Pares", contNegativos, somaPares);


    // Exercicio 9

    int A[10], B[10], C[10];
    printf("Escreva 10 numeros para o array A:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &A[i]);
    }
    printf("Escreva 10 numeros para o array B:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &B[i]);
    }
    for(int i=0; i<10; i++){
        C[i] = A[i] - B[i];
        printf("%d ", C[i]);
    }


    // Exercicio 10

    int vet[100], x=1;
    for(int i=0; i<100; i++){
        if (x % 7 != 0) vet[i] = x;
        else i--;
        x++;
    }
    for(int i=0; i<100; i++){
        printf("%d ", vet[i]);
    }


    // Exercicio 11

    int normal[20], quadrado[20];
    printf("Escreva 20 numeros:\n");
    for(int i=0; i<20; i++){
        scanf("%d", &normal[i]);
    }
    for(int i=0; i<20; i++){
        quadrado[i] = pow(normal[i], 2);
    }
    printf("Array Normal: ");
    for(int i=0; i<20; i++){
        printf("%d ", normal[i]);
    }
    printf("\nArray ao Quadrado: ");
    for(int i=0; i<20; i++){
        printf("%d ", quadrado[i]);
    }


    return 0;
}
