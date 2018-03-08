#include <string.h>
#include <stdlib.h>
#include "livro.h"

typedef struct livro {
	char titulo[30];
	int anoEdicao;
	int numeroPaginas;
	float preco;
};

Livro* criar(char *tituloLivro, int anoEdicaoLivro, int numeroPaginasLivro,  float precoLivro);{
	Livro *a = (Livro*) malloc(sizeof(Livro));
	if(a!=NULL){
		strcpy(a->titulo,tituloLivro);
		a->anoEdicao = anoEdicaoLivro;
		a->numeroPaginas = numeroPaginasLivro;
		a->preco = precoLivro;
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
