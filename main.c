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

int main()
{
    // VARIABLES
    char nomjoueur[50]; // Définition de la variables du nom du joueur
    DonneesPartie Partie;

    // FONCTIONS
    InitialiserPartie(&Partie);
    SplahScreen();
    NomJoueur(nomjoueur); // On demande le nom du joueur
    MenuPrincipal(nomjoueur,&Partie); // Lancement du menu
    return 0;
}
