#include <stdio.h>
#include <stdlib.h>
#include "pesquisa.c"
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
	Pesquisa *pesquisa, qtdPesquisados[5];
	char sexoPesquisa[8];
	float salarioPesquisa,media, soma;
	int idadePesquisa, numeroFilhosPesquisa, contador;
	for(contador=0;contador<3;contador++){
		printf("Qual o sexo: ");
		fflush(stdin);
		gets(sexoPesquisa);
		printf("Salario: ");
		scanf("%f",&salarioPesquisa);
		printf("Qual sua idade ");
		scanf("%i",&idadePesquisa);
		printf("Número de filhos: ");
		scanf("%i",&numeroFilhosPesquisa);
		pesquisa = criar(sexoPesquisa, salarioPesquisa, idadePesquisa, numeroFilhosPesquisa);
		qtdPesquisados[contador] = *pesquisa;
	}
	soma=0;
	for(contador=0;contador<5;contador++){
		pesquisa = &qtdPesquisados[contador];
		acessar(pesquisa, sexoPesquisa, &salarioPesquisa, &idadePesquisa, &numeroFilhosPesquisa);
		printf("\nO sexo é: %s\n Salário: %.2f \n Idade: %i \n Numero de Filhos: %i  ", sexoPesquisa, salarioPesquisa, idadePesquisa, numeroFilhosPesquisa );
		soma =salarioPesquisa;
	}
	media = soma/5;
	printf("\n\nA Media do salario é = %.2f",media);
	return 0;
}
