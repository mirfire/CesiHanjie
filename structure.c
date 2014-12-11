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

void InitialiserPartie(DonneesPartie* Partie) { // On initialise la structure à 0
    int i = 0;
    for (i = 0 ; i < 51 ; i++) {
        Partie->nomjoueur[i] = 0;
    }
    Partie->difficulte = 0;
    Partie->grille = 0;
    Partie->taillegrille = 0;
    i = 0;
    for (i = 0 ; i < 2 ; i++) {
        Partie->heuredepart[i] = 0;
        Partie->minutedepart[i] = 0;
        Partie->secondedepart[i] = 0;
        Partie->heurefin[i] = 0;
        Partie->minutefin[i] = 0;
        Partie->secondefin[i] = 0;
    }
    // On initialise pas encore le tableau dynamique
}

void InitialiserTableauPartie(DonneesPartie* Partie) { // On l'initialise avec cette fonction
    Partie->tableau = (char***)calloc(sizeof(char**) * Partie->taillegrille); // Longueur
    int i = 0, j = 0;
    for(i=0; i < Partie->taillegrille; i++) {
        Partie[i].tableau = (char**)calloc(sizeof(char*) * Partie->taillegrille); // Largeur
        for(j=0; j < Partie->taillegrille; j++) {
           Partie[j].tableau = (char*)calloc(sizeof(char) * 3); // Hauteur, il y a donc 3 couches
        }
    }
    if(Partie->tableau == NULL)
        printf("Allocation échouée.\n");
}
