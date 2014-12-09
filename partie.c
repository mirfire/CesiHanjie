#include "includes.h"

int NouvellePartie(char* nomjoueur) {
    int difficulte;
    difficulte = MenuDifficulte(nomjoueur); // On demande la difficulté
    if((difficulte != (FACILE || MOYEN || DIFFICILE)) && difficulte != 0) { // On vérifie s'il y a une erreur dans le retour
        printf("ERREUR: Le choix n'est pas valide !\n"); // Affichage de l'erreur
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
            break;
    }
    return 0;
}

int ChargerGrille(int difficulte, int choix) {
    printf("Chargement de la grille %d, pour la difficulté %d.", difficulte, choix);
    sleep(5);
    return 0;
}
