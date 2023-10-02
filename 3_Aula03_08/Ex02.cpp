#include <stdio.h>
#include <stdlib.h>
int main (void) {
	//declara váriavel i como sendo inteira e recebe o valor 1234
    int i = 1234; 
    //mostra na tela o valor de i como sendo inteiro 
    printf ("i = %d\n", i);
    //mostra na tela o endereço armazenado de i como sendo inteiro longo 
    printf ("&i = %ld\n", (long int) &i);
    //mostra na tela o valor em hexadecimal para o local onde o ponteiro de i está apontando
    printf ("&i = %p\n", (void *) &i);
    //retorna o valor de saída para indicar que um programa foi encerrado com sucesso   
    return EXIT_SUCCESS;
}
