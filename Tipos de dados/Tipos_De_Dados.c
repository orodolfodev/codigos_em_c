#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	char letra; //vari�ve do tipo char, cont;em caracteres
	int x ; //vari�vel para n�mero inteiro
	float salario; //vari�vel do tipo float (real) cont�m casas decimais
	
	//Atribuindo valores para as vari�veis
	letra = 'a';
	x = 10;
	salario = 3972.50;
	
	//Sa�da de dados ma tela
	printf("letra = %c \n", letra);
	printf("x = %d \n", x);
	printf("salario = %.2f \n", salario);
	system("pause");
	return (0);
}
