#include <stdio.h>

/* Déclaration fonctions */
int divisible_100();
int divisible_4();
int divisible_400();

/* Fonction principale */
int main(){
	unsigned int annee = 1;
	unsigned int stop = 0;

	do{
		printf("Selectionnez une annee: ");
		scanf("%u",&annee);

		if(stop == annee){
			printf("Fin de programme.");
		} else if((!divisible_100(annee) && divisible_4(annee)) || divisible_400(annee)) {
			printf("%u est une annee bissextile.\n",annee);
		} else {
			printf("%u n'est pas une annee bissextile.\n",annee);
		}
	} while (annee != stop);
	return 0;
}

/* Sous-fonctions */
int divisible_100(int annee){
	unsigned int res = annee % 100;
	return(res == 0);
}

int divisible_4(int annee){
	unsigned int res = annee % 4;
	return(res == 0);
}

int divisible_400(int annee){
	unsigned int res = annee % 400;
	return(res == 0);
}