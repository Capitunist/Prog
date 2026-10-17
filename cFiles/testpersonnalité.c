#include <stdio.h>

int main(){
	int gent = 0, mech = 0, fier = 0, loy = 0, det = 0, rep = 0;
	printf("Bonjour !\nCeci est un petit test de personnalite concocte par mes soins, il teste plusieurs aspects:\n");
	printf("1) Gentillesse\n2) Mechancete\n3) Fierte\n4) Loyaute\n5) Determination\n");
	printf("Au sein de ce test, une vingtaine de questions vous sera posees, au bout de celui-ci, un bilan sera effectue.\n");
	printf("Sur une echelle de 1 a 10, comment vous sentez-vous ?\n");
	scanf("%d",&rep);
	switch(rep){
		case 0: 
		case 1: 
		case 2: 
			det-=2;
			break;
		case 3:
		case 4:
			det--;
			break;
		case 5:
			break;
		case 6:
		case 7: 
			det++;
			break;
		case 8: 
		case 9:
		case 10:
			det+=2;
			break;
		default:
			printf("Error: Not a number between 0 and 10.");
	}
	printf("det: %d", det);
	return 0;
}