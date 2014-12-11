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

int test() {
 FILE* fichier = NULL;
    fichier = fopen("fichiersauvegarge.bin", "r+");
    if (fichier != NULL)
    {
        // On peut lire et écrire dans le fichier
    }
    else
    {
        // On affiche un message d'\x1b[31mERREUR\x1b[0m si on veut
        printf("Impossible d'ouvrir le fichier fichier sauvegarde.bin.bin");
    }
    return 0;

}

int ChargerPartie(char * tableau) {return 0;}
