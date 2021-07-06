#include <stdio.h>
void my_func(char text[50])
{
    printf("%s\n",text);


}

int sum(int a,int b)
{
    return a+b;
}
int square(int a)
{
    return a*a;


}




int main(void)
{
    // para declarar uma variavel e ncessario informar o tipo da variavel e um nome
    int result;
    result = sum(3,100);
    printf("%d\n",result);
    my_func("eu fui na escola hoje");
     result = square(result);
     printf("%d\n",result);
    return 0;
    

}
