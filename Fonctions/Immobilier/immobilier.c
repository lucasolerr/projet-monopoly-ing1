#include "immobilier.h"
#include <stdio.h>
#include <string.h>
#include "../Plateau/plateau.h"
#include "../Monnaie/monnaie.h"
#include "../Joueur/Joueur.h"


int isProprieteDeJoueurX(Monopoly *monopoly, int numeroPropriete, int numeroJoueur) {
    if (monopoly->tableauPropriete[numeroPropriete].numeroJoueur == numeroJoueur &&
        monopoly->tableauPropriete[numeroPropriete].tableauJoueur != NULL) {
        return 1;
    } else {
        return 0;
    }
}
//marche pas nsp ??!

int isPenurieBatiment(Monopoly *monopoly, int nombreMaisonQueVeutAcheteur) {
    int nombreRestantMaison = 32 - monopoly->tableauJoueur[0].nombreMaisons + monopoly->tableauJoueur[1].nombreMaisons +
                              monopoly->tableauJoueur[2].nombreMaisons + monopoly->tableauJoueur[3].nombreMaisons;
    return (nombreMaisonQueVeutAcheteur > nombreRestantMaison) ? 1 : 0;
}


//int isProprieteeLibreNonAchetee(Monopoly* monopoly, int numeroPropriete){
//    return (monopoly->tableauPropriete[numeroPropriete].tableauJoueur == NULL) ? 1 : 0;
//
// }

int isProprieteNonAchetable(Monopoly *monopoly, int numeroPropriete) {
    //return (monopoly->tableauPropriete[numeroPropriete].isBatiment == 0) ? 1 : 0;
    if (monopoly->tableauPropriete[numeroPropriete].isBatiment == 0) {
        return 1;
    } else {
        return 0;
    }
}

int isProprieteNonAchetee(Monopoly *monopoly, int numeroPropriete) {
    if (monopoly->tableauPropriete[numeroPropriete].tableauJoueur == NULL) {
        return 1;
    } else {
        return 0;
    }
    //return (monopoly->tableauPropriete[numeroPropriete].tableauJoueur == NULL) ? 1 : 0;
}

int nbMaisonSurCase(Monopoly *monopoly, int numeroPropriete) {
    return monopoly->tableauPropriete[numeroPropriete].nombreMaison;
}

void afficherInfosPropriete(Monopoly *monopoly, int numeroPropriete) {
    int nbEspaces = 0, nbCaracDePourCentD = 0;
    if (monopoly->tableauPropriete[numeroPropriete].isBatiment == 1) {
        color(1, 0);
        for (int i = 0; i < TAILLE_UNE_CASE_CONSOLE; ++i) {
            printf("_");
        }
        printf("\n");

        color(0, monopoly->tableauPropriete[numeroPropriete].couleurBackground);
        printf("|");
        if (monopoly->tableauPropriete[numeroPropriete].nombreMaison == 0 &&
            monopoly->tableauPropriete[numeroPropriete].isBatiment == 1) {
            for (int j = 0; j < TAILLECONSOLEMOINS2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauPropriete[numeroPropriete].nombreMaison == 1 &&
                   monopoly->tableauPropriete[numeroPropriete].isBatiment == 1) {
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2; j++) {
                printf(" ");
            }
            printf("M");
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauPropriete[numeroPropriete].nombreMaison == 2 &&
                   monopoly->tableauPropriete[numeroPropriete].isBatiment == 1) {
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2; j++) {
                printf(" ");
            }
            printf("MM");
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2 - 1; j++) {
                printf(" ");
            }

        } else if (monopoly->tableauPropriete[numeroPropriete].nombreMaison == 3 &&
                   monopoly->tableauPropriete[numeroPropriete].isBatiment == 1) {
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2 - 1; j++) {
                printf(" ");
            }
            printf("MMM");
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2 - 1; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauPropriete[numeroPropriete].nombreMaison == 4 &&
                   monopoly->tableauPropriete[numeroPropriete].isBatiment == 1) {
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2 - 1; j++) {
                printf(" ");
            }
            printf("MMMM");
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2 - 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauPropriete[numeroPropriete].nombreMaison == 5 &&
                   monopoly->tableauPropriete[numeroPropriete].isBatiment == 1) {
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2; j++) {
                printf(" ");
            }
            printf("H");
            for (int j = 0; j < TAILLECONSOLEMOINS2 / 2; j++) {
                printf(" ");
            }
        } else {
            for (int k = 0; k < (TAILLECONSOLEMOINS2); k++) {
                printf(" ");
            }

        }

        printf("|");
        color(1, 0);
        printf("\n");
        printf("|");
        printf("%s", monopoly->tableauPropriete[numeroPropriete].strNomRue);
        nbEspaces = strlen(monopoly->tableauPropriete[numeroPropriete].strNomRue);
        for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces; i++) {
            printf(" ");
        }
        printf("|");
        printf("\n");
        printf("|");
        printf("Prix d'achat : %d", monopoly->tableauPropriete[numeroPropriete].prixAchatPropriete);
        nbCaracDePourCentD = monopoly->tableauPropriete[numeroPropriete].prixAchatPropriete;
        if (nbCaracDePourCentD < 10) {
            nbEspaces = strlen("Prix d'achat : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 1; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 100 && nbCaracDePourCentD >= 10) {
            nbEspaces = strlen("Prix d'achat : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 2; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 1000 && nbCaracDePourCentD >= 100) {
            nbEspaces = strlen("Prix d'achat : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 3; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 10000 && nbCaracDePourCentD >= 1000) {
            nbEspaces = strlen("Prix d'achat : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 4; i++) {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
        printf("|");
        printf("Loyer nu : %d", monopoly->tableauPropriete[numeroPropriete].loyerPropriete);
        nbCaracDePourCentD = monopoly->tableauPropriete[numeroPropriete].loyerPropriete;
        if (nbCaracDePourCentD < 10) {
            nbEspaces = strlen("Loyer nu : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 1; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 100 && nbCaracDePourCentD >= 10) {
            nbEspaces = strlen("Loyer nu : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 2; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 1000 && nbCaracDePourCentD >= 100) {
            nbEspaces = strlen("Loyer nu : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 3; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 10000 && nbCaracDePourCentD >= 1000) {
            nbEspaces = strlen("Loyer nu : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 4; i++) {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
        printf("|");
        printf("Loyer 1 M : %d", monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                                 (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison);
        nbCaracDePourCentD = monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                             (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison;
        if (nbCaracDePourCentD < 10) {
            nbEspaces = strlen("Loyer 1 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 1; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 100 && nbCaracDePourCentD >= 10) {
            nbEspaces = strlen("Loyer 1 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 2; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 1000 && nbCaracDePourCentD >= 100) {
            nbEspaces = strlen("Loyer 1 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 3; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 10000 && nbCaracDePourCentD >= 1000) {
            nbEspaces = strlen("Loyer 1 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 4; i++) {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
        printf("|");
        printf("Loyer 2 M : %d", monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                                 (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison *
                                 (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerPlusMaison);
        nbCaracDePourCentD = monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                             (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison *
                             (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerPlusMaison;
        if (nbCaracDePourCentD < 10) {
            nbEspaces = strlen("Loyer 2 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 1; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 100 && nbCaracDePourCentD >= 10) {
            nbEspaces = strlen("Loyer 2 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 2; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 1000 && nbCaracDePourCentD >= 100) {
            nbEspaces = strlen("Loyer 2 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 3; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 10000 && nbCaracDePourCentD >= 1000) {
            nbEspaces = strlen("Loyer 2 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 4; i++) {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
        printf("|");
        printf("Loyer 3 M : %d", monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                                 (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison *
                                 2 *
                                 (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerPlusMaison);
        nbCaracDePourCentD = monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                             (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison *
                             2 *
                             (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerPlusMaison;
        if (nbCaracDePourCentD < 10) {
            nbEspaces = strlen("Loyer 3 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 1; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 100 && nbCaracDePourCentD >= 10) {
            nbEspaces = strlen("Loyer 3 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 2; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 1000 && nbCaracDePourCentD >= 100) {
            nbEspaces = strlen("Loyer 3 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 3; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 10000 && nbCaracDePourCentD >= 1000) {
            nbEspaces = strlen("Loyer 3 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 4; i++) {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
        printf("|");
        printf("Loyer 4 M : %d", monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                                 (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison *
                                 3 *
                                 (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerPlusMaison);
        nbCaracDePourCentD = monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                             (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison *
                             3 *
                             (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerPlusMaison;
        if (nbCaracDePourCentD < 10) {
            nbEspaces = strlen("Loyer 4 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 1; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 100 && nbCaracDePourCentD >= 10) {
            nbEspaces = strlen("Loyer 4 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 2; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 1000 && nbCaracDePourCentD >= 100) {
            nbEspaces = strlen("Loyer 4 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 3; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 10000 && nbCaracDePourCentD >= 1000) {
            nbEspaces = strlen("Loyer 4 M : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 4; i++) {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
        printf("|");
        printf("Loyer H : %d", monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                               (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison *
                               4 *
                               (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerPlusMaison);
        nbCaracDePourCentD = monopoly->tableauPropriete[numeroPropriete].loyerPropriete *
                             (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerUneMaison *
                             4 *
                             (int) monopoly->tableauPropriete[numeroPropriete].coefLoyerPlusMaison;
        if (nbCaracDePourCentD < 10) {
            nbEspaces = strlen("Loyer H : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 1; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 100 && nbCaracDePourCentD >= 10) {
            nbEspaces = strlen("Loyer H : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 2; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 1000 && nbCaracDePourCentD >= 100) {
            nbEspaces = strlen("Loyer H : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 3; i++) {
                printf(" ");
            }
        } else if (nbCaracDePourCentD < 10000 && nbCaracDePourCentD >= 1000) {
            nbEspaces = strlen("Loyer H : ");
            for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces - 4; i++) {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");


        color(1, 0);
        printf("|");
        printf("Cout Maison : %d", monopoly->tableauPropriete[numeroPropriete].prixUneMaison);
        nbEspaces = strlen("Cout Maison : %d");
        if (monopoly->tableauPropriete[numeroPropriete].prixUneMaison < 100) {
        } else if (monopoly->tableauPropriete[numeroPropriete].prixUneMaison < 1000) {
            nbEspaces++;
        }
        for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces; i++) {
            printf(" ");
        }
        printf("|");
        printf("\n");

        color(1, 0);
        printf("|");
        printf("Cout Hotel : %d", monopoly->tableauPropriete[numeroPropriete].prixUneMaison);
        nbEspaces = strlen("Cout Hotel : %d");
        if (monopoly->tableauPropriete[numeroPropriete].prixUneMaison < 100) {
        } else if (monopoly->tableauPropriete[numeroPropriete].prixUneMaison < 1000) {
            nbEspaces += 1;
        }
        for (int i = 0; i < TAILLECONSOLEMOINS2 - nbEspaces; i++) {
            printf(" ");
        }
        printf("|");
        printf("\n");
        for (int i = 0; i < TAILLE_UNE_CASE_CONSOLE; ++i) {
            printf("_");
        }
        printf("\n");
    } else {//pour un non batiment

        color(1, 0);
        for (int i = 0; i < TAILLE_UNE_CASE_CONSOLE_NON_BAT; ++i) {
            printf("_");
        }
        printf("\n");

        color(0, monopoly->tableauPropriete[numeroPropriete].couleurBackground);
        printf("|");

        for (int i = 0; i < TAILLECONSOLEMOINS2NONBAT; ++i) {
            printf(" ");
        }
        printf("|");
        printf("\n");
        color(1, 0);
        printf("|");
        printf("%s", monopoly->tableauPropriete[numeroPropriete].strNomRue);
        nbEspaces = strlen(monopoly->tableauPropriete[numeroPropriete].strNomRue);
        for (int i = 0; i < TAILLECONSOLEMOINS2NONBAT - nbEspaces; i++) {
            printf(" ");
        }
        printf("|");
        printf("\n");


        for (int i = 0; i < TAILLE_UNE_CASE_CONSOLE_NON_BAT; ++i) {
            printf("_");
        }
        printf("\n");


    }
}

void acheterPropriete(Monopoly *monopoly, int numeroJoueur, int numeroPropriete) {
    char choix;
    do {
        printf("Voulez-vous acheter cette propriete ? (oui: O | non: N)\n");
        afficherInfosPropriete(monopoly, monopoly->tableauJoueur[numeroJoueur].positionSurPlateau);
        fflush(stdin);
        scanf(" %c", &choix);
    } while ((choix != 'o') && (choix != 'O') && (choix != 'N') && (choix != 'n'));
    if ((choix == 'O' || choix == 'o') && haveSolde(monopoly,numeroJoueur,monopoly->tableauPropriete[numeroPropriete].prixAchatPropriete) == 1) {
        paiementBanqueChoix(monopoly, numeroJoueur, monopoly->tableauPropriete[numeroPropriete].prixAchatPropriete);
        monopoly->tableauPropriete[numeroPropriete].tableauJoueur = &monopoly->tableauJoueur[numeroJoueur];
        monopoly->tableauPropriete[numeroPropriete].numeroJoueur = numeroJoueur;
        monopoly->tableauJoueur[numeroJoueur].nombreProprietes++;
        printf("Bravo ! Vous venez d'acheter %s pour %d euros. \n",
               monopoly->tableauPropriete[numeroPropriete].strNomRue,
               monopoly->tableauPropriete[numeroPropriete].prixAchatPropriete);
    } else if ((choix == 'O' || choix == 'o') && haveSolde(monopoly,numeroJoueur,monopoly->tableauPropriete[numeroPropriete].prixAchatPropriete) == 0){
        printf("Pas assez de solde pour acheter cette propriete. \n");
    }
    else {
        printf("Dommage ! Vous passez a cote d'une affaire en or ! \n");
    }
}



//on prend en paramètre l'adresse de la structure monopoly, le numéro de la propriété à acheter et le joueur qui veut l'acheter.
//on actualise son solde, et on met le pointeur Joueur du tableauPropriete sur le joueur qui vient d'acheter cette case.


int isMaisonSurCase(Monopoly *monopoly, int numeroPropriete) {
    if(monopoly->tableauPropriete[numeroPropriete].nombreMaison == 0){
        return 0;
    } else {
        return 1;
    }
}

int is4MaisonSurCase(Monopoly *monopoly, int numeroPropriete) {
    return (monopoly->tableauPropriete[numeroPropriete].nombreMaison == 4) ? 1 : 0;
}

int isHotelSurCase(Monopoly *monopoly, int numeroPropriete) {
    return (monopoly->tableauPropriete[numeroPropriete].nombreHotel == 1) ? 1 : 0;
}

void acheterMaisons(Monopoly *monopoly, int numeroCase, int numeroJoueur, int nombreMaisonSouhaitee) {
    monopoly->tableauJoueur[numeroJoueur].nombreMaisons += nombreMaisonSouhaitee;
    monopoly->tableauPropriete[numeroCase].nombreMaison += nombreMaisonSouhaitee;
    monopoly->nombreMaisonBanque -= nombreMaisonSouhaitee;

}

void acheterHotel(Monopoly *monopoly, int numeroCase, int numeroJoueur) {
    monopoly->tableauJoueur[numeroJoueur].nombreHotels += 1;
    monopoly->tableauPropriete[numeroCase].nombreHotel += 1;
    monopoly->nombreMaisonBanque += monopoly->tableauPropriete[numeroCase].nombreMaison;
    monopoly->tableauPropriete[numeroCase].nombreMaison = 0;
    monopoly->nombreHotelBanque -= 1;
}

void vendreMaisons(Monopoly *monopoly, int nombreDeMaisonQueJoueurVeutVendre, int numeroJoueur, int numeroPropriete) {

    monopoly->tableauJoueur[numeroJoueur].soldeJoueur +=
            nombreDeMaisonQueJoueurVeutVendre * monopoly->tableauPropriete[numeroPropriete].prixUneMaison / 2;
    monopoly->tableauJoueur[numeroJoueur].nombreMaisons -= nombreDeMaisonQueJoueurVeutVendre;
    monopoly->tableauPropriete[numeroPropriete].nombreMaison -= nombreDeMaisonQueJoueurVeutVendre;
    monopoly->nombreMaisonBanque += nombreDeMaisonQueJoueurVeutVendre;

}

void vendreHotel(Monopoly *monopoly, int numeroPropriete, int numeroJoueur) {
    monopoly->tableauJoueur[numeroJoueur].soldeJoueur +=
            monopoly->tableauPropriete[numeroPropriete].prixUneMaison / 2;
    monopoly->tableauJoueur[numeroJoueur].nombreHotels -= 1;
    monopoly->tableauPropriete[numeroPropriete].nombreHotel -= 1;
    monopoly->tableauPropriete[numeroPropriete].nombreMaison += 4;
    monopoly->tableauJoueur[numeroJoueur].nombreMaisons += 4;
    monopoly->nombreMaisonBanque -= 4;
    monopoly->nombreHotelBanque += 1;
}

void actualiserLoyer(Monopoly *monopoly) {
    for (int i = 0; i < 16; i++) {
        if (monopoly->tableauPropriete[2 * i + 1].tableauJoueur == NULL) {
        } else {
            if (monopoly->tableauPropriete[2 * i + 1].nombreMaison == 1) {
                monopoly->tableauPropriete[2 * i + 1].loyerActuel =
                        monopoly->tableauPropriete[2 * i + 1].loyerPropriete *
                        (int) monopoly->tableauPropriete[2 * i + 1].coefLoyerUneMaison;
            } else if (monopoly->tableauPropriete[2 * i + 1].nombreMaison > 1) {
                monopoly->tableauPropriete[2 * i + 1].loyerActuel =
                        monopoly->tableauPropriete[2 * i + 1].loyerPropriete *
                        (int) monopoly->tableauPropriete[2 * i + 1].coefLoyerUneMaison *
                        ((monopoly->tableauPropriete[2 * i + 1].nombreMaison - 1)  *
                         (int) monopoly->tableauPropriete[2 * i + 1].coefLoyerPlusMaison);
            } else if (monopoly->tableauPropriete[2 * i + 1].nombreHotel == 1) {
                monopoly->tableauPropriete[2 * i + 1].loyerActuel =
                        monopoly->tableauPropriete[2 * i + 1].loyerPropriete *
                        (int) monopoly->tableauPropriete[2 * i + 1].coefLoyerUneMaison *
                        (5 *
                         (int) monopoly->tableauPropriete[2 * i + 1].coefLoyerPlusMaison);

            } else if (monopoly->tableauPropriete[2 * i + 1].nombreMaison == 0 &&

                       monopoly->tableauPropriete[2 * i + 1].nombreHotel == 0 &&//double loyer si meme groupe
                       ((monopoly->tableauPropriete[2 * i + 1].numeroJoueur ==
                         monopoly->tableauPropriete[2 * i + 1 + 2].numeroJoueur &&
                         monopoly->tableauPropriete[2 * i + 1].couleurBackground ==
                         monopoly->tableauPropriete[2 * i + 1 + 2].couleurBackground) ||
                        monopoly->tableauPropriete[2 * i + 1].numeroJoueur ==
                        monopoly->tableauPropriete[2 * i + 1 - 2].numeroJoueur &&
                        monopoly->tableauPropriete[2 * i + 1].couleurBackground ==
                        monopoly->tableauPropriete[2 * i + 1 - 2].couleurBackground)) {
                monopoly->tableauPropriete[2 * i + 1].loyerActuel =
                        monopoly->tableauPropriete[2 * i + 1].loyerPropriete * 2;
            } else {
                monopoly->tableauPropriete[2 * i + 1].loyerActuel = monopoly->tableauPropriete[2 * i +
                                                                                               1].loyerPropriete;
            }
        }
    }

}

/*void voulezVousAcheterMaison(Monopoly *monopoly, int numeroJoueur) {
    char reponseCarac;
    int reponseInt;
    int numeroCase;

    printf("Voulez-vous acheter une maison ? (Y : Oui, N : Non)\n");
    do {
        scanf(" %c", &reponseCarac);
    } while (reponseCarac != 'Y' && reponseCarac != 'N');

    if (reponseCarac == 'Y') {
        do {
            printf("Sur quelle propriete voulez vous implenter ces maisons ?\n");
            scanf(" %d", &numeroCase);
        } while (numeroCase > 31 || numeroCase < 0 || isProprieteNonAchetable(monopoly, numeroCase) == 1 ||
                 isProprieteDeJoueurX(monopoly, numeroCase, numeroJoueur) == 0);
        printf("Combien de maisons desirez-vous ? (Entre 1 et %d)\n",
               5 - monopoly->tableauPropriete[numeroCase].nombreMaison);
        do {
            scanf(" %d", &reponseInt);
        } while (reponseInt > monopoly->tableauPropriete[numeroCase].nombreMaison && reponseInt < 1);
        if (haveSolde(monopoly, numeroJoueur, reponseInt * monopoly->tableauPropriete[numeroCase].prixUneMaison)) {
            acheterMaisons(monopoly, numeroCase, numeroJoueur, reponseInt);
        } else {
            printf("Solde inssufisant\n");
        }
    } else {
        printf("Vous ne souhaitez pas acheter de maisons.\n");
    }

}*/


void voulezVousAcheterMaison(Monopoly *monopoly, int numeroJoueur) {
    char reponseCarac;
    int reponseInt;
    int numeroCase;
    printf("Voulez-vous acheter une maison ou un hotel? (Y : Oui, N : Non)\n");
    do {
        scanf(" %c", &reponseCarac);
    } while (reponseCarac != 'Y' && reponseCarac != 'N' && reponseCarac != 'y' && reponseCarac != 'n');
    if ((reponseCarac == 'Y' || reponseCarac == 'y') && isProprieteGroupe(monopoly, numeroJoueur) == 0) {
        printf("Vous ne possedez pas un groupe de propriete. \n");
    } else if ((reponseCarac == 'Y' || reponseCarac == 'y') && monopoly->nombreMaisonBanque != 0 &&
               monopoly->tableauJoueur[numeroJoueur].nombreProprietes != 0) {
        do {
            afficherToutesPropJoueur(monopoly, numeroJoueur);
            color(15, 0);
            printf("Sur quelle propriete voulez vous implenter ces maisons ou l'hotel ? (La proriete doit vous appartenir et faire partir d'un groupe) \n");
            scanf(" %d", &numeroCase);
        } while ((numeroCase > 31 || numeroCase < 0) ||
                 (isProprieteDeJoueurX(monopoly, numeroCase, numeroJoueur) == 0) ||
                 (isProprieteNonAchetable(monopoly, numeroCase) == 1) ||
                 !((monopoly->tableauPropriete[numeroCase].numeroJoueur ==
                    monopoly->tableauPropriete[numeroCase + 2].numeroJoueur &&
                    monopoly->tableauPropriete[numeroCase].couleurBackground ==
                    monopoly->tableauPropriete[numeroCase + 2].couleurBackground) ||
                   (monopoly->tableauPropriete[numeroCase].numeroJoueur ==
                    monopoly->tableauPropriete[numeroCase - 2].numeroJoueur &&
                    monopoly->tableauPropriete[numeroCase].couleurBackground ==
                    monopoly->tableauPropriete[numeroCase - 2].couleurBackground)));
        color(15, 0);
        printf("Combien de maisons ou d'hotel desirez-vous ? (Entre 1 et %d)\n",
               5 - monopoly->tableauPropriete[numeroCase].nombreMaison);
        do {
            scanf(" %d", &reponseInt);
        } while (reponseInt > 5 - monopoly->tableauPropriete[numeroCase].nombreMaison && reponseInt < 1);
        if (haveSolde(monopoly, numeroJoueur, reponseInt * monopoly->tableauPropriete[numeroCase].prixUneMaison) == 1 &&
            (monopoly->tableauPropriete[numeroCase].nombreMaison + reponseInt) <= 4) {
            acheterMaisons(monopoly, numeroCase, numeroJoueur, reponseInt);
            paiementBanqueChoix(monopoly, numeroJoueur, monopoly->tableauPropriete[numeroCase].prixUneMaison * reponseInt);
            printf("Vous avez acheter %d maisons pour %d euros sur %s. \n", reponseInt,
                   monopoly->tableauPropriete[numeroCase].prixUneMaison * reponseInt,
                   monopoly->tableauPropriete[numeroCase].strNomRue);
        } else if (monopoly->tableauPropriete[numeroCase].nombreMaison == 4 &&
                   haveSolde(monopoly, numeroJoueur, monopoly->tableauPropriete[numeroCase].prixUneMaison) == 1) {
            printf("Vous avez deja 4 maisons. Vous devez acheter un hotel maintenant.\n");
            do {
                printf("Voulez-vous acheter un hotel sur %s ? (Y: oui , N: non)\n",
                       monopoly->tableauPropriete[numeroCase].strNomRue);
                fflush(stdin);
                scanf("%c", &reponseCarac);
            } while (reponseCarac != 'Y' && reponseCarac != 'N');
            if (reponseCarac == 'Y' && monopoly->nombreHotelBanque != 0 && monopoly->tableauPropriete[numeroCase].nombreHotel == 0) {
                acheterHotel(monopoly, numeroCase, numeroJoueur);
                paiementBanqueChoix(monopoly, numeroJoueur, monopoly->tableauPropriete[numeroCase].prixUneMaison);
                printf("Vous avez acheter un hotel pour %d euros sur %s\n",
                       monopoly->tableauPropriete[numeroCase].prixUneMaison,
                       monopoly->tableauPropriete[numeroCase].strNomRue);
            }
            else if (reponseCarac == 'Y' && monopoly->nombreHotelBanque != 0 && monopoly->tableauPropriete[numeroCase].nombreHotel != 0){
                printf("Vous avez deja un hotel sur %s", monopoly->tableauPropriete[numeroCase].strNomRue);
            }
            else if (reponseCarac == 'Y' && monopoly->nombreHotelBanque == 0) {
                printf("Dommage, plus assez d'hotel en stock.\n");
            } else if (reponseCarac == 'N') {
                printf("Dommage, une prochaine fois.\n");
            }
        } else if ((monopoly->tableauPropriete[numeroCase].nombreMaison + reponseInt) == 5 &&
                   haveSolde(monopoly, numeroJoueur,
                             monopoly->tableauPropriete[numeroCase].prixUneMaison * (reponseInt - 1)) == 1) {
            printf("Vous ne pouvez ajouter que %d maisons car vous avez deja %d maisons sur cette propriete. \n",
                   reponseInt - 1, monopoly->tableauPropriete[numeroCase].nombreMaison);
            do {
                printf("Voulez-vous ajouter %d maisons ? (Y: oui , N: non)\n", reponseInt - 1);
                scanf(" %c", &reponseCarac);
            } while (reponseCarac != 'Y' && reponseCarac != 'N');
            if (reponseCarac == 'Y') {
                acheterMaisons(monopoly, numeroCase, numeroJoueur, (reponseInt - 1));
                paiementBanqueChoix(monopoly, numeroJoueur,
                                    monopoly->tableauPropriete[numeroCase].prixUneMaison * (reponseInt - 1));
                printf("Vous avez acheter %d maisons pour %d euros sur %s. \n", reponseInt - 1,
                       monopoly->tableauPropriete[numeroCase].prixUneMaison * (reponseInt - 1),
                       monopoly->tableauPropriete[numeroCase].strNomRue);
            } else {
                printf("Dommage, une prochaine fois. \n");
            }
        } else if (
                haveSolde(monopoly, numeroJoueur, reponseInt * monopoly->tableauPropriete[numeroCase].prixUneMaison) ==
                0) {
            printf("Pas assez de solde pour acheter %d maisons.\n", reponseInt);
        } else if (monopoly->tableauPropriete[numeroCase].nombreMaison == 4 &&
                   haveSolde(monopoly, numeroJoueur, monopoly->tableauPropriete[numeroCase].prixUneMaison) == 0) {
            printf("Pas assez de solde pour acheter un hotel. \n");
        }
    } else if ((reponseCarac == 'Y' || reponseCarac == 'y') && monopoly->nombreMaisonBanque == 0) {
        printf("Plus assez de maison en stock.\n");
    } else if (reponseCarac == 'N' || reponseCarac == 'n') {
        printf("\nDommage, une prochaine fois !\n");
    }
}


void voulezVousVendreMaison(Monopoly *monopoly, int numeroJoueur) {
    char reponseCarac;
    int reponseInt;
    int numeroCase;
    printf("Voulez-vous vendre une maison ou un hotel? (Y : Oui, N : Non)\n");
    do {
        scanf(" %c", &reponseCarac);
    } while (reponseCarac != 'Y' && reponseCarac != 'N' && reponseCarac != 'y' && reponseCarac != 'n');
    if ((reponseCarac == 'Y' || reponseCarac == 'y') && monopoly->tableauJoueur[numeroJoueur].nombreMaisons != 0 ||
        monopoly->tableauJoueur[numeroJoueur].nombreHotels != 0) {
        do {
            afficherToutesPropJoueur(monopoly, numeroJoueur);
            printf("Sur quelle propriete voulez vous vendre des maisons ou un hotel ? (La proriete doit vous appartenir) \n");
            scanf(" %d", &numeroCase);
        } while ((numeroCase > 31 || numeroCase < 0) && isProprieteDeJoueurX(monopoly, numeroCase, numeroJoueur) == 0 &&
                 isProprieteNonAchetee(monopoly, numeroCase) == 1 &&
                isProprieteGroupe(monopoly, numeroJoueur) == 0);
        if (monopoly->tableauPropriete[numeroCase].nombreHotel == 1) {
            do {
                color(15, 0);
                printf("Voulez-vous vendre votre hotel pour %d euros? (Y : oui N : non)\n",
                       monopoly->tableauPropriete[numeroCase].prixUneMaison / 2);
                scanf(" %c", &reponseCarac);
            } while (reponseCarac != 'Y' && reponseCarac != 'N');
            if (reponseCarac == 'Y') {
                vendreHotel(monopoly, numeroCase, numeroJoueur);
                printf("Vous vendez votre hotel a %s pour %d euros.\n",
                       monopoly->tableauPropriete[numeroCase].strNomRue,
                       monopoly->tableauPropriete[numeroCase].prixUneMaison / 2);
            } else {
                printf("Vous decidez de ne pas vendre votre hotel.\n");
            }
        }
        if (monopoly->tableauPropriete[numeroCase].nombreMaison <= 4) {
            color(15, 0);
            printf("Combien de maisons voulez-vous vendre ? (Entre 0 et %d)\n",
                   monopoly->tableauPropriete[numeroCase].nombreMaison);
            do {
                scanf(" %d", &reponseInt);
            } while (reponseInt > monopoly->tableauPropriete[numeroCase].nombreMaison && reponseInt < 1);
            printf("Voulez-vous vendre %d maisons a %s pour %d euros ? (Y : oui N : non)\n", reponseInt,
                   monopoly->tableauPropriete[numeroCase].strNomRue,
                   reponseInt * monopoly->tableauPropriete[numeroCase].prixUneMaison / 2);
            do {
                scanf("%c", &reponseCarac);
            } while (reponseCarac != 'Y' && reponseCarac != 'N');
            if (reponseCarac == 'Y') {
                vendreMaisons(monopoly, reponseInt, numeroJoueur, numeroCase);
                printf("Vous vendez %d maison a %s pour %d euros.\n", reponseInt,
                       monopoly->tableauPropriete[numeroCase].strNomRue,
                       reponseInt * monopoly->tableauPropriete[numeroCase].prixUneMaison / 2);
            } else {
                printf("Vous decidez de ne pas vendre vos maisons.\n");
            }
        }
    } else if (
            (reponseCarac == 'Y' || reponseCarac == 'y') && monopoly->tableauJoueur[numeroJoueur].nombreMaisons == 0 ||
            monopoly->tableauJoueur[numeroJoueur].nombreHotels == 0) {
        printf("Vous ne possedez pas de maison.\n");
    } else {
        printf("Vous decidez de ne rien vendre.\n");
    }

}


void joueurXChezJoueurX(Monopoly *monopoly, int fromJoueur, int postionJoueur) {
    if (monopoly->tableauPropriete[postionJoueur].tableauJoueur != NULL &&
        fromJoueur == monopoly->tableauPropriete[postionJoueur].numeroJoueur) {
        printf("On est bien chez soi ! \n");
    } else if (monopoly->tableauPropriete[postionJoueur].tableauJoueur != NULL &&
               fromJoueur != monopoly->tableauPropriete[postionJoueur].numeroJoueur && monopoly->tableauPropriete[postionJoueur].isHypothequee == 0) {
        actualiserLoyer(monopoly);
        printf("\n%s : \n", monopoly->tableauPropriete[postionJoueur].strNomRue);
        paiementJoueur(monopoly, fromJoueur, monopoly->tableauPropriete[postionJoueur].numeroJoueur,
                       monopoly->tableauPropriete[postionJoueur].loyerActuel);
    }
    else if (monopoly->tableauPropriete[postionJoueur].tableauJoueur != NULL &&
             fromJoueur != monopoly->tableauPropriete[postionJoueur].numeroJoueur && monopoly->tableauPropriete[postionJoueur].isHypothequee == 1){
        printf("Vous etes sur une propriete hypothequee. \n");
    }
}

int joueurCasePropriete(Monopoly *monopoly, int numeroJoueur) {
    for (int i = 0; i < 16; ++i) {
        if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 1 + 2 * i) {
            return 1;
        }
    }
    return 0;
}

void joueurActionCaseProprietes(Monopoly *monopoly, int numeroJoueur) {
    if (joueurCasePropriete(monopoly, numeroJoueur) == 1 &&
        isProprieteNonAchetee(monopoly, monopoly->tableauJoueur[numeroJoueur].positionSurPlateau) == 1) {
        acheterPropriete(monopoly, numeroJoueur, monopoly->tableauJoueur[numeroJoueur].positionSurPlateau);
    }
}

int isProprieteGroupe(Monopoly *monopoly, int numeroJoueur) {
    int groupe = 0;
    int numeroCase;
    for (int i = 0; i < 16; i++) {
        numeroCase = 1 + 2 * i;
        if (isProprieteDeJoueurX(monopoly, numeroCase, numeroJoueur) == 1 &&
            ((monopoly->tableauPropriete[numeroCase].numeroJoueur ==
              monopoly->tableauPropriete[numeroCase + 2].numeroJoueur &&
              monopoly->tableauPropriete[numeroCase].couleurBackground ==
              monopoly->tableauPropriete[numeroCase + 2].couleurBackground) ||
             (monopoly->tableauPropriete[numeroCase].numeroJoueur ==
              monopoly->tableauPropriete[numeroCase - 2].numeroJoueur &&
              monopoly->tableauPropriete[numeroCase].couleurBackground ==
              monopoly->tableauPropriete[numeroCase - 2].couleurBackground))) {
            groupe = 1;
        } else {
        }
    }
    if (groupe == 1) {
        return 1;
    } else {
        return 0;
    }
}

void forcerVendreMaisons(Monopoly *monopoly, int numeroJoueur) {
    int numeroCase, reponseInt;
    char reponseCarac;
    do {
        afficherToutesPropJoueur(monopoly, numeroJoueur);
        color(15, 0);
        printf("Sur quelle propriete voulez vous vendre des maisons ou un hotel ? (La proriete doit vous appartenir) \n");
        scanf(" %d", &numeroCase);
    } while ((numeroCase > 31 || numeroCase < 0) || isProprieteDeJoueurX(monopoly, numeroCase, numeroJoueur) == 0 ||
             isProprieteNonAchetee(monopoly, numeroCase) == 1 || isProprieteGroupe(monopoly, numeroJoueur) == 0 ||
            isMaisonSurCase(monopoly, numeroCase) == 0);
    if (monopoly->tableauPropriete[numeroCase].nombreHotel == 1) {
        do {
            color(15, 0);
            printf("Vous allez vendre votre hotel pour %d euros a %s ? (Y : oui)\n",
                   monopoly->tableauPropriete[numeroCase].prixUneMaison / 2,
                   monopoly->tableauPropriete[numeroCase].strNomRue);
            scanf(" %c", &reponseCarac);
        } while (reponseCarac != 'Y');
        vendreHotel(monopoly, numeroCase, numeroJoueur);
        printf("Vous vendez votre hotel a %s pour %d euros.\n", monopoly->tableauPropriete[numeroCase].strNomRue,
               (monopoly->tableauPropriete[numeroCase].prixUneMaison / 2));
    }
    if (monopoly->tableauPropriete[numeroCase].nombreMaison <= 4) {
        color(15, 0);
        printf("Combien de maisons voulez-vous vendre ? (Entre 1 et %d)\n",
               monopoly->tableauPropriete[numeroCase].nombreMaison);
        do {
            scanf(" %d", &reponseInt);
        } while (reponseInt > monopoly->tableauPropriete[numeroCase].nombreMaison || reponseInt < 1);//ou et ??
        printf("Voulez-vous vendre %d maisons a %s pour %d euros ? (Y : oui N : non)\n", reponseInt,
               monopoly->tableauPropriete[numeroCase].strNomRue,
               reponseInt * monopoly->tableauPropriete[numeroCase].prixUneMaison / 2);
        do {
            scanf("%c", &reponseCarac);
        } while (reponseCarac != 'Y' && reponseCarac != 'N');
        if (reponseCarac == 'Y') {
            vendreMaisons(monopoly, reponseInt, numeroJoueur, numeroCase);
            printf("Vous vendez %d maison a %s pour %d euros.\n", reponseInt,
                   monopoly->tableauPropriete[numeroCase].strNomRue,
                   reponseInt * monopoly->tableauPropriete[numeroCase].prixUneMaison / 2);
        } else {
            printf("Vous decidez de ne pas vendre vos maisons.\n");
        }
    }
}
