#include <string.h>
#include <stdlib.h>
#include "pesquisa.h"

typedef struct pesquisa {
	char sexo[8];
	int idade;
	int numeroFilhos;
	float salario;
};

Pesquisa* criar(char *sexoPesquisa, int idadePesquisa, int numeroFilhosPesquia,  float salarioPesquisa){
	Pesquisa *a = (Pesquisa*) malloc(sizeof(Pesquisa));
	if(a!=NULL){
		strcpy(a->sexo,sexoPesquisa);
		a->idade = idadePesquisa;
		a->numeroFilhos = numeroFilhosPesquia;
		a->salario = salarioPesquisa;
	}
	return a;
}

void acessar(Pesquisa *pesquisa, char *sexoPesquisa, int *idadePesquisa, int *numeroFilhosPesquisa ,float *SalarioPesquisa) {
	strcpy(sexoPesquisa, pesquisa->sexo);
	*idadePesquisa = pesquisa-> idade;
	*numeroFilhosPesquisa = pesquisa-> numeroFilhos;
	*SalarioPesquisa = pesquisa -> salario;
}

void liberar(Pesquisa *pesquisa){
	free(pesquisa);
}
