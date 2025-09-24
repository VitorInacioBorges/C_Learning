#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Aluno: Vitor Inacio Borges
// Professor: Marcos Monteiro Junior
// Data: 22/09/2025

int main()
{
    // Exercicio 1

    int c, d, *a=&c, *b=&d;

    //*a é o conteudo da variavel que ela aponta
    //atribuir para ponteiro nao usa o *
    //fica assim: a=&c
    //print *a deve ser o mesmo valor que temos em c

    printf("Escreva 2 nums: ");
    scanf("%d, %d", &c, &d);
    printf("Maior Endereço: ");
    if(a > b){

        //printf("conteudo de c usando o ponteiro a: %d, conferindo o valor de c: %d, endereco de c: %x e conteudo de a: %x\n", *a, c, &c, a);
        //printf("manipulando c pelo ponteiro a\n");
        //*a=22;
        //printf("conteudo de c: %d", c);

        printf("a: %x", a);
    } else {
        printf("b: %x", b);
    }



    // Exercicio 2

    void swap(int *p1, int *p2){
        int temp;
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        printf("%d ", *p1);
        printf("%d", *p2);
    }

    int a, b, *c=&a, *d=&b;
    printf("Escreva 2 nums: ");
    scanf("%d %d", c, d);
    swap(c, d);



    // Exercicio 3

    void reverse(char *s){
        int i, j;
        char temp;
        for(int i = 0, j = strlen(s) - 1; i < j; i++, j--){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }

    char s[200];
    printf("Escreva 1 palavra ou frase: ");
    scanf("%s", &s);
    reverse(s);
    printf("%s", s);


    // Exercicio 4

    void soma_2_var(int *a, int b){
        *a = *a + b;
    }

    int x, *a=&x, b;
    printf("Escreva 2 numeros: ");
    scanf("%d %d", a, &b);
    printf("ANTES\na: %d, b: %d\n", *a, b);
    soma_2_var(a, b);
    printf("DEPOIS:\na: %d, b: %d", *a, b);



    // Exercicio 5

    const float PI = 3.14;

    void calc_esfera(float R, float *area, float *volume){
        *area = 4 * PI * R * R;
        *volume = (4.0 / 3) * PI * R * R * R;
        printf("Area: %f\n", *area);
        printf("Volume: %f", *volume);
    }

    float R = 0.0, A = 0.0, V = 0.0;
    float *area = &A;
    float *volume = &V;

    printf("Escreva o raio de uma esfera: ");
    scanf("%f", &R);
    calc_esfera(R, area, volume);

}
