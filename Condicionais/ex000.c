#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int idade;

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    if (idade < 17)
    {
        printf("Menor de idade");
    }
    else if (idade == 18)
    {
        printf("Precisa se alistar");
    }
    else
    {
        printf("Maior de idade");
    }

    return 0;
}
