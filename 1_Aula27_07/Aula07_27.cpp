#include <stdio.h>
int main(void){
	int a = 100, *b, **c;
	b = &a;
	c = &b;
	
	printf("Endereço de A: %p \tConteúdo de A: %d\n", &a, a);
	printf("Endereço de B: %p \tConteúdo de B: %d\n", &b, b);
	printf("Conteúdo apontado por B: %d\n", *b);
	printf("Endereço de C: %p \tConteúdo deC: %d\n", &c, c);
	printf("Conteúdo apontado por C: %d\n", **c);
	
}

