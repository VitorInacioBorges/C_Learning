#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Exercicio 1

    char string[6];
    int i;
    for(i=0; i<6; i++){
        scanf(" %c", &string[i]);
    }
    for(i=5; i>=0; i--){
        printf("%c", string[i]);
    }


    // Exercicio 2

    char string[50], seguradorDeString;
    int i, j, tamanhoString;

    printf("String1: ");
    fgets(string, sizeof(string), stdin);
    tamanhoString = strlen(string);
    for(i=0, j=tamanhoString-1; i<j; i++, j--) {
        seguradorDeString = string[i];
        string[i] = string[j];
        string[j] = seguradorDeString;
    }
    printf("String2: %s", string);


    // Exercicio 3

    char string[50];
    int i, tamanho;
    fgets(string, sizeof(string), stdin);
    tamanho = strlen(string);
    for(i=0; i<tamanho; i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            string[i] = 'x';
        }
    }
    printf("String com x no lugar das vogais: %s", string);


    // Exercicio 4

    char str[15], str2[15];
    printf("Escreva uma palavra: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int i, j=strlen(str)-1;
    for(i=0; i<strlen(str); i++, j--){
        str2[j] = str[i];
    }
    if(strcmp(str, str2) == 0) printf("Palindromo detectado!!!");
    else printf("Isso nao e um palindromo...");


    // Exercicio 5

    char str[15], str2[15];
    printf("Escreva 1 palavra: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Escreva uma segunda palavra: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    if(strstr(str, str2) != NULL) printf("A segunda esta contida na primeira!!!");
    else printf("A segunda NAO esta contida na primeira...");


    // Exercicio 6

    // PROFESSOR DISSE PARA NÃO FAZER!!!

    // Exercicio 7

    char str[50];
    printf("Escreva sua palavra: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; i<strlen(str)-1; i++){
        if(str[i] >= 97 && str[i] <= 122) str[i] -= 32;
    }
    printf("%s", str);


    // Exercicio 8

    char str[50];
    printf("Escreva sua palavra: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; i<strlen(str)-1; i++){
        if(str[i] >= 65 && str[i] <= 90) str[i] += 32;
    }
    printf("%s", str);


    // Exercicio 9

    char str[20];
    double valor, valorVista;
    printf("Escreva o nome da mercadoria: ");
    fgets(str, sizeof(str), stdin);
    printf("Escreva o valor da mercadoria: ");
    scanf("%lf", &valor);
    valorVista = valor - valor*0.1;
    printf("Mercadoria: %s\nValor Total: R$ %0.2lf\nDesconto: 10 por cento\nValor a Vista: R$ %0.2lf", str, valor, valorVista);


    // Exercicio 10


    // Exercicio 11
    // Exercicio 12
}
