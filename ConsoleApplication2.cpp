#include <stdio.h>
#include <stdlib.h>

#define max 100;
#define min 0;
int topo = 0, dig = 0,
float pilha[max],operador[max], valor = 0, result=0;
char expressao[max] = "3 + 4 * 2 / ( 1 - 5 ) ^ 2 ^ 3";

void Empilhar(float valor){
	if (pilha[topo] != max) {
		pilha[topo] = valor;
		topo++;
	}
	else {
		printf("Pilha Cheia.\n");
	}
}

float Desempilhar(){
	if (pilha[topo] != min) {
		topo--;
		result = pilha[topo];
		return result;
	}
	else {
		printf("Pilha Vazia!");
	}
}



int main(){
    printf("\n  Calculadora RPN\nIremos Efetuar a Operação : 3 + 4 * 2 / (1 - 5) ˆ 2 ˆ 3\nEsse será um exemplo!\n\n");
	printf("Expressão 3 + 4 * 2 / (1 - 5) ^ 2 ^ 3\n\n");
	for (i = 0; i < strlen(expressao); i++) {
		Empilhar(expressao[i]);
		if (isdigit(expressao[i]) == false) {
			operador[] = expressao[i];
		}
	}
	
    return 0; 
}