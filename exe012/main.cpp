// este comando e para incluir a biblioteca padrao para funcoes de entrada e saida do computador
// "std" significa standard que traduzido em portugues e "padrao" 
// "i" significa input quqe traduzido em portugues e "entrada"
// "o" significa output que traduzido em portugues e "saida"

#include <stdio.h>

// "int" significa integer que traduzido em portugues e "inteiro". numeros inteiros sao numeros de menos infinito ate mais infinito, exemplo: (...-1,0,1...)
// "main" e o nome da funcao que traduzido em portugues significa "principal"
// "void" significa que esta funcao nao recebe parametros e em portugues e o mesmo que "vazio"
int main(void)
{
    // toda funcao precisa ter um escopo para escrever comandos,
    // apos escrever o tipo que a funcao retorna, o nome da funcao e,
    // os parametros entre parenteses e necessario abrir chaves.
    // tudo que esta entre chaves e o escopo da funcao.
    
    // "printf" e uma funcao para escrever mensagens na tela
    // para escrever mensagens e necessario estar entre aspas duplas 
    printf("executando funcao principal");

    // todo comando dentro do escopo da funcao deve terminar com ponto e virgula ";"

    return 0;
}