#include <stdio.h>

int main () {
	//mover torre 5 casas para a direita
int torre, bispo, rainha, cavalo, movimentocavalo = 1;
int option;


printf("Qual peça deseja mover?\n");
        printf("1. Torre.\n");
        printf("2. Rainha. \n");
        printf("3. Bispo\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);

switch (option) {


case 1: for (torre = 0; torre < 5; torre++){
	printf("Direita\n"); //imprime a direção do movimento
	
}	
    break;
	//mover rainha 8 casas para esquerda
case 2:	while (rainha < 8)
	{
		printf("Esquerda\n");// imprime a direção da rainha
		rainha++;
	}
	break;
	//movendo bispo
case 3:	do 
	{
		printf("Cima\n");
		printf("Direita\n");
		bispo++;
	} while (bispo < 6);
	break;
	
	//movendo cavalo
	
case 4:	while (movimentocavalo--)
	{
		for (cavalo = 0; cavalo < 2; cavalo++) {
			printf("Baixo\n"); // imprime cima duas vezes
		}
		printf("Esquerda\n"); // imprime direita uma vez
		
		printf("\n");
	}
    break;
//saindo
case 5:
printf("saindo..");	
	break;
	
}
	
	
	return 0;
	
}