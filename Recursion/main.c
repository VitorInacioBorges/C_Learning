#include <stdio.h>
#include <string.h>
#include <math.h>

// Aluno: Vitor Inacio Borges
// Profesor: Marcos Monteiro Junior
// Data: 01/09/2025

int soma(int n){
    if(n == 1){
    return 1;
    }
    return n + soma(n - 1);
}

int naturaisCrescente(int n){
    if(n == 0){
        printf("%d ", n);
        return 0;
    }
    naturaisCrescente(n - 1);
    printf("%d ", n);
}

int naturaisDecrescente(int n){
    if(n == 0){
        printf("%d ", n);
        return 0;
    }
    printf("%d ", n);
    naturaisDecrescente(n - 1);
}

int xy(int x, int y){
    if(x == y){
        return y;
    }
    return x * xy(x + 1, y);
}

int soma_multi(int a, int b){
    if(b == 1){
        return a;
    }
    return a + soma_multi(a, b-1);
}

int fatorial(int n){
    if(n == 1){
        return 1;
    }
    return n * fatorial(n - 1);
}

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int inverteAux(int n, int invertido){
    if (n == 0) {
        return invertido;
    }
    return inverteAux(n / 10, invertido * 10 + (n % 10));
}

int inverte(int n) {
    return inverteAux(n, 0);
}

void binario(int n){ // esse n tem caso-base
    if(n > 1){
        binario(n / 2); // chamada recursiva
    }
    printf("%d", n % 2);
}

double serie(double n){
    if(n == 1){
        return 2;
    }
    return serie(n - 1) + ((1 + n * n) / n);
}

int main(){

    // Exercicio 1

    int num1;
    printf("Escreva um numero: ");
    scanf("%d", &num1);
    printf("%d", soma(num1));

    // Exercicio 2

    int num2;
    printf("Escreva um numero: ");
    scanf("%d", &num2);
    naturaisCrescente(num2);

    // Exercicio 3

    int num3;
    printf("Escreva um numero: ");
    scanf("%d", &num3);
    naturaisDecrescente(num3);

    // Exercicio 4

    // NAO PRECISA FAZER!!! (trata de ponteiros)

    // Exercicio 5

    // NAO PRECISA FAZER!!! (trata de ponteiros)

    // Exercicio 6

    int x, y;
    printf("Escreva dois numeros um menor e outro maior: ");
    scanf("%d %d", &x, &y);
    printf("%d", xy(x, y));

    // Exercicio 7

    int a, b;
    printf("Escreva dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("%d", soma_multi(a, b));

    // Exercicio 8

    int num4;
    printf("Escreva um numero: ");
    scanf("%d", &num4);
    printf("%d", fatorial(num4));

    // Exercicio 9

    int num5;
    printf("Escreva um numero: ");
    scanf("%d", &num5);
    printf("%d", fibonacci(num5));

    // Exercicio 10

    int num6;
    printf("Escreva um numero: ");
    scanf("%d", &num6);
    printf("%d", inverte(num6));

    // Exercicio 11

    int num7;
    printf("Escreva um numero: ");
    scanf("%d", &num7);
    binario(num7);

    // Exercicio 12

    double num8;
    printf("Escreva um numero: ");
    scanf("%lf", &num8);
    printf("%lf", serie(num8));

    // Exercicio 13

    // NAO PRECISA FAZER!!! (trata de ponteiros)
}
