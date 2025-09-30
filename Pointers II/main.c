#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Aluno: Vitor Inacio Borges
// Professor: Marcos Monteiro Juninho
// Data: 29/09/2025

int main()
{
    // Exercicio 1 (tava tao dificil q fiz ate comentario)

    void occur(char *s1, char *s2){
        // variavel de ocorrencia de s2 em s1
        int occur = 0;
        int i, k;
        // loop que percorre toda string s1 (usando strlen pra facilitar)
        for(i = 0; i < strlen(s1); i++){
            // se caracteres iguais comeca um  loop onde ele checa se as proximas sao iguais tmb
            if(s1[i] == s2[0]){
                // loop onde k se torna o deslocamento e i continua o mesmo. esse loop percorre s2 e s1 com base no i
                for(k = 0 ; k < strlen(s2); k++){
                    // se nao for igual ja quebra
                    if(s1[i + k] != s2[k]) break;
                }
                // se chegou ao final ocorre, entao occur = 1
                if(k == strlen(s2)){
                    occur = 1;
                    break;
                }
            }
        }
        // se occur for true entao ocorre, senao nao
        if(occur) printf("OCORRE!");
        else printf("NAO OCORRE!");
    }

    char s1[50], s2[50];
    printf("Escreva uma palavra: ");
    scanf("%s", s1);
    printf("Escreva outra palavra: ");
    scanf("%s", s2);
    occur(s1, s2);


    // Exercicio 2

    void fill(int *c, int valor){
        for(int i = 0; i < 5; i++){
            *(c+i) = valor;
        }
        for(int i = 0; i < 5; i++){
            printf("%d ", *(c+i));
        }
    }

    int vet[5];
    int *c = vet;
    int valor;
    printf("Escreva um valor: ");
    scanf("%d", &valor);
    fill(c, valor);


    // Exercicio 3

    void printVet(int *c){
        for(int i = 0; i < 5; i++){
            printf("%d ", *(c+i));
        }
    }

    int vet[5] = {1, 2, 3, 4, 5};
    int *c = vet;
    printVet(c);


    // Exercicio 4

    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("Escreva um numero: ");
    scanf("%d", &a);

    printf("Dobro: %d\n", (*b) * 2);
    printf("Triplo: %d\n", (**c) * 3);
    printf("Quadruplo: %d\n", (***d) * 4);

}
