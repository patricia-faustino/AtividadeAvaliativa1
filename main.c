#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float salarioLiquido, reajusteDoSalario;
	#define REAJUSTESALARIAL 0.075
	#define ABONOSALARIAL 150
	#define SALARIOCOMABONO 1750
	
	printf(" AURORA FINANCIAMENTOS ");
	printf("\nProprietária: Patricia Faustino de Brito de Jesus");
	printf("\nRA: 20124091-5");
	printf("\nCÁLCULO REAJUSTE SALARIAL");
	printf("\nSALARIO ATUAL: ");
	scanf("%f", &salarioLiquido);

	if(salarioLiquido <= SALARIOCOMABONO){
		reajusteDoSalario = (salarioLiquido * (1 + REAJUSTESALARIAL)) + ABONOSALARIAL;
		printf("\nSALÁRIO COM AJUSTE: R$%.2f", reajusteDoSalario);
	} else{
		reajusteDoSalario = salarioLiquido * (1 + REAJUSTESALARIAL);
		printf("\nSALARIO COM AJUSTE: R$%.2f", reajusteDoSalario);
	}
	return 0;
}
