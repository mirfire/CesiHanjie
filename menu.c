#include "includes.h"

int MenuPrincipal(char*nomjoueur) {
    int choix = 0;
    printf("##############################  Cesi Hanjie v0.1  ##############################\n");
    printf("# Joueur : %s\n", nomjoueur);
    printf("# 1) Nouvelle Partie                                                           #\n");
    printf("# 2) Charger Partie                                                            #\n");
    printf("# 3) Voir l'historique                                                         #\n");
    printf("# 0) Quitter                                                                   #\n");
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    if(scanf("%d", &choix) == 1) {
        switch(choix) {
        case 1:
            EffacerEcran();
            NouvellePartie(nomjoueur);
            break;
        case 2:
            EffacerEcran();
            ChargerPartie(nomjoueur);
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
        printf("ERREUR: Impossible de lire l'entrée.\n");
    }
    return 0;
}

int NomJoueur(char* nomjoueur) {
    printf("##############################  Cesi Hanjie v0.1  ##############################\n");
    printf("# Quel est votre nom ?                                                         #\n");
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    fgets(nomjoueur, 50, stdin);
    EffacerEcran();
    if(strlen(nomjoueur) < 4) {
        printf("ERREUR: Rentrez un nom supérieur à 3 caractères.\n");
        NomJoueur(nomjoueur);
    }
    printf("Bienvenue %s", nomjoueur);
    sleep(1);
    EffacerEcran();
    return 0;
}

int MenuDifficulte() {
    int choix;
    printf("##############################  Cesi Hanjie v0.1  ##############################\n");
    printf("# Choisissez votre difficulté :                                                #\n");
    printf("# 1) Facile                                                                    #\n");
    printf("# 2) Normal                                                                    #\n");
    printf("# 3) Difficile                                                                 #\n");
    printf("# 0) Retour                                                                    #\n");
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    if(scanf("%d", &choix) == 1) {
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
            return 4;
            break;
        default:
            return 4;
            break;
        }
    }
    else {
        printf("ERREUR : Impossible de lire l'entrée.\n");
    }
    return 4;
}

int MenuGrille(int difficulte, char* nomjoueur) {
    EffacerEcran();
    int choix;
    printf("##############################  Cesi Hanjie v0.1  ##############################\n");
    switch(choix) {
    case FACILE:
        printf("# Vous êtes en difficulté facile. Vous avez des grilles de 5x5 cases \n");
        printf("# 1) A\n");
        printf("# 2) Coeur\n");
        printf("# 3) Diamant\n");
        printf("# 0) Retour\n");
        if(scanf("%d", &choix) == 1) {
            switch(choix) {
            case 1:
                ChargerGrille(difficulte, choix);
                break;
            case 2:
                ChargerGrille(difficulte, choix);
                break;
            case 3:
                ChargerGrille(difficulte, choix);
                break;
            case 0:
                MenuPrincipal(nomjoueur);
                break;
            default:
                MenuPrincipal(nomjoueur);
                break;
            }
        }
        else {
            printf("ERREUR: Entrée invalide.\n");
            MenuGrille(difficulte, nomjoueur);
        }
    }
    return 0;
}

void EffacerEcran() {
    printf("\x1B[2J");
}

void MenuQuitterJeu() {
    exit(0);
}

int MenuHistorique(char* nomjoueur) {
    int choix;
    printf("##############################  Cesi Hanjie v0.1  ##############################\n");
    printf("# 1) Afficher l'historique                                                     #\n");
    printf("# 2) Afficher l'historique trié par ordre croissant                            #\n");
    printf("# 3) Afficher l'historique trié par ordre décroissant                          #\n");
    printf("# 0) Retour                                                                    #\n");
    printf("#############################  Entrez votre choix  #############################\n");
    printf("# ");
    scanf("%d", &choix);
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
    MenuHistorique(nomjoueur);
    return 0;
}
