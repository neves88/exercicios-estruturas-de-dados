#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int n;
    int i;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &n);

    int *vet_int;

    vet_int = (*int )malloc(sizeof(int) * n);

    for (i = 0; i < n; ++i) {
         printf("\nInforme o elemento da posição %d \n", i);
    }
    for (i = 0; i < n; ++i) {
        printf("%d ", i);
    }
    printf("\n");
    free(int_vet);
    return 0;
}
