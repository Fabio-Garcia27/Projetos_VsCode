// Fábio Modularização Variáveis local e global
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
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <locale.h>
#include <ctype.h>

// Variáveis global

// Estrutura para representar uma peça de xadrez
typedef struct {
    int tipo; // Tipo de peça (rei, rainha, torre, etc.)
    int cor; // Cor da peça (branca ou preta)
    int x; // Posição x da peça no tabuleiro
    int y; // Posição y da peça no tabuleiro
} Peca;

// Função para inicializar o tabuleiro de xadrez
void func_inicializarTabuleiro(Peca tabuleiro[8][8]) {
    // Inicializar as peças brancas
    tabuleiro[0][0].tipo = 1; // Torre
    tabuleiro[0][1].tipo = 2; // Cavalo
    tabuleiro[0][2].tipo = 3; // Bispo
    tabuleiro[0][3].tipo = 4; // Rainha
    tabuleiro[0][4].tipo = 5; // Rei
    tabuleiro[0][5].tipo = 3; // Bispo
    tabuleiro[0][6].tipo = 2; // Cavalo
    tabuleiro[0][7].tipo = 1; // Torre

    // Inicializar as peças pretas
    tabuleiro[7][0].tipo = 1; // Torre
    tabuleiro[7][1].tipo = 2; // Cavalo
    tabuleiro[7][2].tipo = 3; // Bispo
    tabuleiro[7][3].tipo = 4; // Rainha
    tabuleiro[7][4].tipo = 5; // Rei
    tabuleiro[7][5].tipo = 3; // Bispo
    tabuleiro[7][6].tipo = 2; // Cavalo
    tabuleiro[7][7].tipo = 1; // Torre
}

// Função para validar um movimento
int func_validarMovimento(Peca tabuleiro[8][8], int x1, int y1, int x2, int y2) {
    // Verificar se a posição de origem é válida
    if (x1 < 0 || x1 >= 8 || y1 < 0 || y1 >= 8) {
        return 0;
    }

    // Verificar se a posição de destino é válida
    if (x2 < 0 || x2 >= 8 || y2 < 0 || y2 >= 8) {
        return 0;
    }

    // Verificar se a peça pode se mover para a posição de destino
    // Implementar a lógica de movimento para cada tipo de peça
    return 1;
}

int func_tabuleiro() {
    Peca tabuleiro[8][8];

    // Inicializar o tabuleiro
    func_inicializarTabuleiro(tabuleiro);

    // Loop principal do jogo
    while (1) {
        // Pedir ao usuário para entrar com o movimento
        int x1, y1, x2, y2;
        printf("Entre com a posição de origem (x y): ");
        scanf("%d %d", &x1, &y1);
        getchar();

        printf("Entre com a posição de destino (x y): ");
        scanf("%d %d", &x2, &y2);
        getchar();

        // Validar o movimento
        if (func_validarMovimento(tabuleiro, x1, y1, x2, y2)) {
            // Realizar o movimento
            // Implementar a lógica para realizar o movimento
            printf("Movimento válido!\n");
            getchar();
        } else {
            printf("Movimento inválido!\n");
            getchar();
        }
    }
    return 0;
}


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_tabuleiro();

    //printf("\nPrecione Enter para Encerrar...\n");
    getche();
    return 0;    
}   





