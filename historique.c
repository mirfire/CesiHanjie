/***
 *       ___         _                    _ _
 *      / __\___ ___(_) /\  /\__ _ _ __  (_(_) ___
 *     / /  / _ / __| |/ /_/ / _` | '_ \ | | |/ _ \
 *    / /__|  __\__ | / __  | (_| | | | || | |  __/
 *    \____/\___|___|_\/ /_/ \__,_|_| |__/ |_|\___|
 *                                     |__/
 * Projet codé Rockfire, MSRog et UF-Ryzen du centre Exia Arras
 */
#include "includes.h"

 // Affichage de historique.txt
void AfficherHistorique()
{
    char caractereactuel;
    FILE* fichier = NULL ;
    fichier = fopen("historique.txt" , "r+"); // ouverture du fichier
    if (fichier != NULL)
    {
        do {
            caractereactuel = fgetc (fichier) ;// lecture des caracteres
            printf("%c" , caractereactuel); // Affichage !
        }
        while (caractereactuel != EOF); // Fin de fichier
        {
            fclose(fichier);
        }
    }
}

int EditerHistorique (DonneesPartie* Partie){ // a éditer pour avoir la
    FILE* fichier=NULL ;
    fichier=fopen("historique.txt", "a");

    struct tm* gmtime (const time_t *temps);
    time_t mktime (struct tm *structure);
    time_t temps;
    struct tm date;
    time(&temps);
    date=*gmtime(&temps);

    if(fichier!= NULL){
        fprintf(fichier, "%d/%d/%d;%d:%d:%d;%s;1;%d",date.tm_mday, date.tm_mon+1,1900+date.tm_year, date.tm_hour+1 , date.tm_min, date.tm_sec, Partie->nomjoueur, Partie->difficulte);
        fclose(fichier);
    }
    return 0;
}

void HistoriqueCroissant() {}
void HistoriqueDecroissant() {}
