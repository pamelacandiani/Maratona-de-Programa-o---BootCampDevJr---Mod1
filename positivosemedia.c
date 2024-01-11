#include <stdio.h>

int main (){
	
	double valor, media;
	int i, positivos=0;
	
	for (i=1; i <= 6; i++)	{
		scanf("%lf", &valor);	
		if(valor > 0){
			positivos++;
			media+= valor;
		}
	}
	printf("%i valores positivos\n", positivos);
	printf("%.1lf\n", media/positivos);
	
	return 0;
}