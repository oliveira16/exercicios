#include <stdio.h>

int main(void)
{
    char name[20];
    printf("qual e o seu nome ? "); 
    scanf("%s", &name);
    printf("ola,seu nome e %s\n",name);
    return 0;
}   