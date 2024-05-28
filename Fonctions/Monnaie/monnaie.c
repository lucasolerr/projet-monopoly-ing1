#include "monnaie.h"
#include <stdio.h>
#include "../Partie/partie.h"
#include "../Hypotheque/hypotheque.h"
#include "../Plateau/plateau.h"
#include "../Immobilier/immobilier.h"

int haveSolde(Monopoly *monopoly, int numeroJoueur, int valeurAPayer) {
    return (monopoly->tableauJoueur[numeroJoueur].soldeJoueur - valeurAPayer >= 0) ? 1 : 0;
}

void paiementBanque(Monopoly *monopoly, int numeroJoueur, int valeurAPayer) {
    if (haveSolde(monopoly, numeroJoueur, valeurAPayer) == 1) {
        monopoly->tableauJoueur[numeroJoueur].soldeJoueur -= valeurAPayer;
    } else if (haveSolde(monopoly, numeroJoueur, valeurAPayer) == 0 &&
               monopoly->tableauJoueur[numeroJoueur].nombreProprietes > 0 &&
               monopoly->tableauJoueur[numeroJoueur].nombreMaisons > 0) {
        do {
            printf("Votre solde est a : %d\n", monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
            printf("Pas assez de solde pour payer. Vous devez vendre des maisons. \n");
            forcerVendreMaisons(monopoly, numeroJoueur);
        } while (haveSolde(monopoly, numeroJoueur, valeurAPayer) == 0);
        monopoly->tableauJoueur[numeroJoueur].soldeJoueur -= valeurAPayer;
    } else if (haveSolde(monopoly, numeroJoueur, valeurAPayer) == 0 &&
               monopoly->tableauJoueur[numeroJoueur].nombreProprietes > 0 &&
               monopoly->tableauJoueur[numeroJoueur].nombreMaisons == 0) {
        do {
            printf("Votre solde est a : %d\n", monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
            printf("Pas assez de solde pour payer. Vous devez hypothequer des proprietes.\n");
            obligerHypotheque(monopoly, numeroJoueur);
        } while (haveSolde(monopoly, numeroJoueur, valeurAPayer) == 0);
        monopoly->tableauJoueur[numeroJoueur].soldeJoueur -= valeurAPayer;
    } else {
        monopoly->tableauJoueur[numeroJoueur].soldeJoueur -= valeurAPayer;
        isFailliteBanque(monopoly,numeroJoueur);
    }
}

void paiementBanqueChoix(Monopoly *monopoly, int numeroJoueur, int valeurAPayer){
    if (haveSolde(monopoly, numeroJoueur, valeurAPayer) == 1) {
        monopoly->tableauJoueur[numeroJoueur].soldeJoueur -= valeurAPayer;
    } else if (haveSolde(monopoly, numeroJoueur, valeurAPayer) == 0){
        printf("Votre solde est a : %d\n", monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
        printf("Pas assez de solde pour payer.\n");
    }
}

void paiementJoueur(Monopoly *monopoly, int numeroFromJoueur, int numeroToJoueur, int valeurAPayer) {
    if (haveSolde(monopoly, numeroFromJoueur, valeurAPayer) == 1) {
        monopoly->tableauJoueur[numeroFromJoueur].soldeJoueur -= valeurAPayer;
        monopoly->tableauJoueur[numeroToJoueur].soldeJoueur += valeurAPayer;
        color(4, 0);
        printf("%s paye %d euros a %s. \n", monopoly->tableauJoueur[numeroFromJoueur].strNomJoueur, valeurAPayer,
               monopoly->tableauJoueur[numeroToJoueur].strNomJoueur);
        color(15, 0);
    } else if (haveSolde(monopoly, numeroFromJoueur, valeurAPayer) == 0 &&
               monopoly->tableauJoueur[numeroFromJoueur].nombreProprietes > 0 &&
            (monopoly->tableauJoueur[numeroFromJoueur].nombreMaisons > 0 || monopoly->tableauJoueur[numeroFromJoueur].nombreHotels > 0)) {
        do {
            printf("Montant a payer : %d", valeurAPayer);
            printf("Votre solde est a : %d\n", monopoly->tableauJoueur[numeroFromJoueur].soldeJoueur);
            printf("Pas assez de solde pour payer. Vous devez vendre des maisons. \n");
            forcerVendreMaisons(monopoly, numeroFromJoueur);
        } while (haveSolde(monopoly, numeroFromJoueur, valeurAPayer) == 0 && (monopoly->tableauJoueur[numeroFromJoueur].nombreMaisons > 0 || monopoly->tableauJoueur[numeroFromJoueur].nombreHotels > 0));
        monopoly->tableauJoueur[numeroFromJoueur].soldeJoueur -= valeurAPayer;
        monopoly->tableauJoueur[numeroToJoueur].soldeJoueur += valeurAPayer;

    } else if (haveSolde(monopoly, numeroFromJoueur, valeurAPayer) == 0 &&
               monopoly->tableauJoueur[numeroFromJoueur].nombreProprietes > 0 &&
               monopoly->tableauJoueur[numeroFromJoueur].nombreMaisons == 0) {
        do {
            printf("Votre solde est a : %d\n", monopoly->tableauJoueur[numeroFromJoueur].soldeJoueur);
            printf("Pas assez de solde pour payer. Vous devez hypothequer des proprietes. \n");
            obligerHypotheque(monopoly, numeroFromJoueur);
        } while (haveSolde(monopoly, numeroFromJoueur, valeurAPayer) == 0);
        monopoly->tableauJoueur[numeroFromJoueur].soldeJoueur -= valeurAPayer;
        monopoly->tableauJoueur[numeroToJoueur].soldeJoueur += valeurAPayer;
    } else {
        monopoly->tableauJoueur[numeroToJoueur].soldeJoueur += monopoly->tableauJoueur[numeroFromJoueur].soldeJoueur;
        monopoly->tableauJoueur[numeroFromJoueur].soldeJoueur -= valeurAPayer;
        isFailliteJoueur(monopoly,numeroFromJoueur,numeroToJoueur);
    }
}


void isFailliteBanque(Monopoly *monopoly, int numeroJoueur) {
    if (monopoly->tableauJoueur[numeroJoueur].soldeJoueur < 0 && monopoly->tableauJoueur[numeroJoueur].nombreProprietes == 0) {
        printf("Vous avez fais faillite.Vous ne pouvez plus jouer \n");
        monopoly->tableauJoueur[numeroJoueur].isJoueurActif = 0;
        for (int i = 0; i < 16; ++i) {
            if (monopoly->tableauPropriete[1 + 2*i].numeroJoueur == numeroJoueur){
                monopoly->tableauPropriete[1 + 2*i].numeroJoueur = -1;
                monopoly->tableauPropriete[i * 2 + 1].tableauJoueur = NULL;
                monopoly->tableauPropriete[i * 2 + 1].isBatiment = 1;
                monopoly->tableauPropriete[i * 2 + 1].nombreMaison = 0;
                monopoly->tableauPropriete[i * 2 + 1].nombreHotel = 0;
                monopoly->tableauPropriete[i * 2 + 1].isHypothequee = 0;
            }
        }
    }
}

void isFailliteJoueur(Monopoly *monopoly, int numeroFromJoueur, int numeroToJoueur) {
    if (monopoly->tableauJoueur[numeroFromJoueur].soldeJoueur < 0 && monopoly->tableauJoueur[numeroFromJoueur].nombreProprietes == 0) {
        printf("Vous avez fais faillite.Vous ne pouvez plus jouer \n");
        monopoly->tableauJoueur[numeroFromJoueur].isJoueurActif = 0;
        for (int i = 0; i < 16; ++i) {
            if (monopoly->tableauPropriete[1 + 2*i].numeroJoueur == numeroFromJoueur){
                monopoly->tableauPropriete[1 + 2*i].numeroJoueur = monopoly->tableauPropriete[numeroToJoueur].numeroJoueur;
                monopoly->tableauPropriete[i * 2 + 1].tableauJoueur = NULL;
                monopoly->tableauPropriete[i * 2 + 1].isBatiment = 1;
                monopoly->tableauPropriete[i * 2 + 1].nombreMaison = 0;
                monopoly->tableauPropriete[i * 2 + 1].nombreHotel = 0;
                monopoly->tableauPropriete[i * 2 + 1].isHypothequee = 1;
            }
        }
    }
}

void banquePayeJoueur(Monopoly *monopoly, int numeroJoueur, int valeurARecevoir) {
    monopoly->tableauJoueur[numeroJoueur].soldeJoueur += valeurARecevoir;
    color(2, 0);
    printf("La banque verse %d euros a %s. \n", valeurARecevoir, monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
    color(15, 0);
}

void joueurCaseImpot(Monopoly *monopoly, int numeroJoueur) {
    if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 2 ||
        monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 10) {
        paiementBanque(monopoly, numeroJoueur, 100);
        color(4, 0);
        printf("Vous payez 100 euros d'impots. \n");
        color(15, 0);
    } else if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 18) {
        paiementBanque(monopoly, numeroJoueur, 200);
        color(4, 0);
        printf("Vous payez 200 euros d'impots. \n");
        color(15, 0);
    } else if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 26) {
        banquePayeJoueur(monopoly, numeroJoueur, 50);
        color(2, 0);
        printf("Vous trouvez 50 euros par terre. \n");
        color(15, 0);
    }
}

void monnaieTest() {
    Monopoly monopoly = initialiserPartie();
    Monopoly *pMonopoly = &monopoly;
    monopoly.tableauJoueur[1].nombreProprietes = 1;
    monopoly.tableauPropriete[1].isHypothequee = 1;
    monopoly.tableauJoueur[1].nombreMaisons = 0;
    //paiementBanque(pMonopoly, 1, 1501);
    paiementJoueur(pMonopoly, 1, 2, 1501);
    printf("Solde J1 apres paiement : %d \n", pMonopoly->tableauJoueur[1].soldeJoueur);
    printf("Solde J2 apres paiement : %d \n", pMonopoly->tableauJoueur[2].soldeJoueur);
}