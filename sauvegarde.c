#include "includes.h"

int test() {
 FILE* fichier = NULL;
    fichier = fopen("fichiersauvegarge", "r+");
    if (fichier != NULL)
    {
        // On peut lire et écrire dans le fichier
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    return 0;

}

int ChargerPartie(char * tableau) {return 0;}
