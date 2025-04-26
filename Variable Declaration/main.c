#include <stdio.h>
#include <stdlib.h>

// Lista 4.0 - Operadores Matemáticos e Variáveis 2
// Autor: Vitor Inacio Borges
// Dia: 31/03/2025

int main()
{
    // Exercício 1

    float desconto, valor;

    printf("Escreva o valor do produto: ");
    scanf("%f", &valor);

    desconto = valor*9.0/100;
    valor = valor - desconto;

    printf("O valor do seu produto com o desconto aplicado e: %0.2f\n", valor);
    printf("O valor do desconto foi: %0.2f\n\n", desconto);

    // Exercício 2

    float bruto, liquido, inss, valor_hora_aula, num_aulas;
    printf("Digite o numero de aulas dadas em um mes: ");
    scanf("%f", &num_aulas);
    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valor_hora_aula);
    printf("Digite o desconto do INSS: ");
    scanf("%f", &inss);
    bruto = valor_hora_aula*4;
    liquido = bruto - (inss/100);
    printf("Seu salario liquido e: %0.2f\n\n", liquido);

    // Exercício 3

    float C, F;
    printf("Escreva a temperatura em celsius hoje: ");
    scanf("%f", &C);
    F = (C*9 + 160) / 5;
    printf("A temperatura hoje em Fahrenheits e: %0.2f\n\n", F);

    // Exercício 4

    float altura, raio, volume;
    const float PI = 3.14159;
    printf("Escreva a altura (cm) de uma lata de oleo: ");
    scanf("%f", &altura);
    printf("Escreva o raio (cm) da base de uma lata de oleo: ");
    scanf("%f", &raio);
    volume = PI * (raio*raio) * altura;
    printf("O volume da lata em cm cubicos e: %0.4f\n\n", volume);

    // Exercício 5

    int num, denom;
    float divisao;
    printf("Escreva o numerador de uma fracao: ");
    scanf("%d", &num);
    printf("Escreva o denominador de uma fracao: ");
    scanf("%d", &denom);
    if (denom == 0){
        printf("ERRO! Nao existe divisao por 0");
    } else {
        divisao = (float) num / denom;
        printf("A divisao dos dois numeros sera: %0.2f\n\n", divisao);
    }

    // Exercício 6


    // Exercício 7

    int horas, minutos, horas_em_minutos, total_minutos;
    printf("Informe as horas e minutos (hh:mm): ");
    scanf("%d:%d", &horas, &minutos);
    horas_em_minutos = horas * 60;
    total_minutos = horas_em_minutos + minutos;
    printf("Os minutos totais passados desde a meia noite sao %d minutos\n\n", total_minutos);

    // Exercício 8

    int horas2, minutos2, horas_em_segundos, minutos_em_segundos, segundos_totais;
    printf("Informe as horas e minutos (hh:mm): ");
    scanf("%d:%d", &horas2, &minutos2);
    horas_em_segundos = horas2 * 3600;
    minutos_em_segundos = minutos2 * 60;
    segundos_totais = horas_em_segundos + minutos_em_segundos;
    printf("Os segundos totais passados desde a meia noite sao %d segundos\n\n", segundos_totais);

    // Exercício 9

    float capital, taxa_de_juros, rendimento_anual, rendimento_mensal, total_mensal, total_anual;
    printf("Informe o deposito para um investimento: ");
    scanf("%f", &capital);
    printf("Informe a taxa de juros (em porcentagem) do investimento: ");
    scanf("%f", &taxa_de_juros);
    rendimento_mensal = capital * taxa_de_juros;
    rendimento_anual = rendimento_mensal * 12;
    total_mensal = capital + rendimento_mensal;
    total_anual = capital + rendimento_anual;
    printf("O rendimento mensal do investimento (com um unico deposito de comeco) sera: %0.2f reais\n", rendimento_mensal);
    printf("O rendimento anual do investimento (com um unico deposito de comeco) sera: %0.2f reais\n", rendimento_anual);
    printf("O valor total adquirido por mes do investimento (com um unico deposito de comeco) sera: %0.2f reais\n", total_mensal);
    printf("O valor total adquirido por ano do investimento (com um unico deposito de comeco) sera: %0.2f reais\n", total_anual);

    // Exercício 10

    float salario_minimo, salario_pessoa, num_de_salarios_minimos;
    printf("Escreva seu salario a seguir: ");
    scanf("%f", &salario_pessoa);
    salario_minimo = 1509;
    num_de_salarios_minimos = salario_pessoa / salario_minimo;
    printf("O numero de salarios minimos que voce ganha e: %0.2f\n\n", num_de_salarios_minimos);

    // Exercício 11

    float velocidade, tempo, distancia, litros;
    printf("Considere que um carro faz 12km por litro.\nDigite a velocidade em km/h e o tempo em horas que demora para chegar em seu destino: ");
    scanf("%f %f", &velocidade, &tempo);
    distancia = tempo * velocidade;
    litros = distancia / 12;
    printf("A distancia que o veiculo percorre e %0.1f kilometros e consome %0.1f litros\n\n", distancia, litros);

    // Exercício 12

    float salario_minimo2, kW_residencia, real_kW, custo_residencia, custo_residencia_desconto, desconto;
    printf("Digite o salario minimo vigente: ");
    scanf("%f", &salario_minimo2);
    printf("Digite quantos kiloWatts uma residencia gasta por mes: ");
    scanf("%f", &kW_residencia);

    real_kW = (salario_minimo2 / 7.0) / 100;
    custo_residencia = real_kW * kW_residencia;
    desconto = 0.10 * custo_residencia;
    custo_residencia_desconto = custo_residencia - desconto;

    printf("O valor em reais de cada kiloWatt e %0.2f reais\n", real_kW);
    printf("O valor em reais a ser pago pela residencia e %0.2f reais\n", custo_residencia);
    printf("Com desconto esse custo ficaria %0.2f reais\n", custo_residencia_desconto);

}
