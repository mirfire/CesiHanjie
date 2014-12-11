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

int EditerFichierSauvegarde(DonneesPartie* Partie) {
<<<<<<< HEAD
 FILE* fichier = NULL;

    fichier = fopen("fichiersauvegarge.bin", "r+");
=======
    FILE* fichier = NULL;
    char chemin[100];
    int i = 0;
    for (i = 0 ; i < 51 ; i++) {
        chemin[i] = 0;
    }
    strcat(chemin, "saves/");
    strcat(chemin, Partie->nomjoueur);
    strcat(chemin, ".bin");
    fichier = fopen(chemin, "w+");
>>>>>>> 38713f389c6a78e00edef97f04f3a3d6a865cd03
    if (fichier != NULL)
    {
        fprintf(fichier,"%s",Partie->nomjoueur); // On peut lire et écrire dans le fichier
    }
    else
    {
        // On affiche un message d'\x1b[31mERREUR\x1b[0m si on veut
        printf("\x1b[31mERREUR\x1b[0m: Impossible d'ouvrir le fichier fichier %s", chemin);
    }
    return 0;

}

int ChargerPartie(char * tableau) {return 0;}
