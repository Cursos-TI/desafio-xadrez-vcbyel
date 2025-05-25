#include <stdio.h>

// void eu defino a formula a ser executada mesmo sem ela apresentar valor de execução!
void movertorre(int casa) { //definindo movimento
	if (casa > 0) {
		printf("Direita\n");//printando o lado da casa
		movertorre(casa - 1);
	}
	printf("\n");
}

void moverrainha(int casa) { //definindo movimento
   if (casa > 0) {
   
	printf("Esquerda\n");//printando o lado da casa
	moverrainha(casa - 1);
}
printf("\n");
}

void moverbispo(int casa) {
   if (casa > 0) {
   
    printf("Cima\n");//printando o lado da casa
	printf("Direita\n");//printando o lado da casa
	moverbispo(casa - 1);
}
printf("\n");
}


int main () {
	int cavalo, option, movimentocavalo = 1;// declarando a variaveis do cavalo.


printf("Qual peça deseja mover?\n");
        printf("1. Torre.\n");
        printf("2. Rainha. \n");
        printf("3. Bispo\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
        
        switch(option) {
	
case 1: movertorre(5);//mover torre 5 casas para a direita 	
//aqui eu declaro o valor, não no void, é aqui!!
break;
case 2: moverrainha(8); //mover rainha 8 casas para esquerda
break;
case 3: moverbispo(5); //movendo bispo
break;	
case 4: while (movimentocavalo--)
	{
		for (cavalo = 0; cavalo < 2; cavalo++) {
			printf("Baixo\n"); // imprime cima duas vezes
		}
		printf("Esquerda\n"); // imprime direita uma vez
		
		printf("\n");
	}
	break;
case 5:
printf("saindo..");	
	break;
}
	return 0;
	
}