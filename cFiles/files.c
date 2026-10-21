#include <stdio.h>

int main(){

	FILE * fichier;
	char nom[20] = "fichier.txt";
	char temp[255];

	fichier = fopen(nom, "wt");
	/* ECRITURE */
	if (fichier == 0){
		printf("Problème à l'ouverture.\n");
	} else {
		fprintf(fichier, "%s\n", temp);
		fclose(fichier);
	}
	return 0;
}