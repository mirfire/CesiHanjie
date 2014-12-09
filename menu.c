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
printf("                                                  |__/       v0.2\n");
printf("\n");



}

int NomJoueur(char* nomjoueur) {
    printf("##############################  Cesi Hanjie v0.2  ##############################\n"); // On demande le nom du joueur
    printf("# Quel est votre nom ?                                                         #\n"); // pour le stocker dans un tableau
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    fgets(nomjoueur, 50, stdin);  // Fgets permet de tronquer automatiquement s'il y a plus de 50 caractères
    EffacerEcran();
    if(strlen(nomjoueur) < 4) {
        printf("\x1b[31mERREUR\x1b[0m: Rentrez un nom supérieur à 3 caractères.\n");
        NomJoueur(nomjoueur);
    }
    EffacerEcran();
    return 0;
}

int MenuPrincipal(char*nomjoueur) { // Menu principal
    int choix = 0;
    SplahScreen();
    printf("##############################  Cesi Hanjie v0.2  ##############################\n");
    printf("# Joueur : %s", nomjoueur);
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
            NouvellePartie(nomjoueur);
            break;
        case 2:
            EffacerEcran();
            MenuSauvegarde(nomjoueur);
            break;
        case 3:
            EffacerEcran();
            MenuHistorique(nomjoueur);
            break;
        case 0:
            MenuQuitterJeu();
            break;
        default:
            EffacerEcran();
            MenuPrincipal(nomjoueur);
            break;
        }
    }
    else {
        printf("\x1b[31mERREUR\x1b[0m: Impossible de lire l'entrée.\n");
    }
    return 0;
}

// Jeu
int MenuDifficulte(char* nomjoueur) { // Menu de choix de la difficulté
    int choix;
    SplahScreen();
    printf("##############################  Cesi Hanjie v0.2  ##############################\n");
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
            return FACILE;
            break;
        case 2:
            return MOYEN;
            break;
        case 3:
            return DIFFICILE;
            break;
        case 0:
            EffacerEcran();
            MenuPrincipal(nomjoueur);
            break;
        default:
            EffacerEcran();
            MenuDifficulte(nomjoueur);
            break;
        }
    }
    else {
        printf("\x1b[31mERREUR\x1b[0m : Impossible de lire l'entrée.\n");
    }
    return 4;
}

int MenuGrille(int difficulte, char* nomjoueur) {
    EffacerEcran();
    int choix;
    SplahScreen();
    printf("##############################  Cesi Hanjie v0.2  ##############################\n"); // Menu de choix des grilles en fonction de la difficulté
    switch(choix) {
    case FACILE:
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
                EffacerEcran();
                ChargerGrille(difficulte, choix);
            }
            else {
                MenuDifficulte(nomjoueur);
            }
        }
        else {
            printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
            MenuGrille(difficulte, nomjoueur);
        }
    case MOYEN:
        printf("# Vous êtes en difficulté moyenne. Vous avez des grilles de 10x10 cases \n");
        printf("# 1) ???\n"); // TODO
        printf("# 2) Coeur\n");
        printf("# 3) ???\n"); // TODO
        printf("# 0) Retour\n");
        printf("#############################  Entrez votre choix  #############################\n");
        printf("# ");
        if(scanf("%d", &choix) == 1) {
            ClearBuffer();
            if((choix == 1) || (choix == 2) || (choix == 3)) {
                EffacerEcran();
                ChargerGrille(difficulte, choix);
            }
            else {
                MenuDifficulte(nomjoueur);
            }
        }
        else {
            printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
            MenuGrille(difficulte, nomjoueur);
        }
    case DIFFICILE:
        printf("# Vous êtes en difficulté difficile. Vous avez des grilles de 15x15 cases \n");
        printf("# 1) ???\n"); // TODO
        printf("# 2) ???\n"); // TODO
        printf("# 3) ???\n"); // TODO
        printf("# 0) Retour\n");
        printf("#############################  Entrez votre choix  #############################\n");
        printf("# ");
        if(scanf("%d", &choix) == 1) {
            ClearBuffer();
            if((choix == 1) || (choix == 2) || (choix == 3)) {
                EffacerEcran();
                ChargerGrille(difficulte, choix);
            }
            else {
                MenuDifficulte(nomjoueur);
            }
        }
        else {
            printf("\x1b[31mERREUR\x1b[0m: Entrée invalide.\n");
            MenuGrille(difficulte, nomjoueur);
        }
    }
    return 0;
}

// Sauvegarde
int MenuSauvegarde(char* nomjoueur) {
    char reponse;
    SplahScreen();
    printf("##############################  Cesi Hanjie v0.2  ##############################\n"); // Menu de confirmation de chargement de la sauvegarde
    printf("# Voulez vraiment charger une partie ?\n");
    printf("# O/N \n");
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    scanf("%c", &reponse);
    ClearBuffer();
    if((reponse == 79) || (reponse == 111)) {
        // ChargerPartie();
        printf("# Ici bientôt, le chargement de la partie.\n");
        printf("# Retour au menu...\n");
        sleep(2);
        EffacerEcran();
        MenuPrincipal(nomjoueur);
    }
    else {
        printf("# Retour au menu...\n");
        sleep(2);
        EffacerEcran();
        MenuPrincipal(nomjoueur);
    }
    return 0;
}

// Historique
int MenuHistorique(char* nomjoueur) { // Menu pour afficher l'historique, et lancer le tri de celui ci
    int choix;
    SplahScreen();
    printf("##############################  Cesi Hanjie v0.2  ##############################\n");
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
                MenuPrincipal(nomjoueur);
                break;
            default:
                EffacerEcran();
                MenuHistorique(nomjoueur);
                break;
        }
    }
    MenuHistorique(nomjoueur);
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
