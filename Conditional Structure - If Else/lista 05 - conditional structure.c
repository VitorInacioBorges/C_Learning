#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Lista 05 - Estrutura Condicional
// Aluno: Vitor Inacio Borges
// Data: 07/04/2025

int main(){

    // Exercicio 1

    int num1_1;

    printf("Escreva um numero: ");
    scanf("%d", &num1_1);
    if (num1_1 > 20){
        printf("%d\n\n", num1_1);
    } else {
        printf("Esse numero e menor que 20. Nao irei imprimi-lo!\n\n");
    }

    // Exercicio 2

    int num1_2, num2_2, soma1_2;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1_2, &num2_2);
    soma1_2 = num1_2 + num2_2;
    if (soma1_2 > 10) {
        printf("%d\n\n", soma1_2);
    } else {
        printf("Essa soma da menos que 10. Nao irei imprimi-la!\n\n");
    }

    // Exercicio 3

    int num1_3;

    printf("Digite 1 numero: ");
    scanf("%d", &num1_3);
    if ((num1_3 % 2) == 0){
        printf("Esse numero e PAR!\n\n");
    } else {
        printf("Esse numero e IMPAR!\n\n");
    }

    // Exercicio 4

    int num1_4;

    printf("Digite 1 numero: ");
    scanf("%d", &num1_4);
    if (num1_4 < 0){
        printf("Esse numero e NEGATIVO!\n\n");
    }
    else if (num1_4 > 0){
        printf("Esse numero e POSITIVO!\n\n");
    }
    else {
        printf("Esse numero e NULO!\n\n");
    }

    // Exercicio 5

    int num1_5, num2_5, soma1_5, resultado1_5;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1_5, &num2_5);
    soma1_5 = num1_5 + num2_5;
    if (soma1_5 > 20) {
        resultado1_5 = soma1_5 + 8;
        printf("%d\n\n", resultado1_5);
    } else {
        resultado1_5 = soma1_5 - 5;
        printf("%d\n\n", resultado1_5);
    }

    // Exercicio 6

    int num1_6, quadrado1_6;
    double raiz1_6;

    printf("Digite 1 numero: ");
    scanf("%d", &num1_6);
    raiz1_6 = sqrt(num1_6);
    if (num1_6 >= 0) {
        printf("A raiz desse numero e: %lf\n\n", raiz1_6);
    } else {
        quadrado1_6 = pow(num1_6, 2);
        printf("Esse numero elevado ao quadrado e: %d\n\n", quadrado1_6);
    }

    // Exercicio 7

    int num1_7, num2_7;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1_7, &num2_7);
    if (num1_7 > num2_7) {
        printf("%d e maior que %d\n\n", num1_7, num2_7);
    } else if (num2_7 > num1_7) {
        printf("%d e maior que %d\n\n", num2_7, num1_7);
    } else {
        printf("Os dois numeros sao iguais!\n\n");
    }

    // Exercicio 8

    int num1_8, num2_8;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1_8, &num2_8);
    if ((num1_8 % num2_8) == 0) {
        printf("%d e divisivel por %d\n\n", num1_8, num2_8);
    } else {
        printf("%d NAO e divisivel por %d\n\n", num1_8, num2_8);
    }

    // Exercicio 9

    int num1_9;

    printf("Digite 1 numeros: ");
    scanf("%d", &num1_9);
    if ((num1_9 % 3) == 0) {
        printf("%d e multiplo de 3!\n\n", num1_9);
    } else {
        printf("%d NAO e multiplo de 3!\n\n", num1_9);
    }

    // Exercicio 10

    int num1_10;

    printf("Digite 1 numero. Veremos se ele e divisivel por 5: ");
    scanf("%d", &num1_10);
    if ((num1_10 % 5) == 0) {
        printf("%d e divisivel por 5!\n\n", num1_10);
    } else {
        printf("%d NAO e divisivel por 5!\n\n", num1_10);
    }

    // Exercicio 11

    int num1_11;

    printf("Digite 1 numero. Veremos se ele e divisivel por 3 e por 7 ao mesmo tempo: ");
    scanf("%d", &num1_11);
    if ((num1_11 % 3) == 0) {
        if ((num1_11 % 7) == 0){
            printf("%d e divisivel por 3 e por 7 ao mesmo tempo!\n\n", num1_11);
        }
    } else {
        printf("%d NAO e divisivel por 3 e por 7 ao mesmo tempo!\n\n", num1_11);
    }

    // Exercicio 12

    int num1_12;

    printf("Digite 1 numero. Veremos se ele e divisivel por 10, por 5 ou por 2: ");
    scanf("%d", &num1_12);
    if ((num1_12 % 10) == 0) {
        printf("Ele e divisivel por 10!\n");
        if ((num1_12 % 5) == 0) {
            printf("E divisivel por 5!\n");
            if ((num1_12 % 2) == 0){
                printf("E por 2 tambem!\n\n");
            }
        }
    } else if ((num1_12 % 5) == 0) {
        printf("Ele e divisivel por 5!\n");
        if ((num1_12 % 2) == 0){
            printf("E por 2 também!\n\n");
        }
      } else if ((num1_12 % 2) == 0){
          printf("Ele e divisivel por 2!\n\n");
        } else {
            printf("Ele nao e divisivel por NENHUM deles!\n\n");
          }

    // Exercicio 13

    int num1_13, prestacao;
    printf("Insira o seu salario bruto: ");
    scanf("%d", &num1_13);
    printf("Insira a prestacao: ");
    scanf("%d", &prestacao);
    if (prestacao > (0.3 * num1_13)){
        printf("Seu credito nao pode ser concedido.\nColoque um valor que seja 30 por cento ou menos do valor do salario.\n\n");
    } else {
        printf("Seu credito foi concedido!\n\n");
    }

    // Exercicio 14

    int A, B, C, D;
    int maior, menor;
    printf("Escreva 4 numeros: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    maior = menor = A;

    if (A > maior){
        maior = A;
    }
    if (B > maior){
        maior = B;
    }
    if (C > maior){
        maior = C;
    }
    if (D > maior){
        maior = D;
    }
    if (A < menor){
        menor = A;
    }
    if (B < menor){
        menor = B;
    }
    if (C < menor){
        menor = C;
    }
    if (D < menor){
        menor = D;
    }
    printf("O maior desses numeros e: %d\n", maior);
    printf("O menor desses numeros e: %d\n\n", menor);

    // Exercicio 15

    int num1_15, num2_15, num3_15, mediador15;
    printf("Escreva 3 valores: ");
    scanf("%d %d %d", &num1_15, &num2_15, &num3_15);
    if (num1_15 > num2_15){
        mediador15 = num1_15;
        num1_15 = num2_15;
        num2_15 = mediador15;
    }
    if (num2_15 > num3_15){
        mediador15 = num2_15;
        num2_15 = num3_15;
        num3_15 = mediador15;
    }
    if (num1_15 > num2_15){
        mediador15 = num1_15;
        num1_15 = num2_15;
        num2_15 = mediador15;
    }
    printf("A ordem CRESCENTE dos numeros e: %d %d %d\n\n", num1_15, num2_15, num3_15);

    // Exercicio 16

    int num1_16, num2_16, num3_16, mediador16;
    printf("Escreva 3 valores: ");
    scanf("%d %d %d", &num1_16, &num2_16, &num3_16);
    if (num1_16 < num2_16){
        mediador16 = num1_16;
        num1_16 = num2_16;
        num2_16 = mediador16;
    }
    if (num2_16 < num3_16){
        mediador16 = num2_16;
        num2_16 = num3_16;
        num3_16 = mediador16;
    }
    if (num1_16 < num2_16){
        mediador16 = num1_16;
        num1_16 = num2_16;
        num2_16 = mediador16;
    }
    printf("A ordem DECRESCENTE dos numeros e: %d %d %d\n\n", num1_16, num2_16, num3_16);

    // Exercicio 17

    int num1_17;
    printf("Insira um numero: ");
    scanf("%d", &num1_17);
    if ((20 < num1_17) && (num1_17 < 90)){
        printf("Este numero ESTA na faixa de valor (entre 20 e 90)!\n\n");
    } else {
        printf("Este numero NAO esta na faixa de valor (entre 20 e 90)!\n\n");
    }

    // Exercicio 18

    int num1_18;
    printf("Insira um numero: ");
    scanf("%d", &num1_18);
    if (num1_18 == 5){
        printf("Esse numero e 5!\n");
        printf("E NAO pertence ao intervalo de valores (500-1000)!\n\n");
    } else if (num1_18 == 200){
        printf("Esse numero e 200!\n");
        printf("E NAO pertence ao intervalo de valores (500-1000)!\n\n");
    } else if (num1_18 == 400){
        printf("Esse numero e 400!\n");
        printf("E NAO pertence ao intervalo de valores (500-1000)!\n\n");
    } else if ((500 < num1_18) && (num1_18 < 1000)){
        if ((500 < num1_18) && (num1_18 < 1000)){
            printf("Este numero PERTENCE ao intervalo de valores (500-1000)!\n\n");
        }
    } else {
        printf("Esse numero nao pertence a NENHUM dos metodos de identficacao!\n\n");
    }

    // Exercicio 19

    double num1_19, num2_19, quadrado1_19, quadrado2_19;
    double raiz1_19, raiz2_19;
    printf("Insira 2 numeros: ");
    scanf("%lf %lf", &num1_19, &num2_19);

    if (num1_19 > num2_19){
        raiz1_19 = sqrt(num1_19);
        quadrado2_19 = pow(num2_19, 2);
        printf("A raiz do maior numero e aproximadamente: %0.1lf\n", raiz1_19);
        printf("O quadrado do menor numero e: %0.1lf\n\n", quadrado2_19);
    } else if (num1_19 < num2_19){
        raiz2_19 = sqrt(num2_19);
        quadrado1_19 = num1_19 * num1_19;
        printf("A raiz do maior numero e aproximadamente: %0.1lf\n", raiz2_19);
        printf("O quadrado do menor numero e: %0.1lf\n\n", quadrado1_19);
    } else {
        printf("Os dois numeros sao iguais!\n\n");
    }

    // Exercicio 20

    int peso;
    float altura;
    printf("Insira seu peso em kg: ");
    scanf("%d", &peso);
    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);
    const float IMC = (peso /(altura * altura));

    if (IMC < 20){
        printf("Seu estado de IMC atualmente e: ABAIXO DO PESO\nE o seu IMC e: %.2f\n\n", IMC);
    } else if ((IMC >= 20) && (IMC < 25)){
        printf("Seu estado de IMC atualmente e: PESO NORMAL\nE o seu IMC e: %.2f\n\n", IMC);
    } else if ((IMC >= 25) && (IMC < 30)){
        printf("Seu estado de IMC atualmente e: SOBRE PESO\nE o seu IMC e: %.2f\n\n", IMC);
    } else if ((IMC >= 30) && (IMC < 40)){
        printf("Seu estado de IMC atualmente e: OBESO\nE o seu IMC e: %.2f\n\n", IMC);
    } else {
        printf("Seu estado de IMC atualmente e: OBESO MÓRBIDO\nE o seu IMC e: %.2f\n\n", IMC);
    }

    // Exercicio 21

    float saldo, credito, creditos_juros;
    int percentual;
    printf("Querido trabalhador, escreva seu saldo médio no ultimo ano: ");
    scanf("%f", &saldo);
    if (saldo <= 500){
        percentual = 0;
        credito = 0;
    }
    else if ((saldo > 500) && (saldo <= 1000)){
        percentual = 30;
        credito = saldo * 0.3;
    }
    else if ((saldo > 1000) && (saldo <= 3000)){
        percentual = 40;
        credito = saldo * 0.4;
    }
    else {
        percentual = 50;
        credito = saldo * 0.5;
    }
    creditos_juros = credito * 1.02;
    printf("O seu saldo medio e: %0.2f reais\n", saldo);
    printf("Seu percentual de credito fica: %d por cento\n", percentual);
    printf("Com esse saldo voce tem um credito de %0.2f reais\n", credito);
    printf("Seu credito com juros ficam %0.2f reais\n\n", creditos_juros);
}
