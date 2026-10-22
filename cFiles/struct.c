#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nomFic[20] = "naissance.bin";
	char temp[255];

	FILE * f;
	f = fopen(nomFic,"rb");
	/* LECTURE */
	if (f == 0){
		printf("Probleme a l'ouverture\n");
	} else {
		fread(&naiss, sizeof(naissance_t),1,f);
	while(!feof(f)){
		printf("%s %d\n", naiss.nom, naiss.annee);
		fread(&naiss, sizeof(naissance_t),1,f); /*utiliser string compare (voir s'il renvoie 0 ou pas)*/
	}
	printf("\n");
	fclose(f);
	}
	return 0;
}