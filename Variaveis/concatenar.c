#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    // Definindo uma variável
    int a = 5, b;

    // Imprimindo a variável "a"
    printf("%d", a);

    // Concatenando
    printf("\nO valor de var é: %d", a);

    // Mudando o valor de a
    a = 15;
    printf("\nO valor de var é: %d", a);
    // Lendo valores
    scanf("%d", &b);
    printf("O valor da variável b é: %d", b);

    // Pular linha
    printf("\n");

    // Imprimindo
    printf("Uhuu");

    // Pausando
    system("pause");
}
