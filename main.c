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
    DonneesPartie *Partie, AdressePartie;
    Partie = &AdressePartie;

    // FONCTIONS
    InitialiserPartie(Partie);
    SplahScreen();
    NomJoueur(Partie->nomjoueur); // On demande le nom du joueur
    EditerFichierSauvegarde(Partie);
    MenuPrincipal(Partie); // Lancement du menu
    return 0;
}
