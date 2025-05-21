// Fábio 20/05/2025 Curso Programação em C
/*
- stdio.h: entrada e saÉda de dados
- string.h: manipulaÉÉo de strings
- stdlib.h: alocÉÉo de memria, conversÉo de tipos, etc.
- math.h: funÉÉes matemÉticas
- time.h: funÉÉes de data e hora
- conio.h: comandos de entrada e saÉda diversas
- unistd.h: 
- sleep(): Faz com que o programa aguarde um determinado perÉodo de tempo (em segundos).
- usleep(): Faz com que o programa aguarde um determinado perÉodo de tempo (em microssegundos).
- fork(): Cria um novo processo.
- pipe(): Cria um pipe para comunicaÉÉo entre processos.
- locale.h: Localidade do programa, definindo como os dados de texto e numÉricos devem ser tratados.
*/

#include <unistd.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>
#include <conio.h>

#include "Ponto.h" // inclui definção na minha biblioteca

//Variável
float d;


//Aloca e retorna um ponto com coordenadas x e y
Ponto* pto_cria(float x, float y) {
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));;
    if (p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}
//Libera a memória alocada para um ponto
void pto_libera(Ponto* p){
    if (p != NULL){
        printf("%d\n", *p);
        free(p);
    }else {
        printf("Erro ao alocar memória\n");
    }
}
//Recupera, por referência, o valor de um ponto
void pto_acessa(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}
//Atribui a um ponto as coordenadas x e y
void pto_atribui(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;    
}
//Calcula a distância entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy); // sqrt é uma função da biblioteca matemática C que calcula a raiz quadrada de um número
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8    

    Ponto *p, *q;
    // Ponto r; //Erro
    p = pto_cria(10,21);
    q = pto_cria(7,25);
    // q->x = 2; // Erro
    d = pto_distancia(p,q);
    printf("Distância entre pontos: %f\n", d);
    getchar();
    
    pto_libera(q);
    pto_libera(p);
    
    getchar();
    return 0;
}