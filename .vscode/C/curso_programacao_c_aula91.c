// Fábio 20/05/2025 Curso Programação em C
#include <stdio.h>
#include <stdlib.h>

//Variáveis global
int i;
int soma = 0;

// argc número inteiro passar parâmetro numérico
// argv passar parâmetros string nomes
int main(int argc, char* argv[]) {
    if (argc == 1){
        printf("Programa %s sem parâmetros\n", argv[0]);
    } else {
        //printf("Parâmetros do propgrama %s:\n", argv[0]);
        printf("Somando os parâmetros de %s:\n", argv[0]);
        for (i = 1; i < argc; i++)
             soma += atoi(argv[i]); // função atoi(); converte string para inteiro
             //printf("Parâmetro %d: %s\n", i, argv[i]);
             printf("Soma = %d: %s\n", soma);
    }
    //system("pause");
    getchar();
    return 0;
}