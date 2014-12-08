#ifndef HEADER_STRUCTURES
#define HEADER_STRUCTURES

#include "includes.h"

// ENUMS
typedef enum Difficulte Difficulte;
enum Difficulte {
    FACILE, MOYEN, DIFFICILE // FACILE = 0, MOYEN = 1, DIFFICILE = 2
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

