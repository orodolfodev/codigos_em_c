#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a, b, soma;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);
    soma = a + b;

    if (soma >= 10)
    {
        printf("Soma maior ou igual a 10");
    }

    else
    {
        printf("Soma menor que 10");
    }

    return 0;
}