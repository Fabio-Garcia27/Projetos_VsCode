//Fábio 15/05/2025 - Teste em C Guia Completo
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

//Declarar variáveis

int func_ope_arit() {
	int a = 5, b = 3;
	int soma = a + b;
	printf("soma de %d e %d é %d\n", a, b, soma);
 
	int subtracao = a - b;
	printf("subtracao de %d e %d é %d\n", a, b, subtracao);
 
	int mult = a * b;
	printf("multiplicaÉÉo de %d e %d é %d\n", a, b, mult);
 
	int divisao = a / b;
	printf("divisao de %d e %d é %d\n", a, b, divisao);
 
	int mod = a % b;
	printf("resto da divisÉo de %d e %d é %d\n", a, b, mod);
   
	a++;
	printf("incremento: %d\n", a);
   
	b--;
	printf("decremento: %d\n", b);

	//Igualdade
	int resultado = (a == b);
	printf("%d == %d é %d\n", a, b, resultado);
	//DiferenÉa
	resultado = (a != b);
	printf("%d != %d é %d\n", a, b, resultado);
	//Maior
	resultado = (a > b);
	printf("%d > %d é %d\n", a, b, resultado);
	//Menor
	resultado = (a < b);
	printf("%d < %d é %d\n", a, b, resultado);
	//Maior ou igual
	resultado = (a >= b);
	printf("%d >= %d é %d\n", a, b, resultado);
	//Menor ou Igual
	resultado = (a <= b);
	printf("%d <= %d é %d\n", a, b, resultado);
 
	return 0;
}

int func_ope_log() {
	int c = 1, d = 1;
	//AND (E)
	int resultado = (c && d);
	printf("%d && %d é %d\n", c, d, resultado);
	//OR (OU)
	resultado = (c || d);
	printf("%d || %d é %d\n", c, d, resultado);
	//NOT (Não)
	resultado = !c;
	printf("!%d é %d\n", c, resultado);
	//Combinação de operadores lógicos
	resultado = (c && d) || !c;
	printf("(%d && %d) || !%d é %d\n", c, d, c, resultado);
 
	return 0;
}

int func_ope_bit_bit() {
	int a = 5, b = 3;
	//AND
	int resultado = (a & b);
	printf("%d & %d e %d\n", a, b, resultado);
	//OR
	resultado = (a | b);
	printf("%d | %d e %d\n", a, b, resultado);
	//XOR
	resultado = (a ^ b);
	printf("%d ^ %d e %d\n", a, b, resultado);
	//NOT
	resultado = (~a);
	printf("~%d e %d\n", a, resultado);
	//deslocamento de bits a esquerda
	resultado = (a << 1);
	printf("%d << 1 e %d\n", a, resultado);
	//deslocamento de bits a direita
	resultado = (a >> 1);
	printf("%d >> 1 e %d\n", a, resultado);
 
	return 0;
}
// tamanho dos bits
	int func_test_sizeof() {
    int a = 5;		
	printf("O tamanho de a e %lu bytes\n", sizeof(a));
 
    double b = 3.14;
    printf("O tamanho de b e %lu bytes\n", sizeof(b));
 
    char c = 'x';
    printf("O tamanho de c e %lu bytes\n", sizeof(c));
 
    return 0;
}

// ponteior
int func_ponteiro() {
	int a = 5;
	int* p = &a;
	
	printf("O valor de a é %d\n", a);
	printf("O endereeo de a é %p\n", (void*)&a);
	printf("O valor armazenado no ponteiro p é %p\n", (void*)p);
	printf("O valor acessado atraves do ponteiro p é %d\n", *p);
 
	*p = 7;
	printf("Novo valor de a é %d\n", a);
 
	return 0;
}

// TernÉrio
int func_ternario() {
	int a = 5, b = 3;
	int maior = (a > b) ? a : b;
	printf("O maior número entre %d e %d é %d\n", a, b, maior);
 
	return 0;
}

// if e else
	int func_if_else() {
	int idade = 30;
	if (idade < 18) {
    	printf("Você é menor de idade.\n");
	}else if (idade >= 18 && idade <= 30) {
              printf("Você é jovem adulto.\n");
    }else {
          printf("Você é adulto.\n");
	}		
	return 0;
}

// switch
int func_switch() {
	char opcao = 'B';
	switch (opcao) {
    case 'A':
        printf("Opção A escolhida.\n");
        break;
    case 'B':
        printf("Opção B escolhida.\n");
        break;
    case 'C':
        printf("Opção C escolhida.\n");
        break;
    default:
        printf("Opção inválida.\n");
	}
	return 0;
}			 		 	 			

// for
int func_for() {
	for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
	}
	return 0;
}

// while
int func_while() {
	int i = 0;
	while (i < 10) {
    printf("%d\n", i);
    i++;
	}	 		
	return 0;
}

// do while
int func_do_while() {
	int i = 0;
	do {
    printf("%d\n", i);
    i++;
	}while (i < 10);
	return 0;
}

// Vetor e Matriz
int func_vetor() {
	#define TAMANHO 10
	// Declara um vetor de inteiros com 10 elementos
	  int vetor[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
  	// Exibe o conteÉdo do vetor
  	printf("ConteÉdo do vetor:\n");
  	for (int i = 0; i < TAMANHO; i++) {
	printf("%d ", vetor[i]);
  	}
  	printf("\n");
 
  	// Declara uma matriz de inteiros com 3 linhas e 2 colunas
  	int matriz[3][2] = {
	{1, 2},
	{3, 4},
	{5, 6}
    };
    // Exibe o conteÉdo da matriz
   printf("ConteÉdo da matriz:\n");
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
           }    		  
			printf("\n");
 		}
   return 0;
}

// Struct
// Declara uma struct chamada "Pessoa" com os campos "nome", "idade" e "sexo"
struct Pessoa {
  	char nome[50];
  	int idade;
	char sexo;
};

int func_struct() {
    // Declara uma variÉvel do tipo "Pessoa" chamada "pessoa1"
    struct Pessoa pessoa1;
 
    // Atribui valores aos campos da struct "pessoa1"
    strcpy(pessoa1.nome, "João");
    pessoa1.idade = 25;
    pessoa1.sexo = 'M';
 
    // Exibe os valores dos campos da struct "pessoa1"
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
	getchar();

    return 0;	
}

// string e funções
//strlen(): retorna o tamanho de uma string (sem contar o caractere nulo).
//strcpy(): copia uma string para outra.
//strcat(): concatena duas strings.
//strcmp(): compara duas strings.
int func_string() {
 	// Declara duas strings
  	char string1[] = "Olá, mundo!";
  	char string2[20];
 
  	// Copia a string "string1" para "string2"
  	strcpy(string2, string1);
 
  	// Exibe as duas strings
  	printf("string1: %s\n", string1);
  	printf("string2: %s\n", string2);
 
  	// Exibe o tamanho das strings
  	printf("Tamanho de string1: %ld\n", strlen(string1));
  	printf("Tamanho de string2: %ld\n", strlen(string2));
 
  	// Concatena as strings e armazena o resultado em uma terceira string
  	char string3[20];
  	strcpy(string3, string1);
  	strcat(string3, string2);
 
  	// Exibe a string resultante da concatenação
  	printf("string3: %s\n", string3);
 
  	// Compara as strings "string1" e "string2"
  	if (strcmp(string1, string2) == 0) {
		printf("As strings são iguais.\n");
  	} else {
		printf("As strings são diferentes.\n");
  	}

  getchar();
  return 0;
}

// executar as funções
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Define o locale para PortuguÉs (Brasil) UTF-8
	func_ope_arit();
	func_ope_log();
	func_ope_bit_bit();
	func_test_sizeof();
	func_ponteiro();
	func_ternario();
	func_if_else();
	func_switch();
	func_for();
	func_while();
	func_do_while();
	func_vetor();
	func_struct();
	func_string();
    // ... seu código aqui ... Descobrir onde está o erro que não abre o programa
    //system("pause"); // ou getchar();
    //return 0;
	return 0;
}