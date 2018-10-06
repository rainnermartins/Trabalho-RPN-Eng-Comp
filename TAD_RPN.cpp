#include<stdio.h>
#include<stdlib.h>

struct no {
	float valor;
	int operador;
	struct no *prox;
}No;

struct fila{
	struct No *primeiro;
}Fila;

struct pilha{
	struct No *topo;
}Pilha;

struct saida{
	struct No *primeiro;
}Saida;
//=============================================================

void criarFila(){
		struct Fila *f = (Fila*)malloc(sizeof(fila));
		f->primeiro=NULL;
	}
void criarPilha(){
		struct Pilha *p = (Pilha*)malloc(sizeof(pilha));
		p->topo=NULL;
	}
void criarSaida(){
		struct Saida *s = (Saida*)malloc(sizeof(saida));
		s->primeiro=NULL;
	}	
//=============================================================	
bool inserirFila(float valor){
	No *n = (No*)malloc(sizeof(No));
	if(n==NULL){
		return false;
	}else{
		n->valor=valor;
		n->prox = primeiro;
		primeiro = n;
	}
}
bool inserirPilha(float valor){
	No *n = (No*)malloc(sizeof(No));
	if(n==NULL){
		return false;
	}else{
		n->valor=valor;
		n->prox = topo;
		topo = n;
	}
}
bool inserirSaida(float valor){
	No *n = (No*)malloc(sizeof(No));
	if(saidaVazia()){
		return false;
	}else{
		n->valor=valor;
		n->prox = primeiro;
		primeiro = n;
	}
}
bool retirarFila(float &valor){
	No *tmp;
	if(filaVazia()){
		return false;
	}else{
		valor = primeiro->item;
		primeiro = primeiro->prox;
		temp->prox = NULL;
		free(tmp);
		return true;
	}
}
bool retirarPilha(float &valor){
	No *tmp;
	if(pilhaVazia()){
		return false;
	}else{
		valor = topo->item;
		topo = topo->prox;
		temp->prox = NULL;
		free(tmp);
		return true;
	}
}
bool retirarSaida(float &valor){
	No *tmp;
	if(saidaVazia()){
		return false;
	}else{
		valor = topo->item;
		topo = topo->prox;
		temp->prox = NULL;
		free(tmp);
		return true;
	}
}
//==============================================================

bool filaVazia(){
	if(primeiro==NULL){
		return true;
	}else{
		return false;
	}
}
bool pilhaVazia(){
	if(topo==NULL){
		return true;
	}else{
		return false;
	}
}
bool saidaVazia(){
	if(primeiro==NULL){
		return true;
	}else{
		return false;
	}
}
int main(){
	int expressao[15]= {'3','+','4','*','2','/','(','1','-','5',')','^','2','^','3'};
	criarFila();
	criarPilha();
	criarSaida();
	for (int i=0;i<15;i++){
		inserirFila(expressao[i]);
	}
	for (i=0;i<15;i++){
		if (isdigit(No->valor)){
			inserirSaida(No->valor);
		}else{
			if ((No->valor>=No->prox->valor)||(Pilha->topo!='(')){
				inserirSaida();
			}else{
				inserirPilha(No->valor);
			}
		}
	}
	while (pilhaVazia()==false){
		inserirSaida(retirarPilha());
	}
	system("pause");
	return 0;
}
