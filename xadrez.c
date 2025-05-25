#include <stdio.h>

int main () {
	//mover torre 5 casas para a direita
int torre, bispo, rainha;

for (torre = 0; torre < 5; torre++){
	printf("Direita\n"); //imprime a direção do movimento
}	
	
	//mover rainha 8 casas para esquerda
	while (rainha < 8)
	{
		printf("Esquerda\n");// imprime a direção da rainha
		rainha++;
	}
	
	
	do 
	{
		printf("Cima\n");
		printf("Direita\n");
		bispo++;
	} while (bispo < 6);
	
	return 0;
	
}