#include <stdio.h>


int main(void){
	int a, *b, **c, ***d;
	printf("Digite um valor: " );
	scanf("%d", &a);
	
	b = &a;
	c = &b;
	d = &c;
	
	printf("O dobro de %d e: %d\n", a, 2 * *b);
	printf("O triplo de %d e: %d\n", a, 3 * **c);
	printf("O quádruplo de %d e: %d\n", a, 4 * ***d);
}
