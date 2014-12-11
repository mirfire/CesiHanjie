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

int SauterLigne( FILE * fichier) {// Fonction qui permet de sauter une ligne
    char temp = 0; // On stocke un caractère tampon
    while(temp != '\n') {
        temp = fgetc(fichier);
    }
    return 0;
}

int ObtenirCote(char* chemin) {
    FILE * fichier;
    fichier = NULL;
    fichier = fopen(chemin, "r");
    SauterLigne(fichier);
    SauterLigne(fichier);
    char temp[3];
    fgets(temp, 3, fichier);
    switch(temp[1]) {
        case 32:
            return 5;
            break;
        case 48:
            return 10;
            break;
        case 53:
            return 15;
            break;
        default:
            printf("ERREUR");
            break;
    }
    return 0;
}

int LirePBM(char* chemin, DonneesPartie* Partie) {
    char tampon;
    FILE * fichier;
    fichier = NULL;
    fichier = fopen(chemin, "r");
    SauterLigne(fichier);
    SauterLigne(fichier);
    SauterLigne(fichier); // On se place sur la ligne qui contient les données de cases
    do {
        tampon = fgetc()
    }
    return 0;
}

