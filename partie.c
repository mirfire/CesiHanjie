#include "includes.h"

int NouvellePartie(char* nomjoueur) {
    int difficulte;
    difficulte = MenuDifficulte();
    if((difficulte != (FACILE || MOYEN || DIFFICILE)) && difficulte != 0) {
        printf("ERREUR: Le choix n'est pas valide !\n");
        NouvellePartie(nomjoueur);
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
        break;
    }
    return 0;
}


