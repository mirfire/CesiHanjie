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

void InitialiserPartie(DonneesPartie* Partie) {
    int i = 0;
    for (i = 0 ; i < 51 ; i++) {
        Partie->nomjoueur[i] = 0;
    }
    Partie->difficulte = 0;
    Partie->grille = 0;
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
