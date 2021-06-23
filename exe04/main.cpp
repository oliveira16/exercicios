#include <stdio.h>

void say_hello(char name[100])
{
    printf("hello %s\n", name);
    return;
} 

int main(void)
{
    say_hello("jessica");
    return 0;
}