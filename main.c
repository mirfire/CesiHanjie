#include "includes.h"

int main()
{
    // VARIABLES
    char nomjoueur[50];
    // FONCTIONS
    SplahScreen();
    NomJoueur(nomjoueur);
    MenuPrincipal(nomjoueur);
    EffacerEcran();
    return 0;
}
