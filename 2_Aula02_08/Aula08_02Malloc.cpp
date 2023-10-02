#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *x;
	x = (int*) malloc (sizeof(int));
	
	if(x){
		printf("Memória alocada com sucesso. \n");
		printf("x: %d\n", *x);
		*x = 50;
		printf("x: %d\n", *x);
		printf("x: %p\n", &x);
		printf("x: %p\n", x);
		printf("bytes: %d",sizeof(int));
		
	}
	else
		printf("Erro ao alocar memória. \n");
}
