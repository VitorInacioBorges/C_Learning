#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Lista 6.1 - Estrutura Condicional (Switch/Case)
// Aluno: Vitor Inacio Borges
// Data: 14/04/2025

int main(){

    // Exercicio 1

    float num1_1, num2_1, num3_1, conta;
    int modelo_conta;
    printf("Escreva 3 numeros para realizar um modelo de conta: ");
    scanf("%f %f %f", &num1_1, &num2_1, &num3_1);
    printf("Selecione o modelo de conta:\n1 - Media Geometrica\n2 - Media Ponderada\n3 - Media Harmonica\n4 - Media Aritmetica\n--> ");
    scanf("%d", &modelo_conta);
    switch (modelo_conta){
    case 1:
        conta = cbrt((num1_1 * num2_1 * num3_1));
        printf("A conta deu: %0.2f\n\n", conta);
        break;
    case 2:
        conta = (num1_1 + (2 * num2_1) + (3 * num3_1)) / 6;
        printf("A conta deu: %0.2f\n\n", conta);
        break;
    case 3:
        conta = 1 / ((1 / num1_1) + (1 / num2_1) + (1 / num3_1));
        printf("A conta deu: %0.2f\n\n", conta);
        break;
    case 4:
        conta = (num1_1 + num2_1 + num3_1) / 3;
        printf("A conta deu: %0.2f\n\n", conta);
        break;
    default:
        printf("SELECIONE UM MODELO VALIDO!!!\n\n");
    }

    // Exercicio 2

    int dia_semana;
    printf("Escreva um numero de 1 a 7: ");
    scanf("%d", &dia_semana);
    switch (dia_semana){
    case 1:
        printf("O dia da semana e DOMINGO\n\n");
        break;
    case 2:
        printf("O dia da semana e SEGUNDA\n\n");
        break;
    case 3:
        printf("O dia da semana e TERCA\n\n");
        break;
    case 4:
        printf("O dia da semana e QUARTA\n\n");
        break;
    case 5:
        printf("O dia da semana e QUINTA\n\n");
        break;
    case 6:
        printf("O dia da semana e SEXTA\n\n");
        break;
    case 7:
        printf("O dia da semana e SABADO\n\n");
        break;
    default:
        printf("SELECIONE UM NUMERO VALIDO!!!\n\n");
    }

    // Exercicio 3

    int num1_3, num2_3, escolha, operacao;
    float operacao_divisao;
    printf("Escolha uma Operacao Matematica:\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n---> ");
    scanf("%d", &escolha);
    printf("Agora escreva 2 numeros para realizar a operacao ---> ");
    scanf("%d %d", &num1_3, &num2_3);
    switch (escolha){
    case 1:
        operacao = num1_3 + num2_3;
        printf("O resultado e: %d\n\n", operacao);
        break;
    case 2:
        operacao = num1_3 - num2_3;
        printf("O resultado e: %d\n\n", operacao);
        break;
    case 3:
        operacao = num1_3 * num2_3;
        printf("O resultado e: %d\n\n", operacao);
        break;
    case 4:
        operacao_divisao = (float)num1_3 / num2_3;
        printf("O resultado e: %0.2f\n\n", operacao_divisao);
        break;
    default:
        printf("ESCOLHA UMA OPERACAO VALIDA!!!");
    }

    // Exercicio 4

    int estado;
    float preco_produto, juros;
    printf("Insira o preco do produto em reais: ");
    scanf("%f", &preco_produto);
    printf("Insira o estado para entrega:\n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n---> ");
    scanf("%d", &estado);
    switch (estado){
    case 1:
        juros = 7.0 / 100;
        preco_produto = preco_produto + (juros * preco_produto);
        printf("O preco final fica: %0.2f\n\n", preco_produto);
        break;
    case 2:
        juros = 12.0 / 100;
        preco_produto = preco_produto + (juros * preco_produto);
        printf("O preco final fica: %0.2f\n\n", preco_produto);
        break;
    case 3:
        juros = 15.0 / 100;
        preco_produto = preco_produto + (juros * preco_produto);
        printf("O preco final fica: %0.2f\n\n", preco_produto);
        break;
    case 4:
        juros = 8.0 / 100;
        preco_produto = preco_produto + (juros * preco_produto);
        printf("O preco final fica: %0.2f\n\n", preco_produto);
        break;
    }

    // Exercicio 5

    int mes;
    printf("Escreva um numero de 1 a 12: ");
    scanf("%d", &mes);
    switch (mes){
    case 1:
        printf("O mes correspondete a esse numero e: JANEIRO!\n\n");
        break;
    case 2:
        printf("O mes correspondete a esse numero e: FEVEREIRO!\n\n");
        break;
    case 3:
        printf("O mes correspondete a esse numero e: MARCO!\n\n");
        break;
    case 4:
        printf("O mes correspondete a esse numero e: ABRIL!\n\n");
        break;
    case 5:
        printf("O mes correspondete a esse numero e: MAIO!\n\n");
        break;
    case 6:
        printf("O mes correspondete a esse numero e: JUNHO!\n\n");
        break;
    case 7:
        printf("O mes correspondete a esse numero e: JULHO!\n\n");
        break;
    case 8:
        printf("O mes correspondete a esse numero e: AGOSTO!\n\n");
        break;
    case 9:
        printf("O mes correspondete a esse numero e: SETEMBRO!\n\n");
        break;
    case 10:
        printf("O mes correspondete a esse numero e: OUTUBRO!\n\n");
        break;
    case 11:
        printf("O mes correspondete a esse numero e: NOVEMBRO!\n\n");
        break;
    case 12:
        printf("O mes correspondete a esse numero e: DEZEMBRO!\n\n");
        break;
    default:
        printf("SELECIONE UM NUMERO VALIDO!!!\n\n");
    }

}
