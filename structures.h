#ifndef HEADER_STRUCTURES
#define HEADER_STRUCTURES

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

// ENUMS
typedef enum Difficulte Difficulte;
enum Difficulte {
    FACILE = 1, MOYEN = 2, DIFFICILE = 3
};


// STRUCTURES
typedef struct DonneesPartie DonneesPartie;
struct DonneesPartie {
    char nomjoueur[51];
    int difficulte;
    int grille;
    char heuredepart[2];
    char minutedepart[2];
    char secondedepart[2];
    char heurefin[2];
    char minutefin[2];
    char secondefin[2];
};
/* Pour le stockage de la partie, on stocke la difficulté et la grille.
 * Du coup, pour vérifier si c'est bon, on utilisera un fichier temporaire,
 * qui sera comparé avec le fichier pbm
 */


// FONCTION STRUCTURE
void InitialiserPartie(DonneesPartie*);

#endif // HEADER_STRUCTURES

