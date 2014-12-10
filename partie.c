/*
 *       ___         _                    _ _
 *      / __\___ ___(_) /\  /\__ _ _ __  (_(_) ___
 *     / /  / _ / __| |/ /_/ / _` | '_ \ | | |/ _ \
 *    / /__|  __\__ | / __  | (_| | | | || | |  __/
 *    \____/\___|___|_\/ /_/ \__,_|_| |__/ |_|\___|
 *                                     |__/
 * Projet codé Rockfire, MSRog et UF-Ryzen du centre Exia Arras
 */
#include "includes.h"

int NouvellePartie(DonneesPartie* Partie) {
    MenuDifficulte(Partie);
    MenuGrille(Partie);
    ChargerGrille(Partie);
    NouvellePartie(Partie);
    return 0;
}

int ChargerGrille(DonneesPartie* Partie) {
    char chemin[100];
    printf("# Chargement de la grille %d, pour la difficulté %d.\n", Partie->grille, Partie->difficulte);
    sleep(1);
    return 0;
}



