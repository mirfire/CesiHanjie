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

    if(fichier!= NULL){
        fprintf(fichier, "ceci est un test pour %s", Partie->nomjoueur);
        fclose(fichier);
    }
}

void HistoriqueCroissant() {}
void HistoriqueDecroissant() {}
