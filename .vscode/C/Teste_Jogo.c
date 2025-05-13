//Fábio 13/05/2025 - Aqui está um exemplo de como podemos desenvolver o jogo Pedra-Papel-Tesoura em C:
/*
O jogo funciona da seguinte forma:

1. O usuário é solicitado a digitar sua jogada (1 para Pedra, 2 para Papel ou 3 para Tesoura).
2. O computador gera uma jogada aleatória usando a função gerar_jogada_computador.
3. As jogadas são comparadas e o vencedor é determinado pela função determinar_vencedor.
4. O resultado é impresso na tela.


- stdio.h: entrada e saída de dadoscl
- string.h: manipulação de strings
- stdlib.h: alocação de memória, conversão de tipos, etc.
- math.h: funções matemáticas
- time.h: funções de data e hora
- conio.h: comandos de entrada e saída diversas
- unistd.h: 
- sleep(): Faz com que o programa aguarde um determinado período de tempo (em segundos).
- usleep(): Faz com que o programa aguarde um determinado período de tempo (em microssegundos).
- fork(): Cria um novo processo.
- pipe(): Cria um pipe para comunicação entre processos.
- locale.h: Localidade do programa, definindo como os dados de texto e numéricos devem ser tratados.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <locale.h>

// Definição das jogadas
#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

// Função para gerar uma jogada aleatória do computador
int gerar_jogada_computador() {
    int jogada = (rand() % 3) + 1; // Gera um número aleatório entre 1 e 3
    printf("Jogada do computador: %d\n", jogada);
    getch();
    //return jogada;
}

// Função para determinar o vencedor
void determinar_vencedor(int jogada_usuario, int jogada_computador) {
    if (jogada_usuario == jogada_computador) {
        printf("Empate!\n");
    } else if ((jogada_usuario == PEDRA && jogada_computador == TESOURA) ||
               (jogada_usuario == TESOURA && jogada_computador == PAPEL) ||
               (jogada_usuario == PAPEL && jogada_computador == PEDRA)) {
        printf("Você ganhou!\n");
    } else {
        printf("Computador ganhou!\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8    
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    int jogada_usuario;
    printf("Digite sua jogada (1 para Pedra, 2 para Papel, 3 para Tesoura): ");
    scanf("%d", &jogada_usuario);
    printf("Pressione uma tecla para continuar...");
    getch();

    // Verifica se a jogada do usuário é válida
    if (jogada_usuario < 1 || jogada_usuario > 3) {
        printf("Jogada inválida!\n");
        getch(); // Pausa para ver o resultado
        return 1;
    }

    int jogada_computador = gerar_jogada_computador();

    // Imprime as jogadas
    printf("Você jogou: ");
    switch (jogada_usuario) {
        case PEDRA:
            printf("Pedra\n");
            break;
        case PAPEL:
            printf("Papel\n");
            break;
        case TESOURA:
            printf("Tesoura\n");
            break;
    }

    printf("Computador jogou: ");
    switch (jogada_computador) {
        case PEDRA:
            printf("Pedra\n");
            break;
        case PAPEL:
            printf("Papel\n");
            break;
        case TESOURA:
            printf("Tesoura\n");
            break;
    }
    // Determina o vencedor
    determinar_vencedor(jogada_usuario, jogada_computador);

    printf("Pressione uma tecla para encerrar a jogada...");
    getchar(); // Adicione essa linha
    getchar(); // Adicione essa linha também, pois o scanf deixa um caractere no buffer

    return 0;
}
