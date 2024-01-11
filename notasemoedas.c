#include <stdio.h>

int main() {
	
	double valor;
	int notas[6] = {100, 50, 20, 10, 5, 2};
	double moedas[6] = {1.0, 0.5, 0.25, 0.1, 0.05, 0.01};
	
	scanf("%lf", &valor);
	
	// Notas
	printf("NOTAS:\n");
	for (int i=0; i < 6; i++){
		int quantidadeNotas = valor / notas [i];
		valor -= quantidadeNotas * notas [i];
		printf("%i nota(s) de R$ %.2lf\n", quantidadeNotas, (double)notas[i]);
	}
	valor+= 0.0001;
	printf("MOEDAS:\n");
	// Moedas
	for (int i=0; i < 6; i++){
		int quantidadeMoedas = valor / moedas [i];
		valor -= quantidadeMoedas * moedas [i];
		printf("%i moeda(s) de R$ %.2lf\n", quantidadeMoedas, moedas[i]);
	}
	
    return 0;
}
