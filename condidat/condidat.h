#include<string.h>
#include <stdio.h>
typedef struct 
{
	char nom [20];
	char prenom[20];
	char id_condidat[10];
	int id_liste;
	


} condidat;
int ajout_cond(char *filename, char id[],int idl);
int suprim_cond(char cin[], int idl);
condidat chercher(char * filename, char id);


