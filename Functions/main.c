#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Aluno: Vitor Inacio Borges
// Professor: Marcos Monteiro Junior
// Data: 19/08/2025

// Lista de Exercicios 17 - Funcoes:

int sumDivisible(int a, int b, int c){
    int sum = 0;
    for(int i = b + 1; i < c; i++){
        if(i % a == 0){
            sum += i;
        }
    }
    return sum;
}

long timeToSecs(int hours, int minutes, int seconds){
    long secs = 0;
    secs += hours*3600;
    secs += minutes*60;
    secs += seconds;
    return secs;
}

int numberCharacteristic(int num){
    int pt1, pt2;
    pt1 = num % 100;
    pt2 = num / 100;
    if(pt1 + pt2 == sqrt(num)){
        return 1;
    } else {
        return 0;
    }
}

float mediums(int x, int y, int z, char p){
    float medium;
    if(p == 'A'){
        medium = (x + y + z) / 3.0;
    }
    if(p == 'P'){
        medium = (x*5 + y*3 + z*2) / 10.0;
    }
    return medium;
}

long fatorial(int num){
    long sum = 1;
    for(int i = 1; i <= num; i++){
        sum *= i;
    }
    return sum;
}

int primo(int num){
    if(num < 2) return -1;
    for(int i = 2; i < sqrt(num); i++){
        if(num % i == 0) return -1;
    }
    return 0;
}

float media(int x, int y, int z){
    float media = (x + y + z) / 3.0;
    return media;
}



int main()
{
    // Exercicio 1

    int a = 0, b, c;
    while(a <= 1){
        printf("Escreva um numero inteiro para a: ");
        scanf("%d", &a);
        if(a > 1){
            printf("Escreva um numero inteiro para b: ");
            scanf("%d", &b);
            printf("Escreva um numero inteiro para c: ");
            scanf("%d", &c);
        } else {
            printf("INVALIDO! 'a' NAO PODE SER 1 OU MENOR QUE 1!\n");
            continue;
        }
    }
    printf("A soma dos diviseis por a entre b e c e: %d", sumDivisible(a, b, c));

    // Exercicio 2

    int hours;
    int minutes;
    int seconds;

    printf("Escreva as horas: ");
    scanf("%d", &hours);
    printf("Escreva os minutos: ");
    scanf("%d", &minutes);
    printf("Escreva os segundos: ");
    scanf("%d", &seconds);

    printf("Os segundos totais somam: %ld segundos", timeToSecs(hours, minutes, seconds));

    // Exercicio 3

    int num;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    printf("%d", numberCharacteristic(num));

    // Exercicio 4

    int a, b, c;
    char p;

    printf("Escreva a primeira nota do aluno: ");
    scanf("%d", &a);
    printf("Escreva a segunda nota do aluno: ");
    scanf("%d", &b);
    printf("Escreva a terceira nota do aluno: ");
    scanf("%d", &c);
    printf("Faca uma escolha:\n'A' - Media Aritmetica\n'P' - Media Ponderada\n");
    scanf(" %c", &p);

    printf("A media e: %f", mediums(a, b, c, p));

    // Exercicio 5

    int num = 0;
    while(num < 1){
        printf("Escreva um numero inteiro positivo: ");
        scanf("%d", &num);
        if(num < 1){
            printf("NUMERO INVALIDO!!!\n");
        }
    }
    printf("O fatorial de %d e: %ld", num, fatorial(num));

    // Exercicio 6

    int num;
    printf("Escreva um numero inteiro positivo: ");
    scanf("%d", &num);
    printf("0  - Primo\n-1 - Nao Primo\nResultado: %d", primo(num));

    // Exercicio 7

    int a, b, c;
    printf("Escreva 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("A media e: %f", media(a, b, c));

}
