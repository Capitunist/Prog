#include <stdio.h>
#include <windows.h>
#include <math.h>

void main(){
	int l1[] = {1,2,3,4};
	int xcar;
	printf("%d\n",l1[1]);
	for (int i = 0; i <= 100; i++){
		xcar = i*i;
		printf("Le nombre %d au carre est %d.\n",i,xcar);
		Sleep(1000);
	}
	printf("Fin du programme.\n");
}