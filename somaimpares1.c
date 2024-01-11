#include <stdio.h>

int main(){
	
	int X, Y, i, soma=0;
	
	scanf("%i", &X);
	scanf("%i", &Y);
	for(i=X-1; i > Y; i--){
		if(i % 2 != 0){
			soma+=i;
		}
	}
	printf("%i\n", soma);
	
	return 0;
}