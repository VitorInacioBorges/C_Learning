#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Aluno: Vitor Inacio Borges
// Professor: Marcos Monteiro Junior
// Data: 13/08/2025

// <tipo de retorno> <nome> (atributos) {}

void par_impar(int x){
    if(x % 2 == 0){
        printf("E PAR!!");
    } else {
        printf("E IMPAR!!");
    }
}

void mes(int x){
    if(x < 1 || x > 12){
        printf("VALOR INVALIDO!!!");
    }
    if(x == 1) printf("JANEIRO!");
    if(x == 2) printf("FEVEREIRO!");
    if(x == 3) printf("MARCO!");
    if(x == 4) printf("ABRIL!");
    if(x == 5) printf("MAIO!");
    if(x == 6) printf("JUNHO!");
    if(x == 7) printf("JULHO!");
    if(x == 8) printf("AGOSTO!");
    if(x == 9) printf("SETEMBRO!");
    if(x == 10) printf("OUTUBRO!");
    if(x == 11) printf("NOVEMBRO!");
    if(x == 12) printf("DEZEMBRO!");
}

void triangulo(int x){
    for(int linhas = 1; linhas <= x; linhas++){
        for(int i = 1; i <= linhas; i++){
            if(i == linhas){
                printf("%d\n", i);
            } else {
                printf("%d ", i);
            }
        }
    }
}

void asciiART(int linhas, int colunas){
    printf("+");
    for(int i = 0; i < colunas; i++){
        printf(" - ");
    }
    printf("+\n");

    for(int i = 0; i < linhas; i++){
        printf("|");
        for(int j = 0; j <= colunas; j++){
            printf("   ");
        }
        printf("|\n");
    }

    printf("+");
    for(int i = 0; i < colunas; i++){
        printf(" - ");
    }
    printf("+");
}

double calculateDistance(int x, int y, int X, int Y){
    double distance = sqrt(pow(X - x, 2) + pow(Y - y, 2));
    return distance;
}

void perimeter(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    double sumDistance = calculateDistance(x1, y1, x2, y2) + calculateDistance(x2, y2, x3, y3) + calculateDistance(x3, y3, x4, y4) + calculateDistance(x4, y4, x1, y1);
    printf("Perimetro total: %lf u.a.", sumDistance);
}

void secondsToTime(int secs){
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    for(int i = 0; ; i++){
        if(secs >= 3600){
            hours++;
            secs -= 3600;
        } else if(secs >= 60){
            minutes++;
            secs -= 60;
        } else {
            seconds += secs;
            break;
        }
    }

    printf("Temos %d horas, %d minutos e %d segundos.", hours, minutes, seconds);
}

void intScale(int x){
    for(int linhas = 1; linhas <= x; linhas++){
        for(int i = 1; i <= linhas; i++){
            if(i == linhas){
                printf("%d\n", linhas*i);
            } else {
                printf("%d ", linhas*i);
            }
        }
    }
}

void asterisk(int n){
    for(int linhas = 1; linhas <= n; linhas++){
        for(int i = 1; i <= linhas; i++){
            printf("*");
        }
        printf("\n");
    }
    for(int linhas = n - 1; linhas >= 1; linhas--){
        for(int i = 1; i <= linhas; i++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){

    // Exercicio 1

    int valor;
    printf("Escreva um valor: ");
    scanf("%d", &valor);
    par_impar(valor);

    // Exercicio 2

    int valor2;
    printf("\n\nEscreva um valor: ");
    scanf("%d", &valor2);
    mes(valor2);

    // Exercicio 3

    int valor3;
    printf("\n\nEscreva um valor: ");
    scanf("%d", &valor3);
    triangulo(valor3);

    // Exercicio 4

    int linhas, colunas;
    printf("\n\nEscreva o numero de linhas: ");
    scanf("%d", &linhas);
    printf("\n\nEscreva o numero de colunas: ");
    scanf("%d", &colunas);
    asciiART(linhas, colunas);

    // Exercicio 5

    typedef struct pontoMain{
        int x;
        int y;
    } pontoMain;

    pontoMain p[4];

    printf("Escreva a coordenada do ponto 1. (Ex: 1 2): ");
    scanf("%d %d", &p[0].x, &p[0].y);
    printf("Escreva a coordenada do ponto 2. (Ex: 1 2): ");
    scanf("%d %d", &p[1].x, &p[1].y);
    printf("Escreva a coordenada do ponto 3. (Ex: 1 2): ");
    scanf("%d %d", &p[2].x, &p[2].y);
    printf("Escreva a coordenada do ponto 4. (Ex: 1 2): ");
    scanf("%d %d", &p[3].x, &p[3].y);

    perimeter(p[0].x, p[0].y, p[1].x, p[1].y, p[2].x, p[2].y, p[3].x, p[3].y);

    // Exercicio 6

    long seconds;
    printf("Escreva o valor total de segundos: ");
    scanf("%ld", &seconds);
    secondsToTime(seconds);

    // Exercicio 7

    int integer = 10;
    while(integer < 1 || integer > 9){
        printf("Escreva um inteiro entre 1 e 9: ");
        scanf("%d", &integer);
        if(integer < 1 || integer > 9){
            printf("INVALID!!");
        } else {
            break;
        }
    }
    intScale(integer);

    // Exercicio 8

    int n;
    printf("Escreva um numero n: ");
    scanf("%d", &n);
    asterisk(n);

    return 0;
}
