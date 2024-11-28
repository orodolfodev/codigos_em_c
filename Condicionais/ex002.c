#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A e maior que b \n ");
    }
    else if (a < b)
    {
        printf("A e menor que b \n \n");
    }
    else
    {
        printf("A e B sao iguais");
    }

    return 0;
}