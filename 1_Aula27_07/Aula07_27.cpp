#include <stdio.h>
int main(void){
	int a = 100, *b, **c;
	b = &a;
	c = &b;
	
	printf("Endere�o de A: %p \tConte�do de A: %d\n", &a, a);
	printf("Endere�o de B: %p \tConte�do de B: %d\n", &b, b);
	printf("Conte�do apontado por B: %d\n", *b);
	printf("Endere�o de C: %p \tConte�do deC: %d\n", &c, c);
	printf("Conte�do apontado por C: %d\n", **c);
	
}

