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
void SplahScreen() { // Pour faire plus joli, on met un petit logo
printf("                   ___         _                    _ _       \n");
printf("                  / __\\___ ___(_) /\\  /\\__ _ _ __  (_(_) ___  \n");
printf("                 / /  / _ / __| |/ /_/ / _` | '_ \\ | | |/ _ \\ \n");
printf("                / /__|  __\\__ | / __  | (_| | | | || | |  __/ \n");
printf("                \\____/\\___|___|_\\/ /_/ \\__,_|_| |__/ |_|\\___| \n");
printf("                                                  |__/       v0.3\n");
printf("\n");



}

int NomJoueur(char* nomjoueur) {
    printf("##############################  Cesi Hanjie v0.3  ##############################\n"); // On demande le nom du joueur
    printf("# Quel est votre nom ?                                                         #\n"); // pour le stocker dans un tableau
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    fgets(nomjoueur, 51, stdin);  // Fgets permet de tronquer automatiquement s'il y a plus de 50 caractères
    EffacerEcran();
    if(strlen(nomjoueur) < 4) {
        printf("\x1b[31mERREUR\x1b[0m: Rentrez un nom supérieur à 3 caractères.\n");
        NomJoueur(nomjoueur);
    }
    EffacerEcran();
    return 0;
}

int MenuPrincipal(DonneesPartie *Partie) { // Menu principal
    int choix = 0;
    SplahScreen();
    printf("##############################  Cesi Hanjie v0.3  ##############################\n");
    printf("# Joueur : %s", Partie->nomjoueur);
    printf("# 1) Nouvelle Partie                                                           #\n");
    printf("# 2) Charger Partie                                                            #\n");
    printf("# 3) Voir l'historique                                                         #\n");
    printf("# 0) Quitter                                                                   #\n");
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    if(scanf("%d", &choix) == 1) {
        ClearBuffer();
        switch(choix) {
        case 1:
            EffacerEcran();
            NouvellePartie(Partie);
            break;
        case 2:
            EffacerEcran();
            MenuSauvegarde(Partie);
            break;
        case 3:
            EffacerEcran();
            MenuHistorique(Partie);
            break;
        case 0:
            MenuQuitterJeu();
            break;
        default:
            EffacerEcran();
            MenuPrincipal(Partie);
            break;
        }
    }
    else {
        printf("\x1b[31mERREUR\x1b[0m: Impossible de lire l'entrée.\n");
    }
    return 0;
}

// Jeu
int MenuDifficulte(DonneesPartie* Partie) { // Menu de choix de la difficulté
    Partie->difficulte = 0;
    int choix;
    SplahScreen();
    printf("##############################  Cesi Hanjie v0.3  ##############################\n");
    printf("# Choisissez votre difficulté :                                                #\n");
    printf("# 1) Facile                                                                    #\n");
    printf("# 2) Normal                                                                    #\n");
    printf("# 3) Difficile                                                                 #\n");
    printf("# 0) Retour                                                                    #\n");
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    if(scanf("%d", &choix) == 1) {
        ClearBuffer();
        switch(choix) {
        case 1:
            Partie->difficulte = FACILE;
            break;
        case 2:
            Partie->difficulte =  MOYEN;
            break;
        case 3:
            Partie->difficulte =  DIFFICILE;
            break;
        case 0:
            EffacerEcran();
            MenuPrincipal(Partie);
            break;
        default:
            EffacerEcran();
            printf("\x1b[31mERREUR\x1b[0m : Entrée invalide.\n");
            MenuDifficulte(Partie);
            break;
        }
    }
    else {
        printf("\x1b[31mERREUR\x1b[0m : Impossible de lire l'entrée.\n");
    }
    return 0;
}

int MenuGrille(DonneesPartie* Partie) { // Menu de choix des grilles en fonction de la difficulté
    EffacerEcran();
    Partie->grille = 0;
    int choix;
    switch(Partie->difficulte) {
    case FACILE:
        EffacerEcran();
        SplahScreen();
        printf("##############################  Cesi Hanjie v0.3  ##############################\n");
        printf("# Vous êtes en difficulté facile. Vous avez des grilles de 5x5 cases \n");
        printf("# 1) A\n");
        printf("# 2) Coeur\n");
        printf("# 3) Diamant\n");
        printf("# 0) Retour\n");
        printf("#############################  Entrez votre choix  #############################\n");
        printf("# ");
        if(scanf("%d", &choix) == 1) {
            ClearBuffer();
            if((choix == 1) || (choix == 2) || (choix == 3)) {
                Partie->grille = choix;
                EffacerEcran();
            }
            else if(choix == 0) {
                EffacerEcran();
                MenuDifficulte(Partie);
            }
            else {
                EffacerEcran();
                printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
                MenuGrille(Partie);
            }
        }
        else {
            printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
            MenuGrille(Partie);
        }
        break;
    case MOYEN:
        EffacerEcran();
        SplahScreen();
        printf("##############################  Cesi Hanjie v0.3  ##############################\n");
        printf("# Vous êtes en difficulté moyenne. Vous avez des grilles de 10x10 cases \n");
        printf("# 1) Etoile\n");
        printf("# 2) Coeur\n");
        printf("# 3) Smiley\n");
        printf("# 0) Retour\n");
        printf("#############################  Entrez votre choix  #############################\n");
        printf("# ");
        if(scanf("%d", &choix) == 1) {
            ClearBuffer();
            if((choix == 1) || (choix == 2) || (choix == 3)) {
                Partie->grille = choix;
                EffacerEcran();
            }
            else if(choix == 0) {
                EffacerEcran();
                MenuDifficulte(Partie);
            }
            else {
                EffacerEcran();
                printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
                MenuGrille(Partie);
            }
        }
        else {
            printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
            MenuGrille(Partie);
        }
        break;
    case DIFFICILE:
        EffacerEcran();
        SplahScreen();
        printf("##############################  Cesi Hanjie v0.3  ##############################\n");
        printf("# Vous êtes en difficulté difficile. Vous avez des grilles de 15x15 cases \n");
        printf("# 1) Champignon\n");
        printf("# 2) Creeper\n");
        printf("# 3) Note\n");
        printf("# 0) Retour\n");
        printf("#############################  Entrez votre choix  #############################\n");
        printf("# ");
        if(scanf("%d", &choix) == 1) {
            ClearBuffer();
            if((choix == 1) || (choix == 2) || (choix == 3)) {
                Partie->grille = choix;
                EffacerEcran();
            }
            else if(choix == 0) {
                EffacerEcran();
                MenuDifficulte(Partie);
            }
            else {
                EffacerEcran();
                printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
               MenuGrille(Partie);
            }
        }
        else {
            printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
            MenuGrille(Partie);
        }
        break;
    }
    return 0;
}

// Sauvegarde
int MenuSauvegarde(DonneesPartie *Partie) {
    char reponse;
    SplahScreen();
    printf("##############################  Cesi Hanjie v0.3  ##############################\n"); // Menu de confirmation de chargement de la sauvegarde
    printf("# Voulez vraiment charger une partie ?\n");
    printf("# O/N \n");
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    if(scanf("%c", &reponse) == 1) {
        ClearBuffer();
        if((reponse == 79) || (reponse == 111)) {
            // ChargerPartie();
            printf("# Ici bientôt, le chargement de la partie.\n");
            printf("# Retour au menu...\n");
            sleep(2);
            EffacerEcran();
            MenuPrincipal(Partie);
        }
        else {
            printf("# Retour au menu...\n");
            sleep(2);
            EffacerEcran();
            MenuPrincipal(Partie);
        }
    }
    else {
        printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
    }
    return 0;
}

// Historique
int MenuHistorique(DonneesPartie* Partie) { // Menu pour afficher l'historique, et lancer le tri de celui ci
    int choix;
    SplahScreen();
    printf("##############################  Cesi Hanjie v0.3  ##############################\n");
    printf("# 1) Afficher l'historique                                                     #\n");
    printf("# 2) Afficher l'historique trié par ordre croissant                            #\n");
    printf("# 3) Afficher l'historique trié par ordre décroissant                          #\n");
    printf("# 0) Retour                                                                    #\n");
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    if (scanf("%d", &choix)) {
        ClearBuffer();
        switch(choix) {
            case 1:
                EffacerEcran();
                AfficherHistorique();
                break;
            case 2:
                EffacerEcran();
                HistoriqueCroissant();
                break;
            case 3:
                EffacerEcran();
                HistoriqueDecroissant();
                break;
            case 0:
                EffacerEcran();
                MenuPrincipal(Partie);
                break;
            default:
                EffacerEcran();
                MenuHistorique(Partie);
                break;
        }
    }
    MenuHistorique(Partie);
    return 0;
}

// Divers
void EffacerEcran() { // Permet d'effacer l'écran sans avoir recours à un appel système
    printf("\x1B[2J");
}

void ClearBuffer(void) { // ClearBuffer() permet d'éviter que scanf bug à cause d'un buffer plein
    int c;
    while ((c=getchar()) != '\n' && c != EOF)
        ;
}

void MenuQuitterJeu() { // Permet de quitter le jeu avec le code 0
    exit(0);
}
