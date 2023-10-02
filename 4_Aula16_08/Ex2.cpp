#include<stdio.h>
#include<stdlib.h>

int main (void){
	char **nome;
	float *nota;
	int i;

	nome =(char**) malloc (3*sizeof(char*));
	
	for(i=0; i<3; i++){
		nome[i] =(char*) malloc (10*sizeof(char));
	}
	nota = (float *) malloc (3*sizeof(float));
	
	for (i=0; i<3; i++){
		printf("Digite o nome: ");
		scanf("%s", &nome[i][0]);
		printf("Digite a nota: ");
		scanf("%f", &nota[i]);
	}
	
	printf("Nome \t\t Nota\n");
	
	for (i=0; i<3; i++){
		printf("%s \t\t%.2f\n", *(nome + i), *(nota + i));	
	}
}

