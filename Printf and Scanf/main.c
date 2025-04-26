#include <stdio.h>
#include <stdlib.h>

/*
Lista 2.2
Dia: 24/03/2025
Autor: Vitor Inacio Borges
*/

int main()
{
    /* Exercício 1 */
    printf("Inicio do Programa\nFim\n\n");

    /* Exercício 2 */
    int a=2;
    printf("O valor da variavel e: %d\n\n", a);

    /* Exercicio 3: */
    int b;
    printf("Escreva seu valor: ");
    scanf("%d", &b);
    printf("Valor lido: %d\n\n", b);

    /* Exercicio 4: */
    int c;
    printf("Escreva ser valor em int: ");
    scanf("%d", &c);
    printf("Em float ele e: %f\n\n", c);

    /* Exercicio 5: */
    float d;
    printf("Escreva ser valor em float: ");
    scanf("%f", &d);
    printf("Em int ele e: %d\n\n", d);

    /* Exercicio 6: */
    double e;
    printf("Escreva ser valor em double: ");
    scanf("%lf", &e);
    printf("Em notacao cientifica ele e: %e\n\n", e);

    /* Exercicio 7: */
    char letra;
    printf("Escreva sua letra: ");
    scanf("%c", &letra);
    printf("Sua letra em valor inteiro e: %d\n\n", letra);

    /* Exercicio 8: */
    int x, y;
    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d", &x, &y);
    printf("Na ordem inversa eles sao: %d e %d\n\n", y, x);

    /* Exercicio 9: */

    float g, h;
    printf("Digite dois numeros flutuantes: ");
    scanf("%f %f", &g, &h);
    printf("Na ordem inversa eles sao: %f e %f\n\n", h, g);

    /* Exercicio 10: */

    int dia, mes, ano;
    printf("Insira o numero do dia do mes e do ano em que estamos: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Representacao humana dos dias *bip bop*: %d/%d/%d\n\n", dia, mes, ano);

    /* Exercicio 11: */

    #define PI 3.141593
    printf("De acordo com a matematica o pi vale: %f\n\n", PI);

    /* Exercicio 12: */

    const int P_ = 3;
    printf("PI arredondado fica: %d\n\n", P_);
    /* Exercicio 13: */

    char L;
    printf("Escreva sua letra: ");
    scanf("%c", &L);
    printf("Entre aspas ela fica \"%c\"\n\n", L);

    /* Exercicio 14: */

    char o, p, q;
    printf("Escreva 3 letras: ");
    scanf("%c %c %c", &o, &p, &q);
    printf("Uma em cada linha fica:\n %c\n %c\n %c\n\n", o, p, q);

    /* Exercicio 15: */

    int num;
    char let;
    float flut;
    printf("Por favor, insira 1 numero inteiro, uma letra e um numero flutuante nessa ordem:\n");
    scanf("%d %c %f", &num, &let, &flut);
    printf("\nEspacadas: %d %c %f\n\n", num, let, flut);
    printf("Uma em cada linha:\n%d\n%c\n%f\n\n", num, let, flut);
    printf("Paragrafadas:\n   %d\n   %c\n   %f\n", num, let, flut);

}
