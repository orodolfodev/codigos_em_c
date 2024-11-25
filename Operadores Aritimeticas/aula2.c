#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // Definindo variáveis

    int a = 6, b = 4;

    // Soma
    printf("\nA soma dos resultados %d e %d = %d", a, b, a + b);

    // Subtração
    printf("\nA subtracao dos resultados %d e %d = %d", a, b, a - b);

    // Multiplicação
    printf("\nA multiplicacao dos resultados %d e %d = %d", a, b, a * b);

    // Divisão
    printf("\nA divisao dos resultados %d e %d = %d", a, b, a / b);

    // Resto da divisão
    printf("\nO resto da divisao entre %d e %d = %d", a, b, a % b);

    // Valor absoluto
    printf("\nO valor absoluto de -3 = %d", abs(-3));

    setlocale(LC_ALL, "");

    printf("\nOlá!");
    system("pause");
}