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
    scanf("%d", &choix);
    switch(choix) {
    case 1:
        EffacerEcran();
        if(NouvellePartie() == 0)
            MenuPrincipal(nomjoueur);
        break;
    case 2:
        EffacerEcran();
        ChargerPartie();
        break;
    case 3:
        EffacerEcran();
        MenuHistorique();
        break;
    case 0:
        MenuQuitterJeu();
        break;
    default:
        EffacerEcran();
        MenuPrincipal(nomjoueur);
        break;
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
    printf("Bienvenue %s", nomjoueur);
    sleep(2);
    EffacerEcran();
    return 0;
}

void EffacerEcran() {
    printf("\x1B[2J" );
}

void MenuQuitterJeu() {
    exit(0);
}

int MenuHistorique() {
    return 0;
}
