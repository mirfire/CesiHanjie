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
    FILE* fichier = NULL; // Pointeur du fichier de sauvegarde
    DIR* dossier = NULL; // Pointeur du dossier
    char chemin[100]; // Tableau contenant le chemin
    int i = 0; // Initialisation du tableau
    for (i = 0 ; i < 51 ; i++) {
        chemin[i] = 0;
    }
    strcat(chemin, "saves/"); // On ajoute "saves/" au chemin
    dossier = opendir(chemin); // On ouvre  le dossier saves
    if(dossier == NULL) {
        mkdir("./saves/",0775); // S'il n'existe pas, on le crée
        dossier = opendir(chemin); // Puis on l'ouvre...
    }
    closedir(dossier); // ... Pour le refermer
    strcat(chemin, Partie->nomjoueur); // On ajoute le nom du joueur au chemin
    strcat(chemin, ".bin"); // Et enfin on ajoute l'extension
    fichier = fopen(chemin, "wb+"); // Lecture écriture + suppression (Bin)
    if (fichier != NULL)
    {
        fprintf(fichier,"%c",Partie->nomjoueur); // On écrit dans le dossier
    }
    else
    {
        // On affiche un message d'erreur
        printf("\x1b[31mERREUR\x1b[0m: Impossible d'ouvrir le fichier fichier %s", chemin);
    }
    return 0;

}

int ChargerPartie(char * tableau) {
    return 0;
}
