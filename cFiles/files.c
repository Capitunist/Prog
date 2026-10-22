#include <stdio.h>

int main(){

	FILE * fichier;
	char nom[20] = "fichier.txt";

	fichier = fopen(nom, "wt");

	/* ECRITURE */
	if (fichier == 0){
		printf("Probleme a l'ouverture.\n");
	} else {
		fprintf(fichier, "%s\n", nom);
		fclose(fichier);
	}
	return 0;
}