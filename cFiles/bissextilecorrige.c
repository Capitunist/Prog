#include <stdio.h>

int estBissextile(int annee){
	return ((!(annee % 4) && (annee % 100)) || annee % 400);
}

int main(){
	int annee;
	scanf("%d",&annee);
	printf("%d",estBissextile)
	/*a continuer*/
}