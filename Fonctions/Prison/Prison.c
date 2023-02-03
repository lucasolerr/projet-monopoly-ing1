#include "Prison.h"
#include <stdio.h>
#include "../Monnaie/monnaie.h"
#include "../De/de.h"
#include "../Cartes/cartes.h"
#include "stdlib.h"
#include "../Plateau/plateau.h"
#include "time.h"


void allerEnPrison(Monopoly *monopoly, int numeroJoueur) {
    if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 24) {
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau = 8;
        monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 1;
        afficherCases(monopoly);
        printf("\nVous allez en prison pour 3 tours !\n");
    }
}

int possessionCartePrison(Monopoly* monopoly, int numeroJoueur){
    if (monopoly->tableauJoueur[numeroJoueur].cartePrisonChance==1 || monopoly->tableauJoueur[numeroJoueur].cartePrisonCommunaute == 1){
        printf("Vous pouvez sortir de prison !\n");
        return 1;
    }
    else {
        return 0;
    }
}

int quiACartePrisonChance(Monopoly *monopoly) {
    if (monopoly->tableauJoueur[0].cartePrisonChance == 1) {
        return monopoly->tableauJoueur[0].numeroJoueur;
    } else if (monopoly->tableauJoueur[1].cartePrisonChance == 1) {
        return monopoly->tableauJoueur[1].numeroJoueur;
    } else if (monopoly->tableauJoueur[2].cartePrisonChance == 1) {
        return monopoly->tableauJoueur[2].numeroJoueur;
    } else if (monopoly->tableauJoueur[3].cartePrisonChance == 1) {
        return monopoly->tableauJoueur[3].numeroJoueur;
    } else {
        printf("Personne n'a la carte chance sortie de prison.\n");
        return 0;
    }
}


int quiACartePrisonCommunaute(Monopoly *monopoly) {
    if (monopoly->tableauJoueur[0].cartePrisonCommunaute == 1) {
        return monopoly->tableauJoueur[0].numeroJoueur;
    } else if (monopoly->tableauJoueur[1].cartePrisonCommunaute == 1) {
        return monopoly->tableauJoueur[1].numeroJoueur;
    } else if (monopoly->tableauJoueur[2].cartePrisonCommunaute == 1) {
        return monopoly->tableauJoueur[2].numeroJoueur;
    } else if (monopoly->tableauJoueur[3].cartePrisonCommunaute == 1) {
        return monopoly->tableauJoueur[3].numeroJoueur;
    } else {
        printf("Personne n'a la carte communaute sortie de prison.\n");
        return 0;
    }
}

void avancerIfDeAreDouble(Monopoly *monopoly, int numeroJoueur) {
    srand(time(NULL));
    monopoly->tableauJoueur[numeroJoueur].valeurDe1 = rand() % (6 - 1 + 1) + 1;
    monopoly->tableauJoueur[numeroJoueur].valeurDe2 = rand() % (6 - 1 + 1) + 1;
    if (isDouble(&monopoly->tableauJoueur[numeroJoueur].valeurDe1, &monopoly->tableauJoueur[numeroJoueur].valeurDe2) == 1) {
        printf("De 1 : %d \nDe 2 : %d \n", monopoly->tableauJoueur[numeroJoueur].valeurDe1,monopoly->tableauJoueur[numeroJoueur].valeurDe2);
        printf("BRAVO ! Vous avez fait un double, vous pouvez sortir de prison et avancez de %d cases !\n", (monopoly->tableauJoueur[numeroJoueur].valeurDe1 + monopoly->tableauJoueur[numeroJoueur].valeurDe2 ));
        monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 0;
        avancerJoueurXCases(monopoly, numeroJoueur, (monopoly->tableauJoueur[numeroJoueur].valeurDe1 + monopoly->tableauJoueur[numeroJoueur].valeurDe2 ));
    } else {
        printf("De 1 : %d \nDe 2 : %d \n", monopoly->tableauJoueur[numeroJoueur].valeurDe1,monopoly->tableauJoueur[numeroJoueur].valeurDe2);
        printf("Pas de bol ! Vous tenterez votre chance au prochain tour !\n");
    }
}

void routinePrison(Monopoly *monopoly, int numeroJoueur) {
    int i, a, b;
    int valeurAPaye = 50;
    do {
        printf("Voulez-vous acheter la carte sortie de prison ?\n");
        printf("1 : oui \n0 : non\n");
        scanf(" %d", &b);
    } while (!(b == 1 || b == 0));
    if (b == 1) {
        if (quiACartePrisonChance(monopoly) != 0) {
            int choix1, sortirJ1, prix1, prix1oK, choix2, sortirJ2, choix3, sortirJ3, choix4, sortirJ4, a;
            if (quiACartePrisonChance(monopoly) == 1) {
                printf("C'est %s qui a la carte sortie de prison.\n", monopoly->tableauJoueur[1].strNomJoueur);
                do {
                    printf("%s, voulez-vous vendre votre carte sortie de prison (1 : Oui, 0 : Non) ?\n",
                           monopoly->tableauJoueur[1].strNomJoueur);
                    scanf(" %d", &choix1);
                } while (!(choix1 == 1 || choix1 == 0));
                do {
                    printf("%s, a quel prix souhaitez-vous l'a vendre ?\n",
                           monopoly->tableauJoueur[1].strNomJoueur);
                    scanf(" %d", &prix1);
                    do {
                        printf("Est-ce que ce prix convient a %s ? (Oui : 1, Non : 0)\n",
                               monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                        scanf(" %d", &prix1oK);
                    } while (!(prix1oK == 1 || prix1oK == 0));
                } while (prix1oK == 0);
                if (prix1oK == 1) {
                    paiementJoueur(monopoly, numeroJoueur, 1, prix1);
                    monopoly->tableauJoueur[numeroJoueur].cartePrisonChance = 1;
                    monopoly->tableauJoueur[1].cartePrisonChance = 0;
                    printf("Bravo ! Le joueur %d a acheter la carte sortie de prison a %s.\n",
                           monopoly->tableauJoueur[numeroJoueur].numeroJoueur,
                           monopoly->tableauJoueur[1].strNomJoueur);
                }
            }
        }
    }

        /*printf("Joueur %d, voulez-vous utiliser cette carte pour sortir de prison (Oui : 1, Non : 0) ?");
        scanf(" %d", &sortirJ1);
        if (sortirJ1 == 1) {

    }
    }
    else {
    do{
    printf("Differentes possibilites s'offrent a toi %s :\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
    printf("0 : payer 50 euros puis sortir immediatement de prison\n");
    printf("1 : lancer les des et tenter de faire un double\n");
    scanf (" %d",&i);
    }while(!(i==1||i==0));
    if(i==0){
    printf("Vous avez choisi de payer l'amende afin de sortir de prison, vous pouvez lancer les des !\n");
    paiementBanque(monopoly, numeroJoueur, valeurAPaye);
    int somme = sommeDe(&monopoly->tableauJoueur[numeroJoueur].valeurDe1, &monopoly->tableauJoueur[numeroJoueur].valeurDe2);
    monopoly->tableauJoueur[numeroJoueur].positionSurPlateau=monopoly->tableauJoueur[numeroJoueur].positionSurPlateau+somme;
    printf("Vous avez avance de %d cases\n", somme);
    } else{
    printf("Vous avez fait le choix de lancer les des afin de faire un double : \n");
    avancerIfDeAreDouble(monopoly, numeroJoueur);
    }
    }*/
    }

void isEnPrison(Monopoly *monopoly, int numeroJoueur) {
        int a, b;
        printf("Vous etes en prison ! \n");
        do {
            printf("Possedez-vous la carte sortie de prison ?\n");
            printf("1 : oui \n0 : non\n");
            scanf(" %d", &a);
        } while (!(a == 1 || a == 0));
        if (a == 1) {
            if (possessionCartePrison(monopoly, numeroJoueur) == 1) {
                monopoly->tableauJoueur[numeroJoueur].cartePrisonChance = 0;
                monopoly->tableauJoueur[numeroJoueur].cartePrisonCommunaute = 0;
                int somme = sommeDe(&monopoly->tableauJoueur[numeroJoueur].valeurDe1,
                                    &monopoly->tableauJoueur[numeroJoueur].valeurDe2);
                monopoly->tableauJoueur[numeroJoueur].positionSurPlateau =
                        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau + somme;
            } else {
                printf("Vous avez menti, rolala c'est pas bien !\n");
                routinePrison(monopoly, numeroJoueur);
            }
        } else {
            routinePrison(monopoly, numeroJoueur);
        }
    }
void dernierTourEnPrison(Monopoly *monopoly, int numeroJoueur) {

    }


void isEnPrison2(Monopoly *monopoly, int numeroJoueur) {
    int prix, a=1;
    char choix, acheterSortie, joueurVendeurOkay, prixIsOk;
    do {
        printf("\nVous etes en prison ! \n");
        printf("Veuillez selectionner une action a realiser :\n");
        printf("Payer l'amende : 'P' \n");
        printf("Utiliser sa carte prison : 'C' \n");
        printf("Faire un double : 'D'\n");
        scanf(" %c", &choix);
    } while ((choix != 'P'&& choix != 'D' && choix != 'C' ));
    if (choix == 'C' && possessionCartePrison(monopoly, numeroJoueur) == 1 ) {
        do {
            printf("Voulez-vous utiliser votre carte prison ? (oui : Y , non : N) \n");
            scanf(" %c",&choix);
        } while (choix != 'Y' && choix != 'N');
        if (choix == 'Y' && monopoly->tableauJoueur[numeroJoueur].cartePrisonChance == 1){
            printf("Vous utilisez votre carte sortie de prison. \n");
            utiliseCarteChancePrison(monopoly,numeroJoueur);
            monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 0;
        }
        else if ( choix == 'Y' && monopoly->tableauJoueur[numeroJoueur].cartePrisonCommunaute == 1){
            printf("Vous utilisez votre carte sortie de prison. \n");
            utiliseCarteCommunautePrison(monopoly,numeroJoueur);
            monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 0;
        }
        else if (choix == 'N'){
            printf("Vous decidez de garder votre carte sortie de prison. \n");
            do {
                printf("Pour lancer les des taper 'D'. \n");
                printf("Payer l'amende : 'P' \n");
                scanf(" %c", &choix);
            } while (choix != 'D' && choix != 'P');
            if (choix == 'D'){
                avancerIfDeAreDouble(monopoly,numeroJoueur);
            }
            else if (choix == 'P'){
                printf("Vous decidez de payer l'amende. \n");
                paiementBanque(monopoly, numeroJoueur, 50);
                monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 0;
            }
        }
    }
    else if (choix == 'C' && possessionCartePrison(monopoly, numeroJoueur) != 1){
        printf("Vous ne possedez pas de carte sortie de prison.\n");
            do {
                printf("%s, souhaitez-vous acheter la carte sortie de prison a un joueur (Oui 'O', Non 'N') ?\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                scanf(" %c", &acheterSortie);
            } while (acheterSortie!= 'O' && acheterSortie!='o' && acheterSortie!= 'N' && acheterSortie!='n');


            if (acheterSortie == 'O' || acheterSortie == 'o') {
                if (quiACartePrisonChance(monopoly) > 0) {
                    printf("Le joueur qui possede une carte prison est %s\n", monopoly->tableauJoueur[quiACartePrisonChance(monopoly)-1].strNomJoueur);
                    do {
                        printf("%s, voulez-vous vendre votre carte sortie de prison a %s ? (Oui 'O', Non 'N')\n", monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                        scanf(" %c", &joueurVendeurOkay);
                    } while (joueurVendeurOkay!='O' && joueurVendeurOkay!='o' && joueurVendeurOkay!='N' && joueurVendeurOkay!='n');
                    if (joueurVendeurOkay=='O' || joueurVendeurOkay=='o'){
                        do {
                            printf("%s, a quel prix souhaitez vous vendre votre carte sortie de prison ?\n", monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].strNomJoueur);
                            scanf(" %d", &prix);
                            do {
                                printf("%s, voulez vous acheter la carte prison de %s pour %d euros ? (Oui 'O', Non 'N')\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].strNomJoueur, prix);
                                scanf(" %c", &prixIsOk);
                                if (prixIsOk=='N' || prixIsOk=='n'){
                                    do {
                                        printf("%s, voulez-vous toujours vendre votre carte sortie de prison a %s ? (Oui 'O', Non 'N')\n", monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                                        scanf(" %c", &joueurVendeurOkay);
                                    } while (joueurVendeurOkay!='O' && joueurVendeurOkay!='o' && joueurVendeurOkay!='N' && joueurVendeurOkay!='n');
                                    if (joueurVendeurOkay == 'N' || joueurVendeurOkay == 'n'){
                                        printf("Vente annulee !\n");
                                        prixIsOk='O';
                                        a=0;
                                        printf("%s, votre solde est toujours de %d\n", monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].soldeJoueur);
                                        printf("%s, votre solde est toujours de %d\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
                                    }
                                }
                            } while (prixIsOk != 'O' && prixIsOk != 'o' && prixIsOk != 'N' && prixIsOk != 'n');
                            if ((prixIsOk == 'O' || prixIsOk == 'o') && a==1){
                                paiementJoueur(monopoly,numeroJoueur,(quiACartePrisonChance(monopoly)-1),prix);
                                printf("%s, votre solde est a present de %d\n", monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].soldeJoueur);
                                printf("%s, votre solde est a present de %d\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
                                monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].cartePrisonChance=0;
                                monopoly->tableauJoueur[numeroJoueur].cartePrisonChance=1;
                            }
                        } while (prixIsOk == 'N' || prixIsOk == 'n');
                    }
                    if (joueurVendeurOkay=='N' || joueurVendeurOkay=='n') {
                        printf("%s ne veux pas vendre sa carte prison.\nDesole %s.\n", monopoly->tableauJoueur[(quiACartePrisonChance(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                    }
                }
                else if (quiACartePrisonCommunaute(monopoly) > 0) {
                    printf("Le joueur qui possede une carte prison est %s\n", monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].strNomJoueur);
                    do {
                        printf("%s, voulez-vous vendre votre carte sortie de prison a %s ? (Oui 'O', Non 'N')\n", monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                        scanf(" %c", &joueurVendeurOkay);
                    } while (joueurVendeurOkay!='O' && joueurVendeurOkay!='o' && joueurVendeurOkay!='N' && joueurVendeurOkay!='n');
                    if (joueurVendeurOkay=='O' || joueurVendeurOkay=='o'){
                        do {
                            printf("%s, a quel prix souhaitez vous vendre votre carte sortie de prison ?\n", monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].strNomJoueur);
                            scanf(" %d", &prix);
                            do {
                                printf("%s, voulez vous acheter la carte prison de %s pour %d euros ? (Oui 'O', Non 'N')\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].strNomJoueur, prix);
                                scanf(" %c", &prixIsOk);
                                if (prixIsOk=='N' || prixIsOk=='n'){
                                    do {
                                        printf("%s, voulez-vous toujours vendre votre carte sortie de prison a %s ? (Oui 'O', Non 'N')\n", monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                                        scanf(" %c", &joueurVendeurOkay);
                                    } while (joueurVendeurOkay!='O' && joueurVendeurOkay!='o' && joueurVendeurOkay!='N' && joueurVendeurOkay!='n');
                                    if (joueurVendeurOkay == 'N' || joueurVendeurOkay == 'n'){
                                        printf("Vente annulee !\n");
                                        prixIsOk='O';
                                        a=0;
                                        printf("%s, votre solde est toujours de %d\n", monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].soldeJoueur);
                                        printf("%s, votre solde est toujours de %d\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
                                    }
                                }
                            } while (prixIsOk != 'O' && prixIsOk != 'o' && prixIsOk != 'N' && prixIsOk != 'n');
                            if ((prixIsOk == 'O' || prixIsOk == 'o') && a==1){
                                paiementJoueur(monopoly,numeroJoueur,(quiACartePrisonCommunaute(monopoly)-1),prix);
                                printf("%s, votre solde est a present de %d\n", monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].soldeJoueur);
                                printf("%s, votre solde est a present de %d\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
                                monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].cartePrisonChance=0;
                                monopoly->tableauJoueur[numeroJoueur].cartePrisonChance=1;
                            }
                        } while (prixIsOk == 'N' || prixIsOk == 'n');
                    }
                    if (joueurVendeurOkay=='N' || joueurVendeurOkay=='n') {
                        printf("%s ne veux pas vendre sa carte prison.\nDesole %s.\n", monopoly->tableauJoueur[(quiACartePrisonCommunaute(monopoly)-1)].strNomJoueur, monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                    }
                }
            }
        do {
            printf("Veuillez selectionner une action a realiser :\n");
            printf("Payer l'amende : 'P' \n");
            printf("Faire un double : 'D'\n");
            if (monopoly->tableauJoueur[numeroJoueur].cartePrisonChance == 1 || monopoly->tableauJoueur[numeroJoueur].cartePrisonCommunaute == 1){
                printf("Utiliser la carte sortie de prison : 'C'\n");
            }
            scanf(" %c", &choix);
        } while (choix != 'P' && choix != 'D' && choix != 'C');
        if (choix == 'P'){
            printf("Vous decidez de payer l'amende. \n");
            paiementBanque(monopoly, numeroJoueur, 50);
            monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 0;
        }
        else if (choix == 'D'){
            printf("Vous decidez de lancer les des. \n");
            avancerIfDeAreDouble(monopoly,numeroJoueur);
        } else if (choix == 'C'){
            printf("Vous utilisez votre carte sortie de prison. \n");
            if (monopoly->tableauJoueur[numeroJoueur].cartePrisonChance == 1){
                utiliseCarteChancePrison(monopoly,numeroJoueur);
            }
            else{
                utiliseCarteCommunautePrison(monopoly,numeroJoueur);
            }
        }
    }
    else if (choix == 'D') {
        printf("Vous decidez de lancer les des. \n");
        avancerIfDeAreDouble(monopoly,numeroJoueur);
    }
    else if (choix == 'P'){
        printf("Vous decidez de payer l'amende. \n");
        paiementBanque(monopoly, numeroJoueur, 50);
        monopoly->tableauJoueur[numeroJoueur].isPrisonnier = 0;
    }
}
