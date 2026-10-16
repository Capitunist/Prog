#include <stdio.h>

int pgcdRec(int a,int b){
	int i = 0;
	if (b == 0) return a;
	int i++;
	return pgcdRec(b,a%b),i;
}

int pgcd(int a,int b){
	int r, i = 0;
	do{
		r = a % b;
		a = b;
		b = r;
		int i++;
	}while(r != 0);
	return a,i;
}

int main(){
	int a, b;
	scanf("%d%d",&a,&b);
	/*pgcd(a, b);*/
	pgcdRec(a, b);
	/*printf("Le pgcd de %d sur %d est %d.",a,b,pgcd(a,b));*/
	printf("Le pgcd récursif de %d sur %d est %d. Il y a eu %d itérations.",a,b,pgcdRec(a,b),i);
	return 0;
}