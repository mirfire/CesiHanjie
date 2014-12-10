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
    char temp[2];
    fgets(temp, 2, fichier);
}

int LirePBM() {
    return 0;
}

