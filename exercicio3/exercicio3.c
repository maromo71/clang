#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //numero de casos testes
    int n;
    printf("Digite a quantidade de testes: \n");
    scanf("%d", &n);
    if(n<1) return;
    for (int i = 0; i < n; i++)
    {
        inicializaTeste();
    }
    
    return 0;
}

void inicializaTeste(){
    //numero de pessoas do grupo
    int k;
    //podemos ter no maximo 100 idiomas diferentes
    char idioma[100][21];
    printf("Numero de pessoas que participam desta conversa \n");
    scanf("%d", &k);
    if(k < 2 || k > 100){
        printf("Inicie o programa e defina corretamente o numero de pessoas\n");
        exit(1);
    }
    for(int i=0; i<k; i++){
        fflush(stdin);
        printf("Digite o idioma da %d. pessoa: ", i+1);
        gets(idioma[i]);
    }
    char comparado[21];
    strcpy(comparado, idioma[0]);
    int iguais = 0;
    //comparando o idioma de cada pessoa
    for(int i=0; i<k; i++){
        if(strcmp(comparado, idioma[i])==0) iguais++;
    }
    if(iguais==k){
        printf("idioma: %s \n", comparado);
    }else{
        printf("Idioma: ingles \n");
    }
}
