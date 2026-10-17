#include <stdio.h>

int main(){
	int gent = 0, mech = 0, fier = 0, loy = 0, det = 0, rep = 0, err = 1;

	printf("Bonjour !\nCeci est un petit test de personnalite concocte par mes soins, il teste plusieurs aspects parmi lesquels:\n");
	printf("1) Gentillesse\n2) Mechancete\n3) Fierte\n4) Loyaute\n5) Determination\n");
	printf("Au sein de ce test, une vingtaine de questions vous sera posees, au bout de celui-ci, un bilan sera effectue.\n");

	while (err){
		printf("Sur une echelle de 1 a 10, comment vous sentez-vous ?\n");
		scanf("%d",&rep);
		switch(rep){
			case 0:
			case 1:
			case 2:
				det-=2;
				err--;
				break;
			case 3:
			case 4:
				det--;
				err--;
				break;
			case 5:
				break;
			case 6:
			case 7:
				det++;
				err--;
				break;
			case 8:
			case 9:
			case 10:
				det+=2;
				err--;
				break;
			default:
				printf("Erreur: veuillez mettre un chiffre entre 1 et 10.\n\n");
		}
	}
	err++;
	printf("Tres bien alors, c'est parti pour le questionnaire !\n\n");
	while(err){
		printf("[Q-1] Quelle couleur vous definirait le plus ?\n1- Vert\n2- Bleu\n3- Rouge\n4- Violet\n");
		scanf("%d",&rep);
		switch(rep){
			case 1:
				gent++;
				err--;
				break;
			case 2:
				loy++;
				err--;
				break;
			case 3:
				mech++;
				det++;
				err--;
				break;
			case 4:
				fier++;
				err--;
				break;
			default:
				printf("Erreur: veuillez inserer un chiffre entre 1 et 4.\n\n");
		}
	}
	err++;
	printf("Stats:\nGentillesse: %d\nMechancete: %d\nFierte: %d\nLoyaute: %d\nDetermination: %d\n",gent,mech,fier,loy,det);
	return 0;
}