#include "cartes.h"
#include<string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "../Monnaie/monnaie.h"
#include "../Plateau/plateau.h"


// CARTES CHANCE :
void initialiserNumeroCarteChance(Monopoly *monopoly) {
    for (int i = 0; i < TAILLE_CARTES_CHANCE; ++i) {
        monopoly->tableauCartesChance[i].numeroCarte = i + 1;
    }
}

void initialiserActionCarteChance(Monopoly *monopoly) {
    strcpy(monopoly->tableauCartesChance[0].action, "Allez a la case depart.");
    strcpy(monopoly->tableauCartesChance[1].action, "Allez a [propriete 2 groupe 1].");
    strcpy(monopoly->tableauCartesChance[2].action, "Allez a [propriete 1 groupe 7].");
    strcpy(monopoly->tableauCartesChance[3].action, "La banque vous paie 50 euros.");
    strcpy(monopoly->tableauCartesChance[4].action, "Carte sortez de prison.");
    strcpy(monopoly->tableauCartesChance[5].action, "Reculez de trois case.");
    strcpy(monopoly->tableauCartesChance[6].action,
           "Allez directement en prison, vous ne passez pas par la case depart.");
    strcpy(monopoly->tableauCartesChance[7].action,
           "Vous faites des reparations sur vos proprietes : payez 25e/maison et 100e/hotel.");
    strcpy(monopoly->tableauCartesChance[8].action, "Vous avez ete elu maire, payez 50 euros a chaque joueur.");
    strcpy(monopoly->tableauCartesChance[9].action, "Exces de vitesse : payez 100 euros.");
    //EXTENSION COUPLE
    strcpy(monopoly->tableauCartesChance[10].action, "Vous etes en couple.");
}

void initialiserPositionCartePileChance(int max, int min, Monopoly *monopoly) {
    int nombreAleatoire;
    srand(time(NULL));
    for (int i = 0; i < TAILLE_CARTES_CHANCE; ++i) {
        do {
            nombreAleatoire = rand() % (max - min + 1) + min;
            monopoly->tableauCartesChance[i].positionCarteDansLaPile = nombreAleatoire;
        } while (nombreAleatoire == monopoly->tableauCartesChance[i - 1].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesChance[i - 2].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesChance[i - 3].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesChance[i - 4].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesChance[i - 5].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesChance[i - 6].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesChance[i - 7].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesChance[i - 8].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesChance[i - 9].positionCarteDansLaPile);
    }
}

void initialiserCartesChance(Monopoly *monopoly) {
    initialiserNumeroCarteChance(monopoly);
    initialiserActionCarteChance(monopoly);
    initialiserPositionCartePileChance(MAX_ALE_CARTES_CHANCE, MIN_ALE_CARTES_CHANCE, monopoly);
}

void afficherNumeroCarteChance(Monopoly *monopoly, int numeroCarte) {
    printf("Numero de carte : %d \n", monopoly->tableauCartesChance[numeroCarte].numeroCarte);
}

void afficherActionCarteChance(Monopoly *monopoly, int numeroCarte) {
    printf("%s \n", monopoly->tableauCartesChance[numeroCarte].action);
}

void afficherPositionCarteChance(Monopoly *monopoly, int numeroCarte) {
    printf("Position dans la pile : %d \n \n", monopoly->tableauCartesChance[numeroCarte].positionCarteDansLaPile);
}

void afficherCarteChance(Monopoly *monopoly, int numeroCarte) {
    afficherNumeroCarteChance(monopoly, numeroCarte);
    afficherActionCarteChance(monopoly, numeroCarte);
    afficherPositionCarteChance(monopoly, numeroCarte);
}

void afficherToutesCartesChance(Monopoly *monopoly) {
    for (int i = 0; i < TAILLE_CARTES_CHANCE; ++i) {
        afficherNumeroCarteChance(monopoly, i);
        afficherActionCarteChance(monopoly, i);
        afficherPositionCarteChance(monopoly, i);
    }
}

void afficherCarteChanceTiree(Monopoly *monopoly) {
    printf("Carte chance tiree : %d \nAction : %s \n", tirerUneCarteChance(monopoly),
           monopoly->tableauCartesChance[tirerUneCarteChance(monopoly) - 1].action);
}

int tirerUneCarteChance(Monopoly *monopoly) {
    for (int i = 0; i < TAILLE_CARTES_CHANCE; ++i) {
        if (monopoly->tableauCartesChance[i].positionCarteDansLaPile == 1) {
            return monopoly->tableauCartesChance[i].numeroCarte;
        }
    }
}

void remettreCarteChanceEnBasPile(Monopoly *monopoly) {
    for (int i = 0; i < TAILLE_CARTES_CHANCE; ++i) {
        if (monopoly->tableauCartesChance[i].positionCarteDansLaPile == 1 &&
            monopoly->tableauCartesChance[i].numeroCarte != 5 && monopoly->tableauJoueur[0].cartePrisonChance == 0 &&
            monopoly->tableauJoueur[1].cartePrisonChance == 0 && monopoly->tableauJoueur[2].cartePrisonChance == 0 &&
            monopoly->tableauJoueur[3].cartePrisonChance == 0) {
            monopoly->tableauCartesChance[i].positionCarteDansLaPile = 10;
        } else if (monopoly->tableauCartesChance[i].positionCarteDansLaPile == 1 &&
                   monopoly->tableauCartesChance[i].numeroCarte != 5 &&
                   (monopoly->tableauJoueur[0].cartePrisonChance == 1 ||
                    monopoly->tableauJoueur[1].cartePrisonChance == 1 ||
                    monopoly->tableauJoueur[2].cartePrisonChance == 1 ||
                    monopoly->tableauJoueur[3].cartePrisonChance == 1)) {
            monopoly->tableauCartesChance[i].positionCarteDansLaPile = 9;
        } else if (monopoly->tableauCartesChance[i].positionCarteDansLaPile == 1 &&
                   monopoly->tableauCartesChance[i].numeroCarte == 5) {
            monopoly->tableauCartesChance[i].positionCarteDansLaPile = 0;
        } else if (monopoly->tableauCartesChance[i].positionCarteDansLaPile == 0) {
            monopoly->tableauCartesChance[i].positionCarteDansLaPile = 0;
        } else if (monopoly->tableauCartesChance[i].positionCarteDansLaPile != 1) {
            monopoly->tableauCartesChance[i].positionCarteDansLaPile -= 1;
        }
    }
}

void donnerCartePrisonChanceJoueur(Monopoly *monopoly, int numeroJoueur) {
    if (tirerUneCarteChance(monopoly) == monopoly->tableauCartesChance[4].numeroCarte) {
        monopoly->tableauJoueur[numeroJoueur].cartePrisonChance = 1;
    }
}

void utiliseCarteChancePrison(Monopoly *monopoly, int numeroJoueur) {
    monopoly->tableauJoueur[numeroJoueur].cartePrisonChance = 0;
    monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 0;
    monopoly->tableauCartesChance[4].positionCarteDansLaPile = 10;
}

void actionCarteChanceTiree(Monopoly *monopoly, int numeroCarte, int numeroJoueur) {
    switch (numeroCarte) {
        case 1: {
            avancerJoueurXSurCaseX(monopoly, numeroJoueur, 0);
            afficherCases(monopoly);
            break;
        }
        case 2: {
            avancerJoueurXSurCaseX(monopoly, numeroJoueur, 3);
            afficherCases(monopoly);
            break;
        }
        case 3: {
            avancerJoueurXSurCaseX(monopoly, numeroJoueur, 25);
            afficherCases(monopoly);
            break;
        }
        case 4: {
            banquePayeJoueur(monopoly, numeroJoueur, 50);
            break;
        }
        case 5: {
            donnerCartePrisonChanceJoueur(monopoly, numeroJoueur);
            break;
        }
        case 6: {
            avancerJoueurXCases(monopoly, numeroJoueur, -3);
            afficherCases(monopoly);
            break;
        }
        case 7: {
            monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = 8;
            monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 1;
            afficherCases(monopoly);
            break;
        }
        case 8: {
            int valeurAPayer = monopoly->tableauJoueur[numeroJoueur].nombreMaisons * 25 +
                               monopoly->tableauJoueur[numeroJoueur].nombreHotels * 100;
            paiementBanque(monopoly, numeroJoueur, valeurAPayer);
            break;
        }
        case 9: {
            for (int i = 0; i < monopoly->nombreJoueurs; ++i) {
                if (numeroJoueur != i) {
                    paiementJoueur(monopoly, numeroJoueur, i, 50);
                }
            }
            break;
        }
        case 10: {
            paiementBanque(monopoly, numeroJoueur, 100);
            break;
        }
    }
}

void joueurCaseChance(Monopoly *monopoly, int numeroJoueur) {
    if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 14 ||
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 30) {
        afficherCarteChanceTiree(monopoly);
        actionCarteChanceTiree(monopoly, tirerUneCarteChance(monopoly), numeroJoueur);
        donnerCartePrisonChanceJoueur(monopoly, numeroJoueur);
        remettreCarteChanceEnBasPile(monopoly);
    }
}


// CARTES COMMUNAUTE :
void initialiserNumeroCarteCommunaute(Monopoly *monopoly) {
    for (int i = 0; i < TAILLE_CARTES_COMMUNAUTE; ++i) {
        monopoly->tableauCartesCommunaute[i].numeroCarte = i + 1;
    }
}

void initialiserActionCarteCommunaute(Monopoly *monopoly) {
    strcpy(monopoly->tableauCartesCommunaute[0].action, "Allez a la case depart.");
    strcpy(monopoly->tableauCartesCommunaute[1].action, "Frais de docteur. Payez 50 euros.");
    strcpy(monopoly->tableauCartesCommunaute[2].action, "Carte sortie de prison.");
    strcpy(monopoly->tableauCartesCommunaute[3].action,
           "Allez directement en prison, vous ne collectez pas votre salaire.");
    strcpy(monopoly->tableauCartesCommunaute[4].action, "Vous faites un vide grenier et gagnez 30 euros.");
    strcpy(monopoly->tableauCartesCommunaute[5].action,
           "C'est votre anniversaire, collectez 10 euros de chaque joueur.");
    strcpy(monopoly->tableauCartesCommunaute[6].action, "Vous recuperez des rentes : gagnez 100 euros.");
    strcpy(monopoly->tableauCartesCommunaute[7].action, "Payez des frais d'hopital de 100 euros.");
    strcpy(monopoly->tableauCartesCommunaute[8].action,
           "Vous avez obtenu la seconde place d'un concours de beaute : gagnez 10 euros.");
    strcpy(monopoly->tableauCartesCommunaute[9].action, "Vous heritez de 100 euros.");
#ifdef WIN32
    strcpy(monopoly->tableauCartesCommunaute[10].action,
           "DUEL ! Selectionnez un participant afin de faire un duel de des avec lui.\n"
           "Celui qui fait la plus grande valeur gagne 50 euros offert par l'autre.\n");
#else
#endif
}

void initialiserPositionCartePileCommunaute(int max, int min, Monopoly *monopoly) {
    srand(time(NULL));
    int nombreAleatoire;
    for (int i = 0; i < TAILLE_CARTES_COMMUNAUTE; ++i) {
        do {
            nombreAleatoire = rand() % (max - min + 1) + min;
            monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile = nombreAleatoire;
        } while (nombreAleatoire == monopoly->tableauCartesCommunaute[i - 1].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesCommunaute[i - 2].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesCommunaute[i - 3].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesCommunaute[i - 4].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesCommunaute[i - 5].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesCommunaute[i - 6].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesCommunaute[i - 7].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesCommunaute[i - 8].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesCommunaute[i - 9].positionCarteDansLaPile ||
                 nombreAleatoire == monopoly->tableauCartesCommunaute[i - 10].positionCarteDansLaPile);
    }
}

void initialiserCartesCommunaute(Monopoly *monopoly) {
    initialiserNumeroCarteCommunaute(monopoly);
    initialiserActionCarteCommunaute(monopoly);
    initialiserPositionCartePileCommunaute(MAX_ALE_CARTES_COMMUNAUTE, MIN_ALE_CARTES_COMMUNAUTE, monopoly);
}

void afficherNumeroCarteCommunaute(Monopoly *monopoly, int numeroCarte) {
    printf("Numero de carte : %d \n", monopoly->tableauCartesCommunaute[numeroCarte].numeroCarte);
}

void afficherActionCarteCommunaute(Monopoly *monopoly, int numeroCarte) {
    printf("%s \n", monopoly->tableauCartesCommunaute[numeroCarte].action);
}

void afficherPositionCarteCommunaute(Monopoly *monopoly, int numeroCarte) {
    printf("Position dans la pile : %d \n \n", monopoly->tableauCartesCommunaute[numeroCarte].positionCarteDansLaPile);
}

void afficherToutesCartesCommunaute(Monopoly *monopoly) {
    for (int i = 0; i < TAILLE_CARTES_COMMUNAUTE; ++i) {
        afficherNumeroCarteCommunaute(monopoly, i);
        afficherActionCarteCommunaute(monopoly, i);
        afficherPositionCarteCommunaute(monopoly, i);
    }
}

void afficherCarteCommunauteTiree(Monopoly *monopoly) {
    printf("Carte Communaute tiree : %d \nAction : %s\n", tirerUneCarteCommunaute(monopoly),
           monopoly->tableauCartesCommunaute[tirerUneCarteCommunaute(monopoly) - 1].action);
}

int tirerUneCarteCommunaute(Monopoly *monopoly) {
    for (int i = 0; i < TAILLE_CARTES_COMMUNAUTE; ++i) {
        if (monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile == 1) {
            return monopoly->tableauCartesCommunaute[i].numeroCarte;
        }
    }

}

void remettreCarteCommunauteEnBasPile(Monopoly *monopoly) {
    for (int i = 0; i < TAILLE_CARTES_COMMUNAUTE; ++i) {
        if (monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile == 1 &&
            monopoly->tableauCartesCommunaute[i].numeroCarte != 3 &&
            monopoly->tableauJoueur[0].cartePrisonCommunaute == 0 &&
            monopoly->tableauJoueur[1].cartePrisonCommunaute == 0 &&
            monopoly->tableauJoueur[2].cartePrisonCommunaute == 0 &&
            monopoly->tableauJoueur[3].cartePrisonCommunaute == 0) {
            monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile = 11;
        } else if (monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile == 1 &&
                   monopoly->tableauCartesCommunaute[i].numeroCarte != 3 &&
                   (monopoly->tableauJoueur[0].cartePrisonCommunaute == 1 ||
                    monopoly->tableauJoueur[1].cartePrisonCommunaute == 1 ||
                    monopoly->tableauJoueur[2].cartePrisonCommunaute == 1 ||
                    monopoly->tableauJoueur[3].cartePrisonCommunaute == 1)) {
            monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile = 10;
        } else if (monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile == 1 &&
                   monopoly->tableauCartesCommunaute[i].numeroCarte == 3) {
            monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile = 0;
        } else if (monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile == 0) {
            monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile = 0;
        } else if (monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile != 1) {
            monopoly->tableauCartesCommunaute[i].positionCarteDansLaPile -= 1;
        }
    }
}

void donnerCartePrisonCommunauteJoueur(Monopoly *monopoly, int numeroJoueur) {
    if (tirerUneCarteCommunaute(monopoly) == monopoly->tableauCartesCommunaute[2].numeroCarte) {
        monopoly->tableauJoueur[numeroJoueur].cartePrisonCommunaute = 1;
    }
}

void utiliseCarteCommunautePrison(Monopoly *monopoly, int numeroJoueur) {
    monopoly->tableauJoueur[numeroJoueur].cartePrisonCommunaute = 0;
    monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 0;
    monopoly->tableauCartesCommunaute[2].positionCarteDansLaPile = 10;
}


void actionCarteCommunauteTiree(Monopoly *monopoly, int numeroCarte, int numeroJoueur) {
    switch (numeroCarte) {
        case 1 : {
            avancerJoueurXSurCaseX(monopoly, numeroJoueur, 0);
            afficherCases(monopoly);
            break;
        }
        case 2 : {
            paiementBanque(monopoly, numeroJoueur, 50);
            break;
        }
        case 3 : {
            donnerCartePrisonCommunauteJoueur(monopoly, numeroJoueur);
            break;
        }
        case 4 : {
            monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = 8;
            monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 1;
            afficherCases(monopoly);
            break;
        }
        case 5 : {
            banquePayeJoueur(monopoly, numeroJoueur, 30);
            break;
        }
        case 6 : {
            for (int i = 0; i < monopoly->nombreJoueurs; ++i) {
                if (i != numeroJoueur) {
                    paiementJoueur(monopoly, i, numeroJoueur, 10);
                }
            }
            break;
        }
        case 7 : {
            banquePayeJoueur(monopoly, numeroJoueur, 100);
            break;
        }
        case 8 : {
            paiementBanque(monopoly, numeroJoueur, 100);
            break;
        }
        case 9 : {
            banquePayeJoueur(monopoly, numeroJoueur, 10);
            break;
        }
        case 10 : {
            banquePayeJoueur(monopoly, numeroJoueur, 100);
            break;
        }
        case 11 : {
            carteDuel(monopoly, numeroJoueur);
            break;
        }
    }
}

void joueurCaseCommunaute(Monopoly *monopoly, int numeroJoueur) {
    if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 6 ||
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 22) {
        afficherCarteCommunauteTiree(monopoly);
        actionCarteCommunauteTiree(monopoly, tirerUneCarteCommunaute(monopoly), numeroJoueur);
        remettreCarteCommunauteEnBasPile(monopoly);
    }
}


void initialiserLesCartes(Monopoly *monopoly) {
    initialiserCartesCommunaute(monopoly);
    initialiserCartesChance(monopoly);
}

void joueurCaseCartes(Monopoly *monopoly, int numeroJoueur) {
    joueurCaseCommunaute(monopoly, numeroJoueur);
    joueurCaseChance(monopoly, numeroJoueur);
}