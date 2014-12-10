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
    int i = 0;
    for (i = 0 ; i < 51 ; i++) {
        chemin[i] = 0;
    }
    strcat(chemin, "grilles/");
    switch(Partie->difficulte) {
        case FACILE:
            strcat(chemin,"facile/");
            switch(Partie->grille) {
                case A:
                    strcat(chemin, "a.pbm");
                    break;
                case COEUR:
                    strcat(chemin, "coeur.pbm");
                    break;
                case DIAMANT:
                    strcat(chemin, "diamant.pbm");
                    break;
            }
            break;
        case MOYEN:
            strcat(chemin,"moyen/");
            switch(Partie->grille) {
                case ETOILE:
                    strcat(chemin, "etoile.pbm");
                    break;
                case COEURV2:
                    strcat(chemin, "coeurv2.pbm");
                    break;
                case SMILEY:
                    strcat(chemin, "smiley.pbm");
                    break;
            }
        case DIFFICILE:
            strcat(chemin,"difficile/");
            switch(Partie->grille) {
                case ETOILE:
                    strcat(chemin, "champignon.pbm");
                    break;
                case COEURV2:
                    strcat(chemin, "creeper.pbm");
                    break;
                case SMILEY:
                    strcat(chemin, "note.pbm");
                    break;
            }
    }
    printf("# Chargement de la grille %d, pour la difficulté %d.\n", Partie->grille, Partie->difficulte);
    printf("# Elle est située au chemin : %s\n", chemin);
    FILE* fichier = NULL;
    fichier = fopen(chemin, "r");
    if (fichier != NULL) {
        printf("# Fichier chargé avec succès !\n");
        printf("LirePBM():\n") // TODO
        fclose(fichier);
    }
    else
        printf("\x1b[31mERREUR\x1b[0m: Le fichier n'a pas été ouvert.\n");
    sleep(3);
    return 0;
}
