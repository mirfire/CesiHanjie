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
#define TAILLE_MAX 100

 // Affichage de historique.txt
void AfficherHistorique() {
    char caractereactuel;
    FILE* fichier = NULL ;
    fichier = fopen("historique.bin" , "r+"); // Ouverture du fichier
    if (fichier != NULL) {
    do {
    caractereactuel = fgetc (fichier) ;// Lecture des caracteres
    printf("%c" , caractereactuel); // Affichage !
    }
    while (caractereactuel != EOF); // Fin de fichier
    fclose(fichier);
    }
}


int EditerHistorique(DonneesPartie* Partie){ // Fonction qui va enregistrer les informations relative aux joueurs quand il a fini de jouer
    FILE* fichier=NULL ;
    fichier=fopen("historique.bin", "a"); // Ouverture du fichier historique.bin

    struct tm* gmtime (const time_t *temps);
    time_t mktime (struct tm *structure);
    time_t temps;
    struct tm date;
    time(&temps); // Utilise la bibliothèqie time.h
    date=*gmtime(&temps);

    if(fichier!= NULL){ // Test si le fichier est bien ouvert
        fprintf(fichier, "%d/%d/%d;%d:%d:%d;%s;1;%d",date.tm_mday, date.tm_mon+1,1900+date.tm_year, date.tm_hour+1 , date.tm_min, date.tm_sec, Partie->nomjoueur, Partie->difficulte); //Ecris dans le fichier dans le fomat suivant JJ/MM/AA;HH:MM:SS;"NomJoueur";"JeuxChoisi";"Difficulte";"tempsPourFinirJeux(HH:MM:SS)"
        fclose(fichier); // Ferme le fichier
    }
    return 0;
}

int HistoriqueVersTableau() {
    int i = 0 ; // Compteur
    FILE* fichier = NULL;
    fichier = fopen("historique.bin","r"); // Ouvre le fichier historique.bin
    char tabsave [5] [TAILLE_MAX]; // Tableau à 2 dimentions qui permetra de mettre la contenu d'un fichier dans un tableau

    if(fichier != NULL) // Test pour voir si je fichier est bien ouvert
        printf("Sauvegarde des parties récentes :\n");
    while (fgets (tabsave [i] , TAILLE_MAX , fichier) != NULL ) {i++;} // Copie du fichier.bin dans le tableau.
    return 0;
}

void HistoriqueCroissant() {}
void HistoriqueDecroissant() {}

