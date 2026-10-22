#include <stdio.h>
#include <string.h>

int main(){

	int i = 2, j = 230, k = 12345, a = 0, b = 0;
	int * pi = &i;
	char * string = "String";
	char c = 'f';
	char tab[10] = "Spaghetti";
	char * ptab = &tab[0]; 

	printf("i: %d ",i);
	printf("j: %d ",j);
	printf("k: %d ",k);
	printf("c: %c\n",c);
	printf("String: %s\n", string);

	printf("tab: ");
	while (tab[a] != '\0'){
		printf("%c",tab[a]);
		a++;
	}
	printf("\n");

	printf("Pointeur i: %d\n",*pi);
	printf("Pointeur tab[0]: %c\n",*ptab);

	return 0;
}