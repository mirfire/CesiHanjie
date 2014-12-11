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
int MenuPrincipal(DonneesPartie*);

// Jeu
int MenuDifficulte(DonneesPartie*);
int MenuGrille(DonneesPartie*);

// Sauvegarde
int MenuSauvegarde(DonneesPartie*);

// HISTORIQUE
int MenuHistorique(DonneesPartie*);

// DIVERS
void EffacerEcran();
void ClearBuffer();
void SupprimerCaractere(char*, char);
void MenuQuitterJeu();


#endif // HEADER_MENU



