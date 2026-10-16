#include <stdio.h>
#include <windows.h>

int main(){
	int x;
	int y;

	printf("Donnez deux valeurs a comparer.\n\n");

	/* on prend une première valeur */
	printf("Valeur 1 -> ");
	scanf("%d",&x);


	/* on en prend une deuxième */
	printf("Valeur 2 -> ");
	scanf("%d",&y);
	printf("\n\n");

	printf("Valeur 1: %d\n",x);
	printf("Valeur 2: %d\n\n",y);

	if (x == y){
		printf("Oui, %d est egal a %d y'a quoi maintenant ?\n",x,y);
	} else {
		printf("Bah nan c'est faux quoi.\n");
	}
	return 0;
}