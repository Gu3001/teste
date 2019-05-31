#include <stdio.h> //biblioteca padrão

int main()
{
    int idade, * p;
    idade = 18;
    p = &idade;
    printf("ola mundo\n");
    printf("O endereço da variável é %p\n", p);
    return 0;
}

