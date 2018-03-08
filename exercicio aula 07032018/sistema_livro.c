#include <stdio.h>
#include <stdlib.h>
#include "livro.c"
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
	Livro *livro, biblioteca[3];
	char tituloLivro[30];
	float precoLivro,media, soma;
	int anoEdicaoLivro, numeroPaginasLivro, contador;
	for(contador=0;contador<3;contador++){
		printf("Titulo do Livro: ");
		fflush(stdin);
		gets(tituloLivro);
		printf("Pre�o do Livro: ");
		scanf("%f",&precoLivro);
		printf("Ano de Edi��o do Livro: ");
		scanf("%i",&anoEdicaoLivro);
		printf("N�mero de p�ginas do Livro: ");
		scanf("%i",&numeroPaginasLivro);
		livro = criar(tituloLivro, precoLivro, anoEdicaoLivro, numeroPaginasLivro);
		biblioteca[contador] = *livro;
	}
	soma=0;
	for(contador=0;contador<3;contador++){
		livro = &biblioteca[contador];
		acessar(livro, tituloLivro, &precoLivro, &anoEdicaoLivro, &numeroPaginasLivro);
		printf("\nTitulo do Livro: %s\n Pre�o do livro: %.2f \n Ano de Edi��o: %i \n Numero de P�ginas ", tituloLivro, precoLivro, anoEdicaoLivro, numeroPaginasLivro );
		soma =numeroPaginasLivro;
	}
	media = soma/3;
	printf("\n\nA Media do n�mero de P�ginas dos livros � = %.2f",media);
	return 0;
}
