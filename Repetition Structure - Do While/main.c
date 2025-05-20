#include <stdio.h>
#include <stdlib.h>

// Lista de Exercicio 10 - Do While
// Aluno: Vitor Inacio Borges
// Data: 13/05/2025

int main()
{

    // Exercicio 1:

    int soma1_1 = 0, num1_1 = 1, cont1_1 = 0;
    do {
        if ((num1_1 % 2) == 0){
            soma1_1 += num1_1;
            cont1_1++;
        }
        num1_1++;
    } while (cont1_1 < 50);
    printf("%d", soma1_1);



    // Exercicio 2:

    int num2_1 = 10;
    do {
        printf("%d\n", num2_1);
        num2_1--;
    } while (num2_1 > -1);
    printf("FIM!");



    // Exercicio 3:

    int num3_1, soma3_1, divisor3_1 = 1;
    printf("Escreva um numero: ");
    scanf("%d", &num3_1);
    do {
        if ((num3_1 % divisor3_1) == 0){
            soma3_1 += divisor3_1;
        }
        divisor3_1++;
    } while (divisor3_1 < num3_1);
    printf("%d", soma3_1);



    // Exercicio 4:

    int num4_1 = 1, linha4_1 = 1, cont4_1 = 1, limite4_1;
    printf("Escreva um numero: ");
    scanf("%d", &limite4_1);
    do {
        if (cont4_1 < linha4_1){
            printf("%d ", num4_1);
            cont4_1++;
            num4_1++;
        } else {
            printf("%d\n", num4_1);
            linha4_1++;
            num4_1++;
            cont4_1 = 1;
        }
    } while (num4_1 <= limite4_1);



    // Exercicio 5:

    int numero, dia, mes, ano, quantidade;
    float preco, total = 0;
    do {
        printf("Escreva o numero do pedido (0 para finalizar): ");
        scanf("%d", &numero);
        if (numero == 0){
            break;
        }
        printf("Escreva a data (DD/MM/AAAA): ");
        scanf("%d/%d/%d", &dia, &mes, &ano);

        printf("Escreva a quantidade: ");
        scanf("%d", &quantidade);

        printf("Escreva o valor em R$: ");
        scanf("%f", &preco);
        total += preco * quantidade;
    } while (1);
    if (total > 0){
        printf("O valor total fica R$%0.2f", total);
    }



    // Exercicio 6:

    int idade, sexo, estado_civil, soma_idade = 0, pessoas = 0, casados = 0, viuvos = 0, separados = 0, solteiros = 0;
    double peso, soma_peso = 0.0, media_peso = 0.0, media_idade = 0.0;
    do {
        printf("Escreva sua idade (ou 0 para encerrar o programa): ");
        scanf("%d", &idade);
        if (idade == 0)break;
        soma_idade += idade;
        printf("Escreva seu peso aproximado em kg: ");
        scanf("%lf", &peso);
        soma_peso += peso;
        printf("Escreva seu sexo:\n1. Homem\n2. Mulher\n3. Outro\n--> ");
        scanf("%d", &sexo);
        printf("Escreva seu estado civil:\n1. Casado\n2. Solteiro\n3. Viuvo\n4. Separado\n--> ");
        scanf("%d", &estado_civil);
        if (estado_civil == 1)casados++;
        else if (estado_civil == 2)solteiros++;
        else if (estado_civil == 3)viuvos++;
        else if (estado_civil == 4)separados++;
        pessoas++;
    } while (1);
    if(pessoas > 0){
        media_idade=soma_idade/pessoas;
        media_peso=soma_peso/pessoas;
        printf("\n\nRESULTADOS:\n\n%d Casados\n%d Solteiros\n%d Viuvos\n%d Separados\n\n", casados, solteiros, viuvos, separados);
        printf("A media de peso e: %0.2lf kg\n", media_peso);
        printf("A media de idade e: %0.2lf anos\n", media_idade);
    } else printf("PROGRAMA ENCERRADO!!!");



    // Exercicio 7:

    char nome[1];
    double soma_area = 0, area = 0, largura = 0, comprimento = 0;
    do {
        printf("Insira o nome do comodo (FIM para encerrar o programa): ");
        scanf("%s", &nome);
        if (strcmp(nome, "FIM") == 0) break;
        printf("Insira a largura (em metros) do comodo: ");
        scanf("%lf", &largura);
        printf("Insira o comprimento (em metros) do comodo: ");
        scanf("%lf", &comprimento);
        area=largura*comprimento;
        soma_area+=area;
    } while (1);
    if (soma_area > 0){
        printf("A area total da casa e: %lf", soma_area);
    } else {
        printf("PROGRAMA ENCERRADO!!!");
    }
}
