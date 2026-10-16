#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	/*Potite calculatrice en C*/
	int a, b, calc, res, err = 1;
	while(err){
		printf("Entrez la premiere valeur a calculer: ");
		scanf("%d",&a);
		printf("Entrez la deuxieme valeur a calculer: ");
		scanf("%d",&b);
		printf("Quel calcul ?\n[1] Addition\n[2] Soustraction\n[3] Multiplication\n[4] Division\n");
		scanf("%d",&calc);
		switch(calc){
			case 1:
				res = a + b;
				printf("%d + %d = %d\n",a,b,res);
				err = 0;
				break;
			case 2:
				res = a - b;
				printf("%d - %d = %d\n",a,b,res);
				err = 0;
				break;
			case 3:
				res = a * b;
				printf("%d * %d = %d\n",a,b,res);
				err = 0;
				break;
			case 4:
				if (b == 0) {
					printf("Valeur b ne doit pas etre egale a 0.\n");
					err = 1;
					break;
				}
				res = a / b;
				err = 0;
				printf("%d / %d = %d\n",a,b,res);
				break;
			default:
				printf("Veuillez inserer un entier entre 1 et 4 afin de choisir le moyen de calculer.\n");
				break;
		}
	}
	return 0;
}