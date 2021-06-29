#include <stdio.h>

// esta funcao recebe um parametro do tipo char de no maximo 500 caracteres
void diga_ola(char nome[500] )
{
    //esta funcao serve para mostrar textos na tela
    printf("ola bem vinda %s!",nome);

}

int main(void)
{
    char teclado[500];
    printf("qual e o seu nome? ");
    scanf("%s",teclado); // esta funcao serve para ler as entradas do teclado
    diga_ola(teclado);
    return 0;
}