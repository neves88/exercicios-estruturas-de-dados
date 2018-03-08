typedef struct livro Livro;

Livro* criar(char *tituloLivro, int anoEdicaoLivro, int numeroPaginasLivro,  float precoLivro);
void acessar(Livro *livro, char *titulo, int *anoEdicao, int *numeroPaginas , float *preco);
void liberar(Livro *livro);



