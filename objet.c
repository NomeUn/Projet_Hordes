#include "objet.h"

objet_t * recup_fichier(){
  FILE * fic=NULL;
	objet_t tab[nb_obj]; //Tableau qui stockera les valeurs contenues dans le fichier
	int i=0;
	if(fopen("liste_objet.txt","r")==NULL){ //Test pour savoir si le fichier est présent
		printf("Erreur lors de l'ouverture du fichier liste_objet\n");
		return 0;
	}
	else fic=fopen("liste_objet.txt","r");
	fscanf(fic,"%s:%s:%s:%i",tab[i].nom_obj,tab[i].categorie,tab[i].description,&tab[i].influ_pa);
	while(!feof(fic)){
		i++;
		fscanf(fic,"%s:%s:%s:%i",tab[i].nom_obj,tab[i].categorie,tab[i].description,&tab[i].influ_pa);
	}
	fclose(fic);
	return tab;
}
