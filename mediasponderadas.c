#include <stdio.h>

int main (){
	
	int N, i;
	double valor1, valor2, valor3;
	
	scanf("%i", &N);
	for (i=1; i <= N; i++){
		scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
		double media = valor1 * 2 + valor2 * 3 + valor3 * 5;
		printf("%.1lf\n", media/10);
	}
	
	return 0;
}