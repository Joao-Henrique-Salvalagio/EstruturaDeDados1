#include <stdio.h>
#include <stdlib.h>
int main (void) {
   //declara i como inteiro e ponteiro de p como inteiro
   int i; int *p;
   // i recebe 1234 e p recebe o endere�o de i
   i = 1234; p = &i;
   //mostra na tela em inteiro o valor para o ponteiro de p aponta
   printf ("*p = %d\n", *p);
   //mostra na tela em um inteiro longo o endere�o de i
   printf (" p = %ld\n", (long int) p);
   //mostra na tela em hexadecimal o valor do ponteiro p 
   printf (" p = %p\n", (void *) p);
   //mostra em hexadecimal o endere�o do ponteiro p 
   printf ("&p = %p\n", (void *) &p);
   ////retorna o valor de sa�da para indicar que um programa foi encerrado com sucesso 
   return EXIT_SUCCESS;
}
