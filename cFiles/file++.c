#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	FILE * fichier;
	char nom[20];
	char temp[255];
	/* char * name = ".txt"; trouver moyen d'ajouter du texte AVANT le .txt*/
	int choix, fin = 0;

	while(!fin){
		printf("Voulez-vous:\n1] Creer un fichier\n2] Ecrire dans un fichier\n3] Lire un fichier\n4] Verifier existence d'un fichier\n");
		scanf("%d",&choix);

		switch(choix){
			case 1:
				printf("Quel nom voulez-vous donner ?\n"); /*IT WORKS*/
				scanf("%s",nom);
				fichier = fopen(nom, "wt");
				/* ECRITURE */
				if (fichier == 0){
					printf("Probleme a l'ouverture.\n");
				} else {
					fclose(fichier);
				}
				break;
			case 2:
				printf("Quel fichier modifier ?\n");
				scanf("%s",nom);
				fichier = fopen(nom,"at");
				/* AJOUTER */
				if (fichier == 0){
					printf("Probleme a l'ouverture\n");
				} else {
					printf("Que mettre dans le fichier %s ?\n",nom);
					scanf("%s",temp);
					fprintf(fichier, "%s\n", temp);
					fclose(fichier);
				}
				break;
			case 3:
				printf("Quel fichier lire ?\n"); /*IT WORKS*/
				scanf("%s",nom);
				fichier = fopen(nom,"rt"); 
				/* LECTURE */
				if (fichier == 0){
					printf("Probleme a l'ouverture\n");
				} else {
					fscanf(fichier, "%s", temp);
					while(!feof(fichier)){
						printf("%s", temp);
						fscanf(fichier, "%s", temp);
					}
					printf("\n");
					fclose(fichier);
				}
				break;
			case 4:
				printf("Quel est le nom du fichier ?\n"); /*IT WORKS*/
				scanf("%s",nom);
				fichier = fopen(nom,"rt");
				/* LECTURE */
				if (fichier == 0){
					printf("Fichier inexistant\n");
				} else {
					printf("Fichier existant\n");
				}
				break;
			default:
				printf("ERREUR: Valeur entre 1 et 4 attendue\n");
		}
		printf("Quitter ? [1-Oui / 0-Non]\n");
		scanf("%d",&fin);
	}
	return 0;
}