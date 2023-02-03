#include "menu.h"
#include <stdio.h>
#include "../Plateau/plateau.h"
#include "../Sauvegarde/sauvegarde.h"
#include "../Partie/partie.h"


void affichageMenu(){
    char variableInput;
    do{

        printf(" \t\t\t     @@@@@@@@                                       @@@@@@@@@@\n");
        printf("\t\t\t     @@@@@@@@@@                                    @@@@@@@@@@@\n");
        printf("\t\t\t     @@@@@@@@@@                                    @@@@@@@@@@@\n");
        printf("\t\t\t     @@@@@@@@@@@@                                @@@@@@@@@@@@@\n");
        printf("\t\t\t     @@@@@@@@@@@@@                              @@@@@@@@@@@@@@\n");
        printf("\t\t\t     @@@@ @@@@@@@@@                            @@@@@ @@@@@@@@@\n");
        printf("\t\t\t     @@@@  @@@@@@@@@                          @@@@@  @@@@@@@@@\n");
        printf("\t\t\t     @@@@   @@@@@@@@@                        @@@@    @@@@@@@@@\n");
        printf("\t\t\t     @@@@     @@@@@@@@                      @@@@     @@@@@@@@@\n");
        printf("\t\t\t     @@@@      @@@@@@@@@                   @@@@      @@@@@@@@@\n");
        printf("\t\t\t     @@@@       @@@@@@@@@                @@@@@       @@@@@@@@@\n");
        printf("\t\t\t     @@@@        @@@@@@@@@              @@@@@        @@@@@@@@@\n");
        printf("\t\t\t     @@@@         @@@@@@@@@            @@@@@         @@@@@@@@@\n");
        printf("\t\t\t     @@@@          @@@@@@@@@          @@@@@          @@@@@@@@@\n");
        printf("\t\t\t     @@@@           @@@@@@@@@        @@@@@           @@@@@@@@@\n");
        printf("\t\t\t     @@@@             @@@@@@@@@     @@@@             @@@@@@@@@\n");
        printf("\t\t\t     @@@@              @@@@@@@@@   @@@@              @@@@@@@@@\n");
        printf("\t\t\t     @@@@               @@@@@@@@@@@@@@               @@@@@@@@@\n");
        printf("\t\t\t     @@@@                @@@@@@@@@@@@                @@@@@@@@@\n");
        printf("\t\t\t     @@@@                 @@@@@@@@@@                 @@@@@@@@@\n");
        printf("\t\t\t     @@@@                  @@@@@@@@                  @@@@@@@@@\n");
        printf("\t\t\t     @@@@                   @@@@@@                   @@@@@@@@@\n");
        printf("\t\t\t\t\t\t @Antoine GRENOUILLET, Pierre-Louis THOMAS, Baptiste HUVELLE, Luca SOLER");

        printf("\t\t\t\t\t Pressez ENTER pour continuer\n");
        fflush(stdin);
        scanf("%c", &variableInput);
    } while (variableInput != 10 && variableInput != 13);

}

void afficherMenuSauvegarde(Monopoly* monopoly){

    printf("\n\n");
    color(12, 0);
    printf("\t888b     d888  .d88888b.  888b    888  .d88888b.  8888888b.   .d88888b.  888    Y88b   d88P\n"
           "\t8888b   d8888 d88P   Y88b 8888b   888 d88P   Y88b 888   Y88b d88P   Y88b 888     Y88b d88P \n"
           "\t88888b.d88888 888     888 88888b  888 888     888 888    888 888     888 888      Y88o88P  \n"
           "\t888Y88888P888 888     888 888Y88b 888 888     888 888   d88P 888     888 888       Y888P   \n"
           "\t888 Y888P 888 888     888 888 Y88b888 888     888 8888888P   888     888 888        888    \n"
           "\t888  Y8P  888 888     888 888  Y88888 888     888 888        888     888 888        888    \n"
           "\t888       888 Y88b. .d88P 888   Y8888 Y88b. .d88P 888        Y88b. .d88P 888        888    \n"
           "\t888       888   Y88888P   888    Y888   Y88888P   888          Y88888P   88888888   888    \n");


    printf("\n\n");
    color(15, 0);
    printf("\t\t\t\t\t___________________________\n"
           "\t\t\t\t\t|     Nouvelle Partie     |\n"
           "\t\t\t\t\t___________________________\n");
    printf("\n\n\n");
    printf("\t\t\t\t\t___________________________\n"
           "\t\t\t\t\t|   Charger une partie    |\n"
           "\t\t\t\t\t___________________________\n");
    printf("\n\n\n");
    printf("\t\t\t\t\t___________________________\n"
           "\t\t\t\t\t|  Sauvegarder la partie  |\n"
           "\t\t\t\t\t___________________________\n");

    printf("\n\n\n");

    menuSauvegardeInitial(monopoly);
}

void menuSauvegardeInitial(Monopoly *monopoly) {
    char choix;
    do {
        printf("Pour commencer une nouvelle tapez N\n");
        printf("Pour charger une partie tapez C\n");
        printf("Pour sauvegarder une partie tapez S\n");
        scanf(" %c", &choix);

    } while (choix != 'S' && choix != 'N' && choix != 'C');

    switch (choix) {
        case 'S': {
            printf("Vous n'avez encore lance aucune partie, vous commencez donc une nouvelle partie !\n");
            presentation(monopoly);
            tirageAuSortOrdreJoueur(monopoly);
            printAttributionPion(monopoly);
            sauvegarderPartie(monopoly);
            testTour(monopoly);
            break;
        }
        case 'C': {
            *monopoly = chargerPartie();
            testTour(monopoly);
            break;
        }

        case 'N':{
            *monopoly = initialiserPartie();
            Monopoly* pMonopoly = monopoly;
            affichageMenu();
            initialiserLesCartes(pMonopoly);
            presentation(pMonopoly);
            tirageAuSortOrdreJoueur(pMonopoly);
            printAttributionPion(pMonopoly);

            testTour(pMonopoly);
        }

        default: {
            break;
        }

    }

}

void menuSauvegardeEnCoursDePartie(Monopoly *monopoly) {

    printf("\n\n");
    color(12, 0);
    printf("\t888b     d888  .d88888b.  888b    888  .d88888b.  8888888b.   .d88888b.  888    Y88b   d88P\n"
           "\t8888b   d8888 d88P   Y88b 8888b   888 d88P   Y88b 888   Y88b d88P   Y88b 888     Y88b d88P \n"
           "\t88888b.d88888 888     888 88888b  888 888     888 888    888 888     888 888      Y88o88P  \n"
           "\t888Y88888P888 888     888 888Y88b 888 888     888 888   d88P 888     888 888       Y888P   \n"
           "\t888 Y888P 888 888     888 888 Y88b888 888     888 8888888P   888     888 888        888    \n"
           "\t888  Y8P  888 888     888 888  Y88888 888     888 888        888     888 888        888    \n"
           "\t888       888 Y88b. .d88P 888   Y8888 Y88b. .d88P 888        Y88b. .d88P 888        888    \n"
           "\t888       888   Y88888P   888    Y888   Y88888P   888          Y88888P   88888888   888    \n");


    printf("\n\n");
    color(15, 0);
    printf("\t\t\t\t\t___________________________\n"
           "\t\t\t\t\t|     Nouvelle Partie     |\n"
           "\t\t\t\t\t___________________________\n");
    printf("\n\n\n");
    printf("\t\t\t\t\t___________________________\n"
           "\t\t\t\t\t|   Charger une partie    |\n"
           "\t\t\t\t\t___________________________\n");
    printf("\n\n\n");
    printf("\t\t\t\t\t___________________________\n"
           "\t\t\t\t\t|  Sauvegarder la partie  |\n"
           "\t\t\t\t\t___________________________\n");

    printf("\n\n\n");
    char choix;
    do {
        printf("Pour continuer votre partie tapez N\n");
        printf("Pour charger une partie tapez C\n");
        printf("Pour sauvegarder une partie tapez S\n");
        scanf(" %c", &choix);

    } while (choix != 'S' && choix != 'N' && choix != 'C');

    switch (choix) {
        case 'S': {
            sauvegarderPartie(monopoly);
            break;
        }
        case 'C': {
            *monopoly = chargerPartie();
            break;
        }

        default: {
            afficherCases(monopoly);
            break;
        }

    }

}

void menuSauvegarde(Monopoly *monopoly) {
    char choix;
    do {
        printf("Pour sauvegarder une partie tapez S\n");
        printf("Pour charger une partie tapez C\n");
        printf("Pour revenir a la partie tapez N\n");
        scanf(" %c", &choix);

    } while (choix != 'S' && choix != 'N' && choix != 'C');

    switch (choix) {
        case 'S': {
            sauvegarderPartie(monopoly);
            break;
        }
        case 'C': {
            *monopoly = chargerPartie();
            break;
        }

        default: {
            break;
        }

    }

}