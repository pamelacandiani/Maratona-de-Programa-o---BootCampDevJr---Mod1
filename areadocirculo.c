#include <stdio.h>

int main () {
	
	double n = 3.14159, raio, A;
	
	scanf("%lf", &raio);
	A = raio * raio * n;
	printf("A=%.4lf\n", A);
	
	return 0;
}