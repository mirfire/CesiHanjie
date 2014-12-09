#ifndef HEADER_MENU
#define HEADER_MENU

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

// Menus
void SplahScreen();
int NomJoueur(char*);
int MenuPrincipal(char*);

// Jeu
int MenuDifficulte(char*);
int MenuGrille(int, char*);

// Sauvegarde
int MenuSauvegarde(char*);

// HISTORIQUE
int MenuHistorique(char*);

// DIVERS
void EffacerEcran();
void ClearBuffer();
void MenuQuitterJeu();


#endif // HEADER_MENU



