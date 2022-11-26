#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matriz[5][5];
    int soma[5] = {0};
    int resultante[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("[%2d ]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma de cada linha da matriz acima.\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma[i] = soma[i] + matriz[i][j];
        }
        printf("[%d ]\n", soma[i]);
    }
    printf("\nMatriz restultante\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            resultante[i][j] = soma[i] * matriz[i][j];
            printf("[%4d ]", resultante[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
