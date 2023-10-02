#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void inserir (No **fila, int num){
No *aux, *novo = (No*) malloc (sizeof(No));
if (novo){
	novo -> valor = num;
	novo -> proximo = NULL;
	if(*fila == NULL)
		*fila = novo;
	else{
		aux = *fila;
		while(aux -> proximo)
			aux = aux -> proximo;
			aux -> proximo = novo;
	}
	
}else
printf("\nErro ao alocar memório.\n");
}

void inserirp(No **fila, int num){
	No *aux, *novo = (No*) malloc(sizeof(No));
	if(novo){
		novo -> valor = num;
		novo -> proximo = NULL;
		if(*fila == NULL)
			*fila = novo;
		else{
			if(num > 59){
				if((*fila) -> valor < 60){
					novo -> proximo = *fila;
					*fila = novo;
				}else{
					aux = *fila;
					while (aux -> proximo && aux -> proximo -> valor > 59)
						aux = aux -> proximo;
					novo = aux -> proximo;
					aux -> proximo = novo;
				}
			}else{
				aux = *fila;
				while (aux -> proximo)
					aux = aux -> proximo;
				aux -> proximo = novo;	
			}
		}
	}else
	printf("\nErro ao alocar memória.\n");
	
}

No* remover(No **fila){
	No *remover = NULL;
	
	if(*fila){
		remover = *fila;
		*fila = remover -> proximo;
	}else
		printf("\nFila vazia.\n");
	return remove;
}

void imprimir (No *fila){
	while(fila){
		printf("%d", fila -> valor);
		fila = fila -> proximo;
	}
	printf("\n");
}
