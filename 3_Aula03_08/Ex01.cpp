#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//permite definir (ou redefinir) um tipo de dado
	typedef struct {
	//declara dia, mes e ano como inteiros
      int dia, mes, ano; 
	} data;//Define o tipo de dado como sendo data
	//mostra na tela "sizeof (data) = valor inteiro
	printf ("sizeof (data) = %d\n", 
	//indica a quantidade de armazenamento, em bytes
           sizeof (data));
    //retorna o valor de saída para indicar que um programa foi encerrado com sucesso 
    return EXIT_SUCCESS;
}


