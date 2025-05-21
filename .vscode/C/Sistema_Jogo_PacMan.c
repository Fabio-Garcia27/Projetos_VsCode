// Fábio Sistema Jogo PacMan
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

#define LARGURA 20
#define ALTURA 10

// Variáveis global
int pacmanX = 1, pacmanY = 1;
int pontos[LARGURA][ALTURA];
int pontuacao = 0;
int fantasmas[4][2] = {{3, 3}, {5, 5}, {7, 7}, {9, 9}};

// Função para desenhar o labirinto
void func_desenharLabirinto() {
    system("cls");
    for (int i = 0; i < ALTURA; i++) {
        for (int j = 0; j < LARGURA; j++) {
            if (i == pacmanY && j == pacmanX) {
                printf("P "); // Pacman
            } else if (pontos[j][i] == 1) {
                printf(". "); // Pontos
            } else if (j == 0 || j == LARGURA - 1 || i == 0 || i == ALTURA - 1) {
                printf("# "); // Parede
            } else {
                printf("  "); // Espaço vazio
            }
            // Desenhar fantasmas
            for (int k = 0; k < 4; k++) {
                if (i == fantasmas[k][1] && j == fantasmas[k][0]) {
                    printf("F "); // Fantasma
                }
            }
        }
        printf("\n");
    }
    printf("Pontuação: %d\n", pontuacao);
}

// Função para verificar colisão com fantasmas
int func_verificarColisao() {
    for (int i = 0; i < 4; i++) {
        if (pacmanX == fantasmas[i][0] && pacmanY == fantasmas[i][1]) {
            return 1;
        }
    }
    return 0;
}

// função que executa as demais funções
int func_pac_man() {
    // Inicializar pontos
    for (int i = 1; i < LARGURA - 1; i++) {
        for (int j = 1; j < ALTURA - 1; j++) {
            pontos[i][j] = 1;
        }
    }

    while (1) {
        func_desenharLabirinto();
        char tecla = getch();
        int novoX = pacmanX, novoY = pacmanY;
        switch (tecla) {
            case 'w':
                novoY--;
                break;
            case 's':
                novoY++;
                break;
            case 'a':
                novoX--;
                break;
            case 'd':
                novoX++;
                break;
        }
        // Verificar colisão com parede
        if (novoX > 0 && novoX < LARGURA - 1 && novoY > 0 && novoY < ALTURA - 1) {
            pacmanX = novoX;
            pacmanY = novoY;
        }
        // Verificar colisão com pontos
        if (pontos[pacmanX][pacmanY] == 1) {
            pontos[pacmanX][pacmanY] = 0;
            pontuacao++;
        }
        // Verificar colisão com fantasmas
        if (func_verificarColisao()) {
            printf("Game Over!\n");
            break;
        }
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8

    func_pac_man();
    getchar();
    return 0;
}
