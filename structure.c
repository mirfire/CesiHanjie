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
}

void InitialiserTableauPartie(DonneesPartie* Partie) {
    Partie->tableau = (char***)malloc(sizeof(char**) * Partie->taillegrille);
    int i = 0, j = 0;
    for(i=0; i < Partie->taillegrille; i++) {
        Partie[i].tableau = (char**)malloc(sizeof(char*) * Partie->taillegrille);
        for(j=0; j < Partie->taillegrille; j++) {
           Partie[j].tableau = (char*)malloc(sizeof(char) * Partie->taillegrille);
        }
    }
}
