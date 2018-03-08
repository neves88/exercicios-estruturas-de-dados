typedef struct pesquisa Pesquisa;

Pesquisa* criar(char *sexoPesquisa, int idadePesquisa, int numeroFilhosPesquia,  float salarioPesquisa);
void acessar(Pesquisa *pesquisa, char *sexoPesquisa, int *idadePesquisa, int *numeroFilhosPesquisa , float *salarioPesquisa);
void liberar(Pesquisa *pesquisa);
