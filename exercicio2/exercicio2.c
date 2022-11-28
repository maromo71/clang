#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Computador {
    int codigo;
    char modelo[50];
    float preco;
};

typedef struct Computador * p_comp;

void imprimir(p_comp prod[], int i);
void procurar(p_comp vetor[], int codigo, int tam);


int main(int argc, char const *argv[])
{
    p_comp vet[100];
    for (int i = 0; i < 100; i++)
    {
        vet[i] = NULL;
    }
    vet[0] = (p_comp) malloc(sizeof(struct Computador));
    vet[0]->codigo = 1;
    strcpy(vet[0]->modelo, "Coca cola");
    vet[0]->preco = 2.68;

    vet[1] = (p_comp) malloc(sizeof(struct Computador));
    vet[1]->codigo = 2;
    strcpy(vet[1]->modelo, "Fanta");
    vet[1]->preco = 2.68;

    procurar(vet, 3, 2);
    return 0;
}

void procurar(p_comp vetor[], int codigo, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        if(vetor[i]->codigo == codigo){
            imprimir(vetor, i);
            return;
        }
    }
    printf("Código não encontrado \n");
    
}

void imprimir(p_comp prod[], int i){
    printf("Produto cod: %d \n", prod[i]->codigo);
    printf("Produto cod: %s \n", prod[i]->modelo);
    printf("Produto cod: %.2f \n", prod[i]->preco);
}