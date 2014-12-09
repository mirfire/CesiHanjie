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
typedef struct Partie Partie;
struct Partie {
    char nomjoueur[50];
    int difficulte;
    int numerogrille;
    int grille;
    char datedepart[20];
    char tempsdepart[20];
};

#endif // HEADER_STRUCTURES

