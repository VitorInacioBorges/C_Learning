#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Aluno: Vitor Inacio Borges
// Professor: Marcos
// Data: 03/06/2025

int main()
{
    // Exercicio 1
/*
    int i=0, j=0, matriz[3][3], menor;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    menor = matriz[0][0];
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (matriz[i][j] <= menor) menor = matriz[i][j];
        }
    }
    printf("o menor numero da matriz e: %d", menor);


    // Exercicio 2

    int i=0, j=0, matriz[4][4], maior, linha, coluna;
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            if (matriz[i][j] >= maior){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("o maior numero da matriz e: %d. Ele esta na linha %d e na coluna %d", maior, linha, coluna);


    // Exercicio 3

    int i=0, j=0, matriz[5][5];
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if (i == j) matriz[i][j] = 1;
            else matriz[i][j] = 0;
        }
    }
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    // Exercicio 4

    int i=0, j=0, matriz[4][4], maioresQue10;
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
                if (matriz[i][j] > 10) maioresQue10++;
        }
    }
    printf("Temos %d numeros maiores que 10!", maioresQue10);


    // Exercicio 5

    int i=0, j=0, matriz[4][4], negativos;
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
                if (matriz[i][j] < 0) negativos++;
        }
    }
    printf("Temos %d numeros negativos!", negativos);


    // Exercicio 6

    int i=0, j=0, matriz[3][3], soma;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
                if (i == j) soma += matriz[i][j];
        }
    }
    printf("A soma de todos os valores da diagonal principal e: %d", soma);

    */
    // Exercicio 7


    // Exercicio 8
/*
    int i=0, j=0, matriz[10][10];
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if (i < j) matriz[i][j] = (2 * i) + (7 * j) - 2;
            else if (i > j) matriz[i][j] = (4 * i) * (4 * i) * (4 * i) + (5 * j) * (5 * j) + 1;
            else matriz[i][j] = (3 * i) * (3 * i) - 1;
        }
    }
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    */
}
