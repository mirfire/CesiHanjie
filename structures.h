#ifndef HEADER_STRUCTURES
#define HEADER_STRUCTURES

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

