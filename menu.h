#ifndef HEADER_MENU
#define HEADER_MENU

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



