#include <stdio.h> //biblioteca padrão

int main()
{
    int idade, * p;
    idade = 18;
    p = &idade;

    *p = 22;
    printf("ola mundo",p);
    printf("O endereço da variável é: %p\n", p);
    return 0;
}

