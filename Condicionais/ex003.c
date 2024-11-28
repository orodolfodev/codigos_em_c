#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a, b;

    printf("Digite o valor: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("O valor e par");
    }
    else
    {
        printf("O valor e impar");
    }

    return 0;
}