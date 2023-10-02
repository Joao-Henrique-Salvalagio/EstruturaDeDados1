#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void){
	No *r, *fila = NULL;
	int opcao, valor;
	
	do{
		printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Imprimir\n4 - Inserir com prioridade\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Digite um valor: ");
				scanf("%d", &valor);
				inserir(&fila, valor);
				break;
			case 2:
				r = remover (&fila);
				if(r){
					printf("Removido: %d\n", r -> valor);
					free(r);
				}
				break;
			case 3:
				imprimir(fila);
				break;
			case 4:
				printf("Digite um valor: ");
				scanf("%d", &valor);
				inserirp(&fila, valor);
				break;
			default:
				if(opcao != 0)
					printf("\nOpção inválida.\n");
		}
	}while(opcao != 0);
}
