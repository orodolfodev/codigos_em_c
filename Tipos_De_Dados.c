#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	char letra; //variáve do tipo char, cont;em caracteres
	int x ; //variável para número inteiro
	float salario; //variável do tipo float (real) contém casas decimais
	
	//Atribuindo valores para as variáveis
	letra = 'a';
	x = 10;
	salario = 3972.50;
	
	//Saída de dados ma tela
	printf("letra = %c \n", letra);
	printf("x = %d \n", x);
	printf("salario = %.2f \n", salario);
	system("pause");
	return (0);
}
