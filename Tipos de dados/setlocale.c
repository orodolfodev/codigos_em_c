#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    // Permite usar acentos
    setlocale(LC_ALL, "Portuguese");
    printf("Olá! \n ");

    int a = 50;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);
}