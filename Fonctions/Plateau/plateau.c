#include "plateau.h"
#include "../../Structures/Structures.h"
#include "../Monnaie/monnaie.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Immobilier/immobilier.h"

#ifdef WIN32

#include <windows.h>

void color(int t, int f) {
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, f * 16 + t);
}

#else
void color(int t, int f) {}
#endif


void afficherHaut(Monopoly *monopoly) {

    for (int i = 0; i < 113; ++i) {
        color(0, 0);
        printf("=");
    }
    printf("\n");
}

void afficherBas(Monopoly *monopoly) {

    for (int i = 0; i < 113; ++i) {
        color(0, 0);
        printf("_");
    }
    printf("\n");
}

void afficherCouleurCase(Monopoly *monopoly, int ligne, int colonne) {
    for (int i = ligne; i < colonne; i++) {
        color(0, monopoly->tableauPropriete[i].couleurBackground);
        printf("|");
        if (monopoly->tableauPropriete[i].nombreMaison == 0 && monopoly->tableauPropriete[i].isBatiment == 1 &&
            monopoly->tableauPropriete[i].nombreHotel != 1) {
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauPropriete[i].nombreMaison == 1 && monopoly->tableauPropriete[i].isBatiment == 1) {
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
            printf("M");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauPropriete[i].nombreMaison == 2 && monopoly->tableauPropriete[i].isBatiment == 1) {
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
            printf("MM");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }

        } else if (monopoly->tableauPropriete[i].nombreMaison == 3 && monopoly->tableauPropriete[i].isBatiment == 1) {
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            printf("MMM");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauPropriete[i].nombreMaison == 4 && monopoly->tableauPropriete[i].isBatiment == 1) {
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            printf("MMMM");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauPropriete[i].nombreHotel == 1 && monopoly->tableauPropriete[i].isBatiment == 1) {
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
            printf("H");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else {
            for (int k = 0; k < (TAILLE_1_CASE_CONSOLE); k++) {
                printf(" ");
            }

        }
    }
    printf("|");
    printf("\n");
}

void affichageSolde(Monopoly *monopoly, int numeroJoueur) {
    if(numeroJoueur == (monopoly->nombreJoueurs - 1)){
        printf("Solde de %s : %d\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
    } else {
        printf("Solde de %s : %d", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
    }

}

void afficherSoldeDansPlateau(Monopoly* monopoly){
    color(15, 0);
    if (monopoly->nombreJoueurs == 1) {
        printf("\t\t\t");
        affichageSolde(monopoly, 0);
    } else if (monopoly->nombreJoueurs == 2) {
        printf("\t\t");
        affichageSolde(monopoly, 0);
        printf("\t\t");
        affichageSolde(monopoly, 1);
    } else if (monopoly->nombreJoueurs == 3) {
        printf("\t");
        affichageSolde(monopoly, 0);
        printf("\t\t");
        affichageSolde(monopoly, 1);
        printf("\t\t");
        affichageSolde(monopoly, 2);
    } else if (monopoly->nombreJoueurs == 4) {
        affichageSolde(monopoly, 0);
        printf("\t\t");
        affichageSolde(monopoly, 1);
        printf("\t\t");
        affichageSolde(monopoly, 2);
        printf("\t\t");
        affichageSolde(monopoly, 3);
    } else {
    }
}

void afficherNomRue(Monopoly *monopoly, int ligne, int colonne) {
    int nbEspaces = 0;
    for (int j = ligne; j < colonne; j++) {
        color(0, 0);
        printf("|");
        printf("%s", monopoly->tableauPropriete[j].strNomRueInitiales);
        nbEspaces = strlen(monopoly->tableauPropriete[j].strNomRueInitiales);
        for (int i = 0; i < (TAILLE_1_CASE_CONSOLE - nbEspaces); i++) {
            printf(" ");
        }

    }
    printf("|");
    printf("\n");
}

void afficherJoueur(Monopoly *monopoly, int ligne, int colonne) {

    for (int i = ligne; i < colonne; ++i) {


        if (monopoly->tableauJoueur[0].positionSurPlateau == i &&
            monopoly->tableauJoueur[1].positionSurPlateau == i &&
            monopoly->tableauJoueur[2].positionSurPlateau == i &&
            monopoly->tableauJoueur[3].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[0].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[0].caracterePion);
            color(monopoly->tableauJoueur[1].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[1].caracterePion);
            color(monopoly->tableauJoueur[2].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[2].caracterePion);
            color(monopoly->tableauJoueur[3].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[3].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[0].positionSurPlateau == i &&
                   monopoly->tableauJoueur[1].positionSurPlateau == i &&
                   monopoly->tableauJoueur[2].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[0].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[0].caracterePion);
            color(monopoly->tableauJoueur[1].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[1].caracterePion);
            color(monopoly->tableauJoueur[2].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[2].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[0].positionSurPlateau == i &&
                   monopoly->tableauJoueur[1].positionSurPlateau == i &&
                   monopoly->tableauJoueur[3].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[0].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[0].caracterePion);
            color(monopoly->tableauJoueur[1].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[1].caracterePion);
            color(monopoly->tableauJoueur[3].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[3].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[0].positionSurPlateau == i &&
                   monopoly->tableauJoueur[2].positionSurPlateau == i &&
                   monopoly->tableauJoueur[3].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[0].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[0].caracterePion);
            color(monopoly->tableauJoueur[2].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[2].caracterePion);
            color(monopoly->tableauJoueur[3].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[3].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[1].positionSurPlateau == i &&
                   monopoly->tableauJoueur[2].positionSurPlateau == i &&
                   monopoly->tableauJoueur[3].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[1].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[1].caracterePion);
            color(monopoly->tableauJoueur[2].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[2].caracterePion);
            color(monopoly->tableauJoueur[3].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[3].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[0].positionSurPlateau == i &&
                   monopoly->tableauJoueur[1].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[0].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[0].caracterePion);
            color(monopoly->tableauJoueur[1].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[1].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[0].positionSurPlateau == i &&
                   monopoly->tableauJoueur[3].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[0].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[0].caracterePion);
            color(monopoly->tableauJoueur[3].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[3].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[0].positionSurPlateau == i &&
                   monopoly->tableauJoueur[2].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[0].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[0].caracterePion);
            color(monopoly->tableauJoueur[2].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[2].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[1].positionSurPlateau == i &&
                   monopoly->tableauJoueur[2].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[1].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[1].caracterePion);
            color(monopoly->tableauJoueur[2].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[2].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[1].positionSurPlateau == i &&
                   monopoly->tableauJoueur[3].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[1].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[1].caracterePion);
            color(monopoly->tableauJoueur[3].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[3].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[2].positionSurPlateau == i &&
                   monopoly->tableauJoueur[3].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2 - 1; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[2].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[2].caracterePion);
            color(monopoly->tableauJoueur[3].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[3].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[0].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[0].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[0].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[1].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[1].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[1].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[2].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[2].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[2].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else if (monopoly->tableauJoueur[3].positionSurPlateau == i) {
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
            color(monopoly->tableauJoueur[3].couleurJoueur, 0);
            printf("%c", monopoly->tableauJoueur[3].caracterePion);
            color(0, 0);
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE / 2; j++) {
                printf(" ");
            }
        } else {
            color(0, 0);
            printf("|");
            for (int j = 0; j < TAILLE_1_CASE_CONSOLE; ++j) {
                printf(" ");
            }
        }
    }
    printf("|");
    printf("\n");

}

void afficherPrix(Monopoly *monopoly, int ligne, int colonne) {
    int nbEspaces = 0, entier;
    for (int i = ligne; i < colonne; i++) {
        if (monopoly->tableauPropriete[i].tableauJoueur == NULL && monopoly->tableauPropriete[i].isBatiment == 1) {
            printf("|");
            printf("Prix : %d", monopoly->tableauPropriete[i].prixAchatPropriete);
            entier = monopoly->tableauPropriete[i].prixAchatPropriete;

            if (entier <= 99 && entier >= 10) {
                nbEspaces = strlen("Prix : 10");
            } else if (entier >= 100 && entier <= 999) {
                nbEspaces = strlen("Prix : 100");
            } else if (entier >= 1000 && entier <= 9999) {
                nbEspaces = strlen("Prix : 1000");
            } else if (entier <= 9 && entier >= 0) {
                nbEspaces = strlen("Prix : 0");
            }
            for (int j = 0; j < (TAILLE_1_CASE_CONSOLE - nbEspaces); j++) {
                printf(" ");
            }

        } else if (monopoly->tableauPropriete[i].tableauJoueur != NULL &&
                   monopoly->tableauPropriete[i].isHypothequee != 1 && monopoly->tableauPropriete[i].isBatiment == 1) {
            printf("|");
            printf("Loyer : %d", monopoly->tableauPropriete[i].loyerActuel);
            entier = monopoly->tableauPropriete[i].loyerActuel;
            if (entier <= 99 && entier >= 10) {
                nbEspaces = strlen("Loyer : 10");
            } else if (entier >= 100 && entier <= 999) {
                nbEspaces = strlen("Loyer : 100");
            } else if (entier >= 1000 && entier <= 9999) {
                nbEspaces = strlen("Loyer : 1000");
            } else if (entier <= 9 && entier >= 0) {
                nbEspaces = strlen("Loyer : 0");
            }
            for (int k = 0; k < (TAILLE_1_CASE_CONSOLE - nbEspaces); k++) {
                printf(" ");
            }
        } else if (monopoly->tableauPropriete[i].isBatiment == 1) {
            printf("|");
            printf("Hypothequee");
            nbEspaces = strlen("Hypothequee");
            for (int k = 0; k < (TAILLE_1_CASE_CONSOLE - nbEspaces); k++) {
                printf(" ");
            }
        } else {
            printf("|");
            for (int k = 0; k < (TAILLE_1_CASE_CONSOLE); k++) {
                printf(" ");
            }
        }
    }

    printf("|");
    printf("\n");
}

void afficherNomJoueurPlateau(Monopoly *monopoly, int ligne, int colonne) {


    int nbEspaces = 0;
    for (int j = ligne; j < colonne; j++) {
        if (isProprieteNonAchetee(monopoly, j) == 0) {
#ifdef WIN32
            int numeroJoueur = -1;//monopoly->tableauPropriete[j].numeroJoueur;
            for (int i = 0; i <= monopoly->nombreJoueurs; i++) {
                (isProprieteDeJoueurX(monopoly, j, i) == 1) ? numeroJoueur = i : 0;
            }

#else
            int numeroJoueur;
            for (int i = 0; i <= monopoly->nombreJoueurs; i++) {
                (isProprieteDeJoueurX(monopoly, j, i) == 1) ? numeroJoueur = i : 0;
            }
#endif
            color(0, 0);
            printf("|");
            printf("  A %s", monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
            nbEspaces = strlen(monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
            nbEspaces += strlen("  A ");
            for (int i = 0; i < (TAILLE_1_CASE_CONSOLE - nbEspaces); i++) {
                printf(" ");
            }
        } else {
            printf("|");
            for (int i = 0; i < TAILLE_1_CASE_CONSOLE; ++i) {
                printf(" ");
            }

        }

    }
    printf("|");
    printf("\n");

}

void afficherCases(Monopoly* monopoly) {

    afficherHaut(monopoly);
    afficherCouleurCase(monopoly, 0, 8);
    afficherNomRue(monopoly, 0, 8);
    afficherJoueur(monopoly, 0, 8);
    afficherPrix(monopoly, 0, 8);
    afficherNomJoueurPlateau(monopoly, 0, 8);
    afficherBas(monopoly);
    afficherCouleurCase(monopoly, 8, 16);
    afficherNomRue(monopoly, 8, 16);
    afficherJoueur(monopoly, 8, 16);
    afficherPrix(monopoly, 8, 16);
    afficherNomJoueurPlateau(monopoly, 8, 16);
    afficherBas(monopoly);
    afficherCouleurCase(monopoly, 16, 24);
    afficherNomRue(monopoly, 16, 24);
    afficherJoueur(monopoly, 16, 24);
    afficherPrix(monopoly, 16, 24);
    afficherNomJoueurPlateau(monopoly, 16, 24);
    afficherBas(monopoly);
    afficherCouleurCase(monopoly, 24, 32);
    afficherNomRue(monopoly, 24, 32);
    afficherJoueur(monopoly, 24, 32);
    afficherPrix(monopoly, 24, 32);
    afficherNomJoueurPlateau(monopoly, 24, 32);
    afficherHaut(monopoly);
    afficherSoldeDansPlateau(monopoly);
}

void afficherPlateau(Monopoly *monopoly) {

    for (int i = 0; i < 8; ++i) {
        printf("");

    }


}

void avancerJoueurXCases(Monopoly *monopoly, int numeroJoueur, int nombreDeCases) {

    int numeroCasePrecedent = monopoly->tableauJoueur[numeroJoueur].positionSurPlateau;

    if ((numeroCasePrecedent + nombreDeCases) > 31) {

        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = (numeroCasePrecedent + nombreDeCases) - 32;

        if (monopoly->tableauJoueur[numeroJoueur].isPrisonnier == 0 &&
            monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 0) {
            banquePayeJoueur(monopoly, numeroJoueur,
                             200);//paye les 200€ de la case départ pile, verifie si n'est pas prisionnier pour aller en prison
        } else if (monopoly->tableauJoueur[numeroJoueur].isPrisonnier == 0) {
            banquePayeJoueur(monopoly, numeroJoueur, 200);//paye les 200€ classique
        }
    } else {
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau += nombreDeCases;
    }
}

void avancerJoueurXSurCaseX(Monopoly *monopoly, int numeroJoueur, int numeroCase) {
    if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau < numeroCase) {
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = numeroCase;
    } else {
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = numeroCase;
        banquePayeJoueur(monopoly, numeroJoueur, 200);
    }
}

void joueurCaseRaccourci(Monopoly *monopoly, int numeroJoueur) {
    if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 4) {
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = 12;
        afficherCases(monopoly);
        printf("%s prend un raccourci et arrive sur la case 13.\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
    } else if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 12) {
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = 20;
        afficherCases(monopoly);
        printf("%s prend un raccourci et arrive sur la case 21.\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
    } else if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 20) {
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = 28;
        afficherCases(monopoly);
        printf("%s prend un raccourci et arrive sur la case 29. \n",
               monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
    } else if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 28) {
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = 4;
        afficherCases(monopoly);
        printf("%s prend un raccourci et arrive sur la case 5.\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
        banquePayeJoueur(monopoly, numeroJoueur, 200);
    }else if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 16){
        color(15,0);
        printf("Vous etes sur le parc gratuit.\n");
    }
}