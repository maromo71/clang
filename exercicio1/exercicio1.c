#include <stdio.h>
#include <stdlib.h>

void ler(int *p_matriz, int t);
void somar(int *p_matriz, int soma[], int l, int c);
void criarResultante(int *p_resultante, int *p_matriz, int soma[], int l, int c);
int main(int argc, char const *argv[])
{
    int matriz[5][5];
    int soma[5] = {0};
    int resultante[5][5];
    ler(matriz, 25);
    printf("\nSoma de cada linha da matriz acima.\n");
    somar(matriz, soma, 5, 5);
    printf("\nMatriz restultante\n");
    criarResultante(resultante, matriz, soma, 5, 5);
    return 0;
}

void ler(int *p_matriz, int t)
{
    for (int i = 0; i < t; i++)
    {
        *p_matriz = rand() % 10;
        printf("[%2d ]", *p_matriz++);
        if ((i + 1) % 5 == 0)
            printf("\n");
    }
}

void somar(int *p_matriz, int soma[], int l, int c)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma[i] = soma[i] + *p_matriz++;
        }
        printf("[%d ]\n", soma[i]);
    }
}

void criarResultante(int *p_resultante, int *p_matriz, int soma[], int l, int c)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            //multiplicacao
            *p_resultante = soma[i]  *  *p_matriz++;
            printf("[%4d ]", *p_resultante++);
        }
        printf("\n");
    }
}