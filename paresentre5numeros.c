#include <stdio.h>

int main () {
	
	int valor, i, pares=0;
	
	for (i=1; i <= 5; i++){
		scanf("%i", &valor);
		if (valor % 2 == 0){
			pares++;
		}
	}
	printf("%i valores pares\n", pares);
	
	return 0;
}