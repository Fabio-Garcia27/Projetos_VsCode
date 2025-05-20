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
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <locale.h>
#include <ctype.h>


#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <math.h> 

// Variáveis global
int binario[32];
int i = 0;
int decimal = 0;
int base = 1;
int octal[32];
int opcao;

// Função para converter decimal para binário
void func_decimalParaBinario(int decimal) {
    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

// Função para converter binário para decimal
int func_binarioParaDecimal(char *binario) {
    int tamanho = strlen(binario);
    for (int i = tamanho - 1; i >= 0; i--) {
        if (binario[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

// Função para converter decimal para octal
void func_decimalParaOctal(int decimal) {
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
}

// Função para converter octal para decimal
int func_octalParaDecimal(char *octal) {
    int tamanho = strlen(octal);
    for (int i = tamanho - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * base;
        base *= 8;
    }
    return decimal;
}

// Função para converter hexadecimal para binário
void func_hexadecimalParaBinario(char *hexadecimal) {
    int decimal = strtol(hexadecimal, NULL, 16);
    func_decimalParaBinario(decimal);
}

// Função para converter binário para hexadecimal
void func_binarioParaHexadecimal(char *binario) {
    int decimal = func_binarioParaDecimal(binario);
    printf("%X", decimal);
}

int func_num_conversao(){
    printf("Conversor de Sistemas Numéricos\n");
    printf("1. Decimal para Binário\n");
    printf("2. Binário para Decimal\n");
    printf("3. Decimal para Octal\n");
    printf("4. Octal para Decimal\n");
    printf("5. Hexadecimal para Binário\n");
    printf("6. Binário para Hexadecimal\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
        case 1: {
            int decimal;
            printf("Digite um número decimal: ");
            scanf("%d", &decimal);
            getchar();
            printf("Binário: ");
            func_decimalParaBinario(decimal);
            printf("\n");
            //getchar();
            break;
        }
        case 2: {
            char binario[32];
            printf("Digite um número binário: ");
            scanf("%s", binario);
            getchar();
            printf("Decimal: %d\n", func_binarioParaDecimal(binario));
            getchar();
            break;
        }
        case 3: {
            int decimal;
            printf("Digite um número decimal: ");
            scanf("%d", &decimal);
            getchar();
            printf("Octal: ");
            func_decimalParaOctal(decimal);
            printf("\n");
            //getchar();
            break;
        }
        case 4: {
            char octal[32];
            printf("Digite um número octal: ");
            scanf("%s", octal);
            getchar();
            printf("Decimal: %d\n", func_octalParaDecimal(octal));
            break;
        }
        case 5: {
            char hexadecimal[32];
            printf("Digite um número hexadecimal: ");
            scanf("%s", hexadecimal);
            getchar();
            printf("Binário: ");
            func_hexadecimalParaBinario(hexadecimal);
            printf("\n");
            break;
        }
        case 6: {
            char binario[32];
            printf("Digite um número binário: ");
            scanf("%s", binario);
            getchar();
            printf("Hexadecimal: ");
            func_binarioParaHexadecimal(binario);
            printf("\n");
            break;
        }
        default:
            printf("Opção inválida\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para Português (Brasil) UTF-8
    func_num_conversao();

    return 0;
    getchar();
}
