#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // Definindo vari�veis

    int a = 6, b = 4;

    // Soma
    printf("\nA soma dos resultados %d e %d = %d", a, b, a + b);

    // Subtra��o
    printf("\nA subtracao dos resultados %d e %d = %d", a, b, a - b);

    // Multiplica��o
    printf("\nA multiplicacao dos resultados %d e %d = %d", a, b, a * b);

    // Divis�o
    printf("\nA divisao dos resultados %d e %d = %d", a, b, a / b);

    // Resto da divis�o
    printf("\nO resto da divisao entre %d e %d = %d", a, b, a % b);

    // Valor absoluto
    printf("\nO valor absoluto de -3 = %d", abs(-3));

    setlocale(LC_ALL, "");

    printf("\nOl�!");
    system("pause");
}