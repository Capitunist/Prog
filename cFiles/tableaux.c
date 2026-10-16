#include <stdio.h> /*On déclare des bibliothèques importantes pour notre programme*/
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50 /* On définit MAX comme étant une constante égale à 50
				  Point besoin de point virgule, le #define étant une directive donnée au préprocesseur */

void calculHistogramme(int t[], int n, int h[], int m){
	/* Calcule l’histogramme h sur m classes de l’échantillon T de n valeurs.
	On pensera à utiliser les fonctions définies précédemment */
	int indMin = getIndMinTableaux(t, n);
	int indMax = getIndMinTableaux(t, n);
	int min = t[indMin];
	int max = t[indMax];
	
}

double calculMoyenne(int t[], int n){
	double moy;
	int i;
	for (i = 0; i < n; i++){
		moy += t[i];
	}
	moy /= n;
	return moy;
}

double calculEcartType(int t[], int n){
	double res = 0.0;
	double ecart;
	double moy = calculMoyenne(t, n);
	int i;
	for (i = 0; i < n; i++){
		ecart = t[i]-moy;
		res += ecart*ecart;
		res += ecart;
	}
	return sqrt(res / (double) n);
}

int getIndMinTableaux(int t[], int n){
	/*Renvoie l'indice de la valeur minimale du tableau*/
	int min = t[0]; /* Première case du tableau */
	int indMin = 0;
	int i;
	for (i = 1; i < n; i++){
		if(t[i] < min){
			min = t[i];
			indMin = i;
		}
	}
	return indMin;
}

int getIndMaxTableau(int t[], int n){
	/*Renvoie l'indice de la valeur maximale du tableau*/
	int max = t[0]; /*Première case du tableau*/
	int indMax = 0;
	int i;
	for (i = 1; i < n; i++){
		if(t[i] > max){
			max = t[i];
			indMax = i;
		}
	}
	return indMax;
}

void remplitTableauAlea(int t[], int n){
	/*Remplit les n premières valeurs de t[] avec des valeurs alétatoires*/
	int i;
	srand(time(0));
	for (i = 0; i < n; i++){
		t[i] = rand() % 101;
	}
}

void initTableau(int t[], int n){
	/*Initialise le tableau en y mettant une valeur initiale de zéro*/
	int i;
	for (i = 0; i < n; i++){
		t[i] = 0;
	}
}

void afficheTableau(int t[], int n){
	/*Affiche le tableau à l'écran en vertical*/
	int i;
	for (i = 0; i < n; i++){
		printf("[ %d ]	", i);
		printf("%d\n",t[i]);
	}
	printf("\n");
}

int main(){
	int t[MAX];
	int h[MAX];
	int n, m;
	do{
		printf("Donner la taille du tableau: ");
		scanf("%d",&n);
		printf("\n");
		printf("Donner le nombre de classes: ");
		scanf("%d",&m);
		printf("\n");

		if ((n > MAX || n < 1)){
			printf("Veuillez entrer une valeur entre 1 et 50 inclus.\n\n");
		}
		if (m < 2 || m > MAX){
			printf("Le nombre de classes doit être entre 2 et 50 inclus.\n\n");
		}
		if (m > n){
			printf("Le nombre de classes ne peut être supérieur au tableau de valeurs.\n\n")
		}

	} while ((((n > MAX || n < 1) || (m > MAX || m < 2))) || (m > n));
	initTableau(t, n);
	remplitTableauAlea(t, n);
	afficheTableau(t, n);
	printf("-----------------------------------------\n");
	printf("Indice max: %d\n", getIndMaxTableau(t, n));
	printf("Indice min: %d\n", getIndMinTableaux(t, n));
	printf("Moyenne: %6.2f\n", calculMoyenne(t, n));
	printf("Ecart type: %6.2f\n", calculEcartType(t, n));
	printf("-----------------------------------------\n");
	return 0;
}