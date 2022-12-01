#include <stdio.h>
#include "condidat.h"
#include "utilisateur.h"
#include <string.h>

int ajout_cond(char *filename, char id[],int idl)
{
	int r=0;
	utilisateur u;	
	condidat c ;
	FILE *f,*f2;
	char d[15],i[10];
	sprintf(i,"%d",idl);
	strcpy(d,i);
	strcat(d,".txt");
	f=fopen(d,"a");
	f2=fopen(filename,"r");
	if(f!=NULL)
	{ 
		while(fscanf(f2," %s %s %d %d %d %s %s %s %d %d %s %s %s\n",u.nom_user,u.prenom_user,&u.date.jour,&u.date.mois,&u.date.annee,u.cin_user,u.role_user,u.genre_user,&u.num_bv_user, &u.vote_user,u.nationalite_obs,u.app_politique_obs,u.profession_obs)!=EOF) 
	{ 	
	if (strcmp(id, u.cin_user)==0)
		{ 
		c.id_liste=idl;
		fprintf(f,"%s %s %s %d\n",u.nom_user,u.prenom_user,u.cin_user,c.id_liste);
		r==1;
		}
	
}
	fclose(f2);
	fclose(f);
	
	}	
	return r;
}

int suprim_cond(char cin[], int idl)
{
 FILE *f,*f1;
 condidat c;
int r=0;
 char d[15];
 sprintf(d,"%d",idl);
 strcat(d,".txt");
 f=fopen(d,"r");
 f1=fopen("nouv.txt","a");
 if( f!=NULL){
 while (fscanf(f," %s %s %s %d\n",c.nom, c.prenom, c.id_condidat, &c.id_liste)!=EOF)
{
 if(strcmp(cin, c.id_condidat)!=0)
{
 fprintf(f1,"%s %s %s %d\n",c.nom, c.prenom, c.id_condidat, c.id_liste);
}
else {r=1;}

}

}
fclose(f1);
fclose(f);
remove(d);
rename("nouv.txt",d);
return r;
}
