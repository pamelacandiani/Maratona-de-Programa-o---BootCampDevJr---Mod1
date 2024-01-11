#include <stdio.h>

int main (){
	
	int M, N, i, menor, maior;

	while (1){
		int soma=0;
		scanf("%d %d", &M, &N);
		if(M <= 0 || N <= 0){
			break;
		}
		
		if(M < N){
			maior = N;
			menor = M;
		}
		else{
			maior = M;
			menor = N;
		}
		for(i=menor; i <= maior; i++){
			printf("%i ", i);
			soma+=i;
		}	
		printf("Sum=%i\n", soma);	
	}
	
	return 0;
}
