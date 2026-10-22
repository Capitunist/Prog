#include <stdio.h>

int main(){

	FILE * fichier;
	char nom[20] = "fichier.txt";
	char temp[255];

	fichier = fopen(nom,"rt"); 

	/* LECTURE */
	if (fichier == 0){
		printf("Probleme a l'ouverture");
	} else {
		fscanf(fichier, "%s", temp);
		while(!feof(fichier)){
			printf("%s", temp);
			fscanf(fichier, "%s", temp);
		}
		fclose(fichier);
	}
	return 0;
}