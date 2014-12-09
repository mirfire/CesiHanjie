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

int NouvellePartie(char* nomjoueur) {
    int difficulte;
    difficulte = MenuDifficulte(nomjoueur); // On demande la difficulté
    if((difficulte != (FACILE || MOYEN || DIFFICILE)) && difficulte != 0) { // On vérifie s'il y a une \x1b[31mERREUR\x1b[0m dans le retour
        printf("\x1b[31mERREUR\x1b[0m: Le choix n'est pas valide !\n"); // Affichage de l'\x1b[31mERREUR\x1b[0m
        NouvellePartie(nomjoueur); // Retour au début
    }
    if(difficulte == 0)
        MenuPrincipal(nomjoueur);
    switch(difficulte) {
        case FACILE:
            MenuGrille(FACILE, nomjoueur);
            break;
        case MOYEN:
            MenuGrille(MOYEN, nomjoueur);
            break;
        case DIFFICILE:
            MenuGrille(DIFFICILE, nomjoueur);
            break;
        default:
            NouvellePartie(nomjoueur);
            break;
    }
    return 0;
}

int ChargerGrille(int difficulte, int choix) {
    char chemin[100];
    printf("# Chargement de la grille %d, pour la difficulté %d.\n", choix, difficulte);
    sleep(1);
    return 0;
}



