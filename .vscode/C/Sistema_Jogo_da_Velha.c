// Fábio Sistema Conversão 
/*
Decimal para Binário
Binário para Decimal
Decimal para Octal
Octal para Decimal
Hexadecimal para Binário
Binário para hexadecimal

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
#include <conio.h>
#include <unistd.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

// Variáveis global
char tabuleiro[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int jogada;
int turno = 0;
int linha, coluna;

// Função para desenhar o tabuleiro
void func_desenharTabuleiro() {
    printf(" %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
}

// Função para verificar se há um vencedor
int func_verificarVencedor(char jogador) {
    // Verificar linhas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) {
            return 1;
        }
    }
    // Verificar colunas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) {
            return 1;
        }
    }
    // Verificar diagonais
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1;
    }
    return 0;
}

// Função para realizar a jogada do computador
void func_jogadaComputador() {
    do {
        linha = rand() % 3;
        coluna = rand() % 3;
    } while (tabuleiro[linha][coluna] == 'O' || tabuleiro[linha][coluna] == 'X');
    tabuleiro[linha][coluna] = 'O';
}

// Função para realizar a jogada do usuário
void func_jogadaUsuario(int jogada) {
    int linha = (jogada - 1) / 3;
    int coluna = (jogada - 1) % 3;
    tabuleiro[linha][coluna] = 'X';
}

// função que executa as demais funções
int func_jogo_velha(){
    srand(time(NULL));
    func_jogadaComputador();
    func_desenharTabuleiro();
    while (turno < 8) {
        printf("Insira sua jogada (1-9): ");
        scanf("%d", &jogada);
        getchar();

        func_jogadaUsuario(jogada);
        func_desenharTabuleiro();
        if (func_verificarVencedor('X')) {
            printf("Você venceu!\n");
            getchar();
            return 0;
        }
        func_jogadaComputador();
        func_desenharTabuleiro();
        if (func_verificarVencedor('O')) {
            printf("Computador venceu!\n");
            getchar();
            return 0;
        }
        turno++;
    }
    printf("Empate!\n");
    getchar();
    return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8

    func_jogo_velha();
    getchar();
    return 0;
}
