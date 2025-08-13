#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Aluno: Vitor Inacio Borges
// Professor: Marcos Monteiro Junior
// Data: 11/08/2025

int main(){
/*
    // Exercicio 1

    typedef struct person {
        char name[30];
        int day;
        int month;
        int year;
    } person;

    person p[6];
    person older;

    for(int i = 0; i < 6; i++){
        printf("Escreva o nome: ");
        scanf("%s", &p[i].name);
        printf("Escreva a data de nascimento (DD/MM/AAAA): ");
        scanf("%d/%d/%d", &p[i].day, &p[i].month, &p[i].year);
    }

    older = p[0];

    for(int i = 0; i < 6; i++){
        if(p[i].year < older.year) older = p[i];
        else if(p[i].year == older.year){
            if(p[i].month < older.month) older = p[i];
            else if(p[i].month == older.month){
                if(p[i].day < older.day) older = p[i];
                else if(p[i].day < older.day) continue;
            } else continue;
        } else continue;
    }

    printf("Mais velho: %s", older.name);



    // Exercicio 2

    typedef struct athlete {
        char name[30];
        char sport[40];
        int age;
        double height;
    } athlete;

    athlete p[5];
    athlete highest;
    athlete older;

    for(int i = 0; i < 5; i++){
        printf("\nAtleta %d - Escreva o nome: ", (i + 1));
        scanf("%s", &p[i].name);
        printf("Escreva sua idade: ");
        scanf("%d", &p[i].age);
        printf("Escreva eu esporte: ");
        scanf("%s", &p[i].sport);
        printf("Escreva sua altura em metros (Ex: 1.82): ");
        scanf("%lf", &p[i].height);
    }

    older = p[0];
    highest = p[0];

    for(int i = 0; i < 5; i++){
        if(p[i].age >= older.age){
            older = p[i];
        }
        if(p[i].height >= highest.height){
            highest = p[i];
        }
    }

    printf("\nMais velho: %s\n\n", older.name);
    printf("Mais alto: %s\n\n", highest.name);



    // Exercicio 3

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(p[i].age < p[j].age){
                athlete temp;
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        printf("%d - %s\n", (i + 1), p[i].name);
    }


*/
    // Exercicio 4

    // nota do autor: nao consegui fazer o exercicio sem funcoes, tive que apelar

    typedef struct date {
        int day;
        int month;
        int year;
    } date;

    int leapYear(year){                                            // funcao q verifica se e ano bissexto
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){ // regras do calendario gregoriano do que e um ano bissexto
            return 1;                                              // 1 = true
        } else {
            return 0;                                              // 0 = false
        }
    }

    int daysOfMonthFunction(int month, int year){                             // funcao q verifica quantos dias tem o mes verificado
        int daysOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // dias de cada mes
        if(month == 2 && leapYear(year)){                                     // se for bissexto e fevereiro tem 29 dias
            return 29;
        } else {
            return daysOfMonth[month - 1];                                    // retorna o dia do mes veirifcado - 1 por causa do array
        }
    }

    long dateToDays(date d){                       // transforma a data inteira em dias desde o ano 0 e soma
        long sum = 0;

        for(int i = 0; i < d.ano; i++){            // transforma anos inteiros em dias e soma
            if(leapYear == 0){
                sum += 365;
            } else {
                sum += 366;
            }
        }

        for(int i = 1; i < d.month; i++){          // transforma os meses daquele ano em dias e soma
            sum += daysOfMonthFunction(i, d.year);
        }

        sum += d.day;                              // adiciona os dias da data na soma
    }

    date d[2];
    printf("Escreva a primeira data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &d[1].day, &d[1].month, &d[1].year);
    printf("Escreva a segunda data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &d[2].day, &d[2].month, &d[2].year);

    long daysPassed = dateToDays(d[1]) - dateToDays(d[2]);   // faz a diferenca de dias entre as datas

    printf("Desde a data 1 ate a data 2 passarm-se %ld dias...", daysPassed);



    // Exercicio 5

    // -------- //



    // Exercicio 6

    // nota do autor: so consegui fazer com funcoes

    typedef struct livro {
        int code;
        char title[30];
        char author[30];
        char area[30];
        int year;
        char editor[30];
    } livro;

    livro l[20];

    void menu();
    void registering();
    void printBookInfo();
    void searchBookCode();
    void orderByYear();

    void registering(){
        for(int i = 0; i < 20; i++){
            printf("\nCodigo: ");
            scanf("%d", &l[i].code);
            printf("Nome: ");
            scanf("%s", &l[i].title);
            printf("Autor: ");
            scanf("%s", &l[i].author);
            printf("Area: ");
            scanf("%s", l[i].area);
            printf("Ano: ");
            scanf("%d", l[i].year);
            printf("Editora: ");
            scanf("%s", l[i].editor);
        }
        menu();
    }

    void printBookInfo(){
        for(int i = 0; i < 20; i++){
            printf("\n\nLivro %d:", (i+1));
            printf("Codigo: %d", l[i].code);
            printf("Nome: %s", l[i].title);
            printf("Autor: %s", l[i].author);
            printf("Area: %s", l[i].area);
            printf("Ano: %d", l[i].year);
            printf("Editor: %s", l[i].editor);
        }
        menu();
    }

    void searchBookCode(){
        int code;
        livro procurado;
        printf("\nEscreva o codigo do livro que deseja pesquisar: ");
        scanf("%d", &code);
        for(int i = 0; i < 20; i++){
            if(l[i].code == code){
                procurado = l[i];
            }
        }
        printf("%s", procurado.title);
        menu();
    }

    void orderByYear(){ // SELECTION SORT
        for(int i = 0; i < 20; i++){
            for(int j = 0; j < 20; j++){
                livro temp;
                if(l[i].year < l[j].year){
                    temp = l[j];
                    l[j] = l[i];
                    l[i] = temp;
                }
            }
        }
        menu();
    }

    void menu(){
            int answer;
            printf("Escolha uma opcao:\n1 - Cadastrar livro\n2 - Imprimir informacoes dos livros\n3 - Pesquisar por codigo\n4 - Ordenar por ano\n5 - SAIR\n--> ");
            scanf("%d", &answer);
            switch(answer){
            case 1:
                registering();
                break;
            case 2:
                printBookInfo();
                break;
            case 3:
                searchBookCode();
                break;
            case 4:
                orderByYear();
                break;
            case 5:
                condition = !condition;
                printf("CLOSED PROGRAM...");
                break;
            }
    }
    menu();

    return 0;
}
