#include <stdlib.h>
#include <stdio.h>
int main(){
	char name[10] = "TESTE";
	char valeur[10] = "salut";
	char commande[20];
	sprintf(commande,"export %s=%s",name,name,valeur);
	system(commande);
	return 0;
	}
