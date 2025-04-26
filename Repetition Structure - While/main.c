#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // Exercicio 1
    int num1_1;
    while (num1_1 <= 50){
        printf("%d\n", num1_1);
        num1_1++;
    }

    // Exercicio 2

    int num1_2 = 1;
    while (num1_2 <= 100){
        printf("%d\n", num1_2);
        num1_2++;
    }

    // Exercicio 3

    int num1_3 = 100;
    while (num1_3 >= 1){
        printf("%d\n", num1_3);
        num1_3--;
    }

    // Exercicio 4

    int num1_4 = 100;
    while (num1_4 <= 200){
        printf("%d\n", num1_4);
        num1_4++;
    }

    // Exercicio 5

    int num1_5 = 200;
    while (num1_5 >= 100){
        printf("%d\n", num1_5);
        num1_5--;
    }

    // Exercicio 6

    int num1_6 = 1;
    while (num1_6 <= 500){
        if ((num1_6 % 5) == 0){
            printf("%d\n", num1_6);
        }
        num1_6++;
    }

    // Exercicio 7

    int num1_7 = 1;
    while (num1_7 <= 100){
        if ((num1_7 % 2) == 0){
            printf("%d\n", num1_7);
        }
        num1_7++;
    }

    // Exercicio 8

    int cont1_8 = 1, num1_8 = 1;
    while (cont1_8 <= 100){
        if (!((num1_8 % 2) == 0)){
            printf("%d\n", num1_8);
            cont1_8++;
        }
        num1_8++;
    }

    // Exercicio 9

    int num1_9 = 1, quadrado1_9;
    while (num1_9 <= 20){
        quadrado1_9 = pow(num1_9, 2);
        printf("%d\n", quadrado1_9);
        num1_9++;
    }

    // Exercicio 10

    int num1_10 = 1;
    while (num1_10 <= 100){
        if(!((num1_10 % 2) == 0)){
            printf("%d\n", num1_10);
        }
        num1_10++;
    }

    // Exercicio 11

    int cont1_11 = 1;
    float metade1_11, num1_11;
    while (cont1_11 < 11){
        printf("\nEscreva um numero: ");
        scanf("%f", &num1_11);
        metade1_11 = num1_11 / 2.0;
        printf("A metade e: %0.2f", metade1_11);
        cont1_11++;
    }

    // Exercicio 12

    int cont1_12 = 1, quadrado1_12, num1_12;
    while (cont1_12 < 11){
        printf("\nEscreva um numero: ");
        scanf("%d", &num1_12);
        quadrado1_12 = pow(num1_12, 2);
        printf("O quadrado e: %d", quadrado1_12);
        cont1_12++;
    }

    // Exercicio 13

    int cont1_13 = 1;
    float raiz1_13, num1_13;
    while (cont1_13 < 16){
        printf("\nEscreva um numero: ");
        scanf("%f", &num1_13);
        raiz1_13 = sqrt(num1_13);
        printf("A raiz quadrada e: %0.2f", raiz1_13);
        cont1_13++;
    }

    // Exercicio 14

    int cont1_14 = 1;
    double log1_14, num1_14;
    while (cont1_14 < 9){
        printf("\nEscreva um numero: ");
        scanf("%lf", &num1_14);
        log1_14 = log10(num1_14);
        printf("O log de 10 desse numero e: %0.2lf", log1_14);
        cont1_14++;
    }

    // Exercicio 15

    int num1_15 = 1, soma1_15 = 0;
    while (num1_15 <= 100){
        printf("%d\n", num1_15);
        soma1_15 = soma1_15 + num1_15;
        num1_15++;
    }
    printf("%d", soma1_15);

    // Exercicio 16

    int num1_16 = 1, soma1_16 = 0, quadrado1_16;
    while (num1_16 <= 100){
        printf("%d\n", num1_16);
        quadrado1_16 = pow(num1_16, 2);
        soma1_16 += quadrado1_16;
        num1_16++;
    }
    printf("%d", soma1_16);

    // Exercicio 17

    int num1_17 = 1;
    float metade1_17, soma1_17 = 0;
    while (num1_17 <= 100){
        printf("%d\n", num1_17);
        metade1_17 = num1_17 / 2.0;
        soma1_17 += metade1_17;
        num1_17++;
    }
    printf("%0.2f", soma1_17);

    // Exercicio 18

    int num1_18 = 1, soma1_18 = 0, cubo1_18;
    while (num1_18 <= 100){
        printf("%d\n", num1_18);
        cubo1_18= pow(num1_18, 3);
        soma1_18+= cubo1_18;
        num1_18++;
    }
    printf("%d", soma1_18);

    // Exercicio 19

    int num1_19 = 1, soma1_19 = 0, cont1_19 = 0;
    float media1_19;
    while (num1_19 <= 100){
        printf("%d\n", num1_19);
        soma1_19 = soma1_19 + num1_19;
        num1_19++;
        cont1_19++;
    }
    media1_19 = (float)soma1_19 / cont1_19;
    printf("%0.2f", media1_19);

    // Exercicio 20

    int num1_20, cont1_20 = 1, maior1_20, menor1_20;
    printf("Escreva 1 numero: ");
    scanf("%d", &num1_20);
    maior1_20 = menor1_20 = num1_20; // Primeiro numero deve ser necessariamente o menor E o maior ao mesmo tempo
    while (cont1_20 < 10){ // Mais 9 numeros para serem atribuidos
        printf("Escreva 1 numero: ");
        scanf("%d", &num1_20);

        if (num1_20 >= maior1_20){
            maior1_20 = num1_20;
        }
        if (num1_20 <= menor1_20){
            menor1_20 = num1_20;
        }
        cont1_20++;
    }
    printf("O maior desses numeros e %d e o menor deles e %d", maior1_20, menor1_20);

    // Exercicio 21

    int num1_21, cont1_21 = 0, maior1_21, segundo_maior1_21, menor1_21;
    while (cont1_21 < 10){
        printf("Escreva 1 numero: ");
        scanf("%d", &num1_21);
        if (cont1_21 == 0){
            maior1_21 = segundo_maior1_21 = num1_21;
        } else {
            if (num1_21 > maior1_21){
                segundo_maior1_21 = maior1_21;
                maior1_21 = num1_21;
            } else if ((num1_21 > segundo_maior1_21) || (maior1_21 == segundo_maior1_21)){
                segundo_maior1_21 = num1_21;
            }
        }
        cont1_21++;
    }
    printf("O maior numero e %d e o segundo maior e %d", maior1_21, segundo_maior1_21);

    // Exercicio 22

    int limite_inferior1_22, limite_superior1_22, cont1_22 = 0, soma_pares1_22 = 0;
    printf("Escreva os limites inferior e superior de um intervalo aberto: ");
    scanf("%d %d", &limite_inferior1_22, &limite_superior1_22);
    cont1_22 = limite_inferior1_22 + 1;
    while (cont1_22 < limite_superior1_22){
        if ((cont1_22 % 2) == 0){
            printf("%d\n", cont1_22);
            soma_pares1_22 += cont1_22;
        }
        cont1_22++;
    }
    printf("A soma dos pares e %d", soma_pares1_22);

    // Exercicio 23

    int num1_23, cont1_23 = 1;
    printf("Escreva um numero: ");
    scanf("%d", &num1_23);
    while (cont1_23 <= num1_23){
        if ((cont1_23 % 3) == 0){
            printf("%d\n", cont1_23);
        } else if ((cont1_23 % 5) == 0){
            printf("%d\n", cont1_23);
        }
        cont1_23++;
    }


    // Exercicio 24

    int num1__24, iteracao1_24 = 0, par1_24 = 0, impar1_24 = 0;
    while (iteracao1_24 < 200){
        printf("Escreva 1 numero: ");
        scanf("%d", &num1__24);
        if ((num1__24 % 2) == 0){
            par1_24++;
        } else {
            impar1_24++;
        }
        iteracao1_24++;
    }
    printf("Temos %d numeros pares e %d impares.", par1_24, impar1_24);

    // Exercicio 25

    int num1_25, iteracao1_25 = 0, maior1_25 = 0, menor1_25 = 0;
    while (iteracao1_25 < 15){
        printf("Escreva 1 numero: ");
        scanf("%d", &num1_25);
        if (num1_25 > 30){
            maior1_25++;
        } else {
            menor1_25++;
        }
        iteracao1_25++;
    }
    printf("Temos %d numeros maiores que 30 e %d numeros menores que 30", maior1_25, menor1_25);


    // Exercicio 26

    int num1_26, iteracao1_26 = 0, soma_positivos1_26 = 0, cont_negativos1_26 = 0;
    while (iteracao1_26 < 20){
        printf("Escreva 1 numero: ");
        scanf("%d", &num1_26);
        if (num1_26 > 0){
            soma_positivos1_26 = soma_positivos1_26 + num1_26;
        } else if (num1_26 < 0){
            cont_negativos1_26++;
        } else {
            soma_positivos1_26 = soma_positivos1_26 + num1_26;
        }
        iteracao1_26++;
    }
    printf("A soma dos positivos e %d e temos %d numeros negativos", soma_positivos1_26, cont_negativos1_26);

}
