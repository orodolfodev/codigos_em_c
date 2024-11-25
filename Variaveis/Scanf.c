#include <stdio.h>
int main(void)
{
	char conceito; // vari�vel do tipo char armazena um �nico caracter na mem�ria
	float nota;
	int numero;

	printf("Informe o conceito do aluno: ");
	scanf("%c", &conceito);

	printf("Digite a nota do aluno: ");
	scanf("%f", &nota);

	printf("Digite o numero de matricula do aluno: ");
	scanf("%d", &numero);

	printf("Conceito: %c\n", conceito);
	printf("Nota: %.1f\n ", nota); // Formatando a sa�da da nota com uma casa decimal
	printf("\nMatricula: %d\n", numero);

	return (0);
}
