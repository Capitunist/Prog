#include <stdio.h>

int main(){
	unsigned int u0 = 0, u = 0, n = 0;

	do{
		u0 = u;
		u += ++n;
		printf("u = %u ",u);
		printf("u0 = %u ",u0);
		printf("n = %u\n\n",n);
	} while (u>u0);
	return 0;
}