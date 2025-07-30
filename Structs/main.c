#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Aluno: Vitor Inacio Borges
// Professor: Marcos Junior
// Data: 29/07/2025

// Lista de Exercícios 15 - Estruturas

int main()
{
    // Exercicio 1

    struct pessoa {
        char name[30];
        int idade;
        char endereco[30];
    };

    struct pessoa p;

    printf("Escreva seu nome: ");
    scanf("%s", &p.name);
    printf("Escreva sua idade: ");
    scanf("%d", &p.idade);
    printf("Escreva seu endereco: ");
    scanf("%s", &p.endereco);
    printf("Seu nome e %s, sua idade e %d e seu endereco e %s", p.name, p.idade, p.endereco);



    // Exercicio 2

    struct point {
        int cateto1;
        int cateto2;
        int hipotenusa;
    };

    struct point p;

    printf("Escreva a coordenada começando pelo x: ");
    scanf("%d", &p.cateto1);
    printf("Agora escreva o y: ");
    scanf("%d", &p.cateto2);
    p.hipotenusa = pow(p.cateto1, 2) + pow(p.cateto2, 2);
    printf("A distancia do ponto ate a origem (0, 0) e %d u.a.", p.hipotenusa);



    // Exercicio 3

    struct point {
        int x;
        int y;
    };

    struct point p1, p2;

    printf("Escreva o x e o y do primerio ponto: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Escreva o x e o y do segundo ponto: ");
    scanf("%d %d", &p2.x, &p2.y);

    float distance = sqrt((pow((p2.x - p1.x), 2)) + (pow((p2.y - p1.y), 2)));

    printf("A distancia entre os dois pontos e %f u.a.", distance);



    // Exercicio 4

    struct point {
        int x;
        int y;
    };
    struct rectangle {
        struct point topLeft;
        struct point bottomRight;
        struct point inside;
    };
    struct rectangle r1;

    printf("Escreva o x e y do ponto superior esquerdo do retangulo: ");
    scanf("%d %d", &r1.topLeft.x, &r1.topLeft.y);
    printf("Escreva o x e y do ponto inferior direito do retangulo: ");
    scanf("%d %d", &r1.bottomRight.x, &r1.bottomRight.y);

    float distance = sqrt((pow((r1.topLeft.x - r1.bottomRight.x), 2)) + (pow((r1.topLeft.y - r1.bottomRight.y), 2)));
    float area = fabs(r1.topLeft.x - r1.bottomRight.x) * fabs(r1.topLeft.y - r1.bottomRight.y);

    printf("Comprimento da Diagonal: %0.2f\nArea: %0.2f", distance, area);



    // Exercicio 5
    // (declarei outro variavel do tipo point no exercicio anterior)

    printf("\n\nAgora escreva um x e y do ponto. Veremos se ele esta dentro do retangulo: ");
    scanf("%d %d", &r1.inside.x, &r1.inside.y);
    if(r1.inside.x >= r1.topLeft.x && r1.inside.x <= r1.bottomRight.x && r1.inside.y <= r1.topLeft.y && r1.inside.y >= r1.bottomRight.y){
        printf("Esta DENTRO!");
    } else {
        printf("Esta FORA!");
    }



    // Exercicio 6

    struct student {
        char name[30];
        int ID;
        int p1;
        int p2;
        int p3;
        float media;
    };

    struct student s[5];
    struct student higher;
    higher.media = 0;

    for(int i=0; i<5; i++){
        printf("\nEscreva o nome do aluno: ");
        scanf("%s", s[i].name);
        printf("Escreva o ID do aluno %s: ");
        scanf("%d", &s[i].ID);
        printf("Escreva a nota 1 do aluno %s: ", s[i].name);
        scanf("%d", &s[i].p1);
        printf("Escreva a nota 2 do aluno %s: ", s[i].name);
        scanf("%d", &s[i].p2);
        printf("Escreva a nota 3 do aluno %s: ", s[i].name);
        scanf("%d", &s[i].p3);

        s[i].media = (s[i].p1 + s[i].p2 + s[i].p3) / 3;

        if(s[i].media > higher.media){
            higher = s[i];
        }
    }

    printf("\n\nAluno: %s\nID: %d\nMedia (maior dos 5): %0.2f", higher.name, higher.ID, higher.media);



    // Exercicio 7

    struct hora {
        int hora;
        int minuto;
        int segundo;
    };

    struct hora h[5], higher;

    for(int i=0; i<5; i++){
        printf("Escreva a hora: ");
        scanf("%d", &h[i].hora);
        printf("Escreva o minuto: ");
        scanf("%d", &h[i].minuto);
        printf("Escreva o segundo: ");
        scanf("%d", &h[i].segundo);

        higher = h[i];
        if(h[i].hora > higher.hora && h[i].minuto > higher.minuto && h[i].segundo > higher.segundo){
            higher = h[i];
        }
    }

    printf("A maior e: %d horas, %d minutos e %d segundos.", higher.hora, higher.minuto, higher.segundo);
}
