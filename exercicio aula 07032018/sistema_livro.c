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
		printf("Preço do Livro: ");
		scanf("%f",&precoLivro);
		printf("Ano de Edição do Livro: ");
		scanf("%i",&anoEdicaoLivro);
		printf("Número de páginas do Livro: ");
		scanf("%i",&numeroPaginasLivro);
		livro = criar(tituloLivro, precoLivro, anoEdicaoLivro, numeroPaginasLivro);
		biblioteca[contador] = *livro;
	}
	soma=0;
	for(contador=0;contador<3;contador++){
		livro = &biblioteca[contador];
		acessar(livro, tituloLivro, &precoLivro, &anoEdicaoLivro, &numeroPaginasLivro);
		printf("\nTitulo do Livro: %s\n Preço do livro: %.2f \n Ano de Edição: %i \n Numero de Páginas ", tituloLivro, precoLivro, anoEdicaoLivro, numeroPaginasLivro );
		soma =numeroPaginasLivro;
	}
	media = soma/3;
	printf("\n\nA Media do número de Páginas dos livros é = %.2f",media);
	return 0;
}
