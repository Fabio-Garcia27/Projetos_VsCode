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
#include <ctype.h>

//Declarar variáveis
int contador = 0;

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

	// Declara uma string
    char string[] = "embarcados!";
 
  	// Converte a string para maiúsculas
  	for (int i = 0; string[i] != '\0'; i++) {
	string[i] = toupper(string[i]);
  	}
  	printf("String em maiúsculas: %s\n", string);
 
  	// Converte a string para minúsculas
  	for (int i = 0; string[i] != '\0'; i++) {
	string[i] = tolower(string[i]);
  	}
  	printf("String em minúsculas: %s\n", string);

  getchar();
  return 0;
}

//Em C, as constantes são valores que não podem ser modificados durante a execução do programa. 
//Elas são declaradas com a palavra-chave “const” e podem ser do tipo inteiro, flutuante, caractere ou string.
int func_constantes() {
	// Declara uma constante inteira chamada "MAX_VALOR" e atribui o valor 10
    const int MAX_VALOR = 10;
 
  	// Exibe o valor da constante
  	printf("MAX_VALOR = %d\n", MAX_VALOR);
 
  	// Declara uma variável "a" do tipo inteiro com tamanho reduzido
  	short a = 32767;
 
  	// Declara uma variável "b" do tipo inteiro com tamanho aumentado
  	long b = 123456789;
 
  	// Declara uma variável "c" do tipo inteiro com sinal
  	signed c = -123;
 
  	// Declara uma variável "d" do tipo inteiro sem sinal
  	unsigned d = 123;
 
 	 // Declara uma variável "e" do tipo ponto flutuante com precisão simples
  	float e = 3.14;
 
  	// Declara uma variável "f" do tipo ponto flutuante com precisão dupla
  	double f = 3.14159265358979323846;
	/*
	- %hd para short
	- %ld para long
	- %d para signed int
	- %u para unsigned int
	- %.2f para float com 2 casas decimais
	- %.15f para double com 15 casas decimais
	*/
	printf("Declaração de Variáveis:\n");
    printf("a (short): %hd\n", a);
    printf("b (long): %ld\n", b);
    printf("c (signed int): %d\n", c);
    printf("d (unsigned int): %u\n", d);
    printf("e (float): %.2f\n", e); // %.2f imprime com 2 casas decimais
    printf("f (double): %.15f\n", f); // %.15f imprime com 15 casas decimais

  getchar();
  return 0;
}
/*
/Os modificadores de armazenamento são palavras-chave usadas para controlar a maneira como as variáveis são armazenadas em memória em C
Eles permitem especificar o escopo e a duração de uma variável, além de sua visibilidade em relação a outras partes do código.

“auto”: indica que uma variável é armazenada na memória do stack e tem escopo de bloco (visível apenas dentro do bloco de código onde é declarada). 
Este é o modificador de armazenamento padrão em C.

“static”: indica que uma variável é armazenada na memória estática e tem escopo de arquivo (visível em todo o arquivo de código onde é declarada). 
Além disso, uma variável static mantém seu valor entre as chamadas da função onde é declarada.

“extern”: indica que uma variável é armazenada em outro lugar e tem escopo de arquivo (visível em todo o arquivo de código onde é declarada). 
A variável extern é usada para acessar uma variável global declarada em outro arquivo de código.

egister: é usado para indicar ao compilador que uma variável deve ser armazenada em um registrador, em vez de em uma área de memória, se possível. 
Isso pode melhorar o desempenho do seu programa, pois acessar um registrador é geralmente mais rápido do que acessar a memória.
*/

int func_mod_armaz() {
	int a = 5; // variavel a é automatica e tem escopo de funcao
	printf("Valor de a: %d\n", a);

	static int b = 5; // variavel a é estatica e tem escopo de funcao
	printf("Valor de b: %d\n", b);
	b++;

	extern int contador; // Declara a variável "contador" como externa
 	// Incrementa o valor de "contador"
  	contador++;
  	printf("contador = %d\n", contador);

	register int c = 5; // a é armazenada em um registrador, se possível
    printf("Valor de c: %d\n", c);

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
	func_constantes();
	func_mod_armaz();
    // ... seu código aqui ... Descobrir onde está o erro que não abre o programa
    //system("pause"); // ou getchar();
    //return 0;
	return 0;
}