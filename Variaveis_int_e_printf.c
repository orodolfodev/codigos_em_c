#include <stdio.h> // biblioteca padr�o para comandos i/o
#include <stdlib.h> //necess�rio para o system ("pause")
int main (void)
{
	int n1= 10;
	
	printf("valor de n1 = %d \n" ,n1);
	
	n1 = 50; // atribuindo o valor 50 para n1
	printf("valor de n1 = %d \n" ,n1);
	
	
	
	system("pause"); //pausa da tela - somente para Windows
	return (0); //valor de retorno da fun��o main
}
