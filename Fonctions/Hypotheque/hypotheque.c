#include "hypotheque.h"
#include "../Immobilier/immobilier.h"
#include <stdio.h>
#include "../Joueur/Joueur.h"
#include "../Plateau/plateau.h"

/*short int verifierNumeroDuJoueur(int numeroJoueur) {
    if (numeroJoueur > 4 || numeroJoueur < 1) {
        printf("Votre numero de joueur est incorrect. Merci d'entrer un numero de joueur conforme.\n");
        scanf(" %d", &numeroJoueur);
        return 0;
    }
    return 1;
}

short int verifierNumeroPropriete(int numeroPropriete) {
    if (numeroPropriete % 2 == 0) {
        printf("Ce numero de proprietee est incorrect. Merci d'entrer un numero de proprietee conforme.\n");
        //scanf(" %c", &numeroPropriete);
        return 0;
    }
    return 1;
}
int *demanderPropriete(int numeroPropriete) {
    do {
        printf("Sur quelle proprietee voulez vous effectuer cette action ?\n");
        scanf(" %d", numeroPropriete);
    } while (verifierNumeroPropriete(*numeroPropriete) != 1);
    return numeroPropriete;
}*/

int verifierQueLaProprieteEstALui(Monopoly *monopoly, int numeroJoueur) {
    int numeroPropriete = 0;
    color(15, 0);
    afficherToutesPropJoueur(monopoly, numeroJoueur);
    printf("Sur quelle propriete voulez-vous avoir des informations ?\n");
    scanf(" %d", &numeroPropriete);
    if (monopoly->tableauJoueur[numeroJoueur].nombreProprietes == 0) {
        printf("Vous ne disposez d'aucune propriete. \n");
    } else {
        while (isProprieteDeJoueurX(monopoly, numeroPropriete, numeroJoueur) == 0) {
            do {
                printf("Cette proprietee n'est pas a vous. Recommencez.\n");
                scanf(" %d", &numeroPropriete);
            } while (numeroPropriete < 1 || numeroPropriete > 31);
        }
    }
    return numeroPropriete;
}

int montantHypothequaireDeLaPropriete(Monopoly *monopoly, int numeroPropriete) {
    color(15, 0);
    printf("La valeur hypothequaire de la proprietee est de %d euros.\n",
           monopoly->tableauPropriete[numeroPropriete].prixHypotheque);
    return monopoly->tableauPropriete[numeroPropriete].prixHypotheque;
}

void leverHypotheque(Monopoly *monopoly, int numeroPropriete, int numeroJoueur) {
    char choix;
    color(15, 0);
    if (isProprieteHypothequee(monopoly, numeroPropriete) == 1) {
        do {
            printf("Pour lever l'hypotheque de cette proprietee, payez %d euros.\n\tVoulez vous lever l'hypotheque ? (O : Oui, N : Non)\n",
                   monopoly->tableauPropriete[numeroPropriete].prixHypotheque * 11 / 10);
            scanf(" %c", &choix);
        } while (choix != 'O' && choix != 'n' && choix != 'N' && choix != 'o');
        if (monopoly->tableauJoueur[numeroJoueur].soldeJoueur >=
            monopoly->tableauPropriete[numeroPropriete].prixHypotheque * 11 / 10 && (choix == 'O' || choix == 'o')) {
            monopoly->tableauJoueur[numeroJoueur].soldeJoueur -=
                    monopoly->tableauPropriete[numeroPropriete].prixHypotheque * 11 / 10;
            monopoly->tableauPropriete[numeroPropriete].isHypothequee = 0;
            printf("Votre solde est a present de %d\n", monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
        } else if (monopoly->tableauJoueur[numeroJoueur].soldeJoueur <
                   monopoly->tableauPropriete[numeroPropriete].prixHypotheque * 11 / 10) {
            printf("Vous n'avez pas assez d'argent pour lever cette hypotheque.\n");
        } else {
            printf("Vous n'avez pas voulu lever l'hypotheque.\n");
        }
    } else {
        printf("Vous ne pouvez pas hypothequer une proprietee deja hypothequee !\n");
    }
}

int isProprieteHypothequee(Monopoly *monopoly, int numeroPropriete) {
    color(15, 0);
    if (monopoly->tableauPropriete[numeroPropriete].isHypothequee == 0) {
        return 0;
    } else {
        return 1;
    }
}

void sayIsHypothequee(Monopoly *monopoly, int numeroPropriete) {
    color(15, 0);
    if (isProprieteHypothequee(monopoly, numeroPropriete) == 0) { printf("La proprietee est non hypothequee\n"); }
    else { printf("La proprietee est deja hypothequee\n"); }
}

void avoirDesRenseignements(Monopoly *monopoly, int numeroJoueur) {
    char choix;
    color(15, 0);
    int numeroPropriete = verifierQueLaProprieteEstALui(monopoly, numeroJoueur);
    if (monopoly->tableauJoueur[numeroJoueur].nombreProprietes == 0 &&
        isProprieteNonAchetable(monopoly, numeroPropriete) == 1) {
        printf("Pas de proproiete valide .\n");
    } else {
        do {
            printf("Pour connaitre le montant hypothequaire de la proprietee, entrez : R,\n"
                   "Pour hypothequer le bien, entrez : H,\n"
                   "Pour lever l'hypotheque du bien entrez : L,\n"
                   "Pour savoir si la proprietee est deja hypotheque, tapez : S.\n");
            scanf(" %c", &choix);
        } while (choix != 'R' && choix != 'r' && choix != 'H' && choix != 'h' && choix != 'L' && choix != 'l' &&
                 choix != 'S' && choix != 's');
        if (choix == 'R' || choix == 'r') { montantHypothequaireDeLaPropriete(monopoly, numeroPropriete); }
        if (choix == 'H' || choix == 'h') { hypotheque(monopoly, numeroPropriete, numeroJoueur); }
        if (choix == 'L' || choix == 'l') { leverHypotheque(monopoly, numeroPropriete, numeroJoueur); }
        if (choix == 'S' || choix == 's') { sayIsHypothequee(monopoly, numeroPropriete); }
    }
}

void obligerHypotheque(Monopoly *monopoly, int numeroJoueur) {
    color(15, 0);
    int choixDuJoueur;
    printf("Vous etes obliges d'hypothequer un bien.\n");
    do {
        color(15, 0);
        afficherToutesPropJoueur(monopoly, numeroJoueur);
        printf("Saisir la propriete a hypothequer.\n");
        scanf(" %d", &choixDuJoueur);
    } while (isProprieteDeJoueurX(monopoly, choixDuJoueur, numeroJoueur) == 0 || isProprieteHypothequee(monopoly, choixDuJoueur) == 1);
        printf("Vous avez choisi d'hypothequer un bien.\n");
        hypotheque(monopoly, choixDuJoueur, numeroJoueur);
}

void vendreMaisonOuHotel(Monopoly *monopoly, int numeroPropriete, int numeroJoueur) {
    color(15, 0);
    int choix, verifierMaison;
    char verifierHotel;
    if (isMaisonSurCase(monopoly, numeroPropriete) == 1) {
        do {
            printf("Si vous souhaitez vendre une maison, entrez 1, pour un hotel entrez 0.\n");
            scanf(" %d", &choix);
        } while (choix != 1 && choix != 0);
        if (choix == 1) {
            do {
                printf("Combien de maison(s) souhaitez vous vendre, au prix de %d euros ?\n",
                       monopoly->tableauPropriete[numeroPropriete].prixUneMaison / 2);
                scanf(" %d", &verifierMaison);
            } while (verifierMaison > nbMaisonSurCase(monopoly, numeroPropriete) && verifierMaison < 1);
            vendreMaisons(monopoly, verifierMaison, numeroJoueur, numeroPropriete);
            printf("Il vous reste : %d maison(s), et vous avez touchez %d euros",
                   monopoly->tableauPropriete[numeroPropriete].nombreMaison,
                   verifierMaison * (monopoly->tableauPropriete[numeroPropriete].prixUneMaison / 2));
        } else if (choix == 0) {
            do {
                printf("Voulez-vous vendre un hotel ? (O : Oui, N : Non)\n");
                scanf(" %c", &verifierHotel);
            } while (verifierHotel != 'O' && verifierHotel != 'o' && verifierHotel != 'N' && verifierHotel != 'n');
            if (isHotelSurCase(monopoly, numeroPropriete) < verifierHotel) {
                printf("Vous n'avez pas d'hotel.\n");
            } else {
                verifierHotel = 5; //pour convertir un hotel en 5 maisons (plus facile à gérer 5 maisons que des hôtels)
                vendreMaisons(monopoly, verifierHotel, numeroJoueur, numeroPropriete);
            }
        }
    }
}

int hypotheque(Monopoly *monopoly, int numeroPropriete, int numeroJoueur) {
    color(15, 0);
    if (isMaisonSurCase(monopoly, numeroPropriete) == 0 && isHotelSurCase(monopoly, numeroPropriete) == 0) {
        monopoly->tableauJoueur[numeroJoueur].soldeJoueur += monopoly->tableauPropriete[numeroPropriete].prixHypotheque;
        //monopoly->tableauJoueur[numeroJoueur] = *monopoly->tableauPropriete[numeroPropriete].tableauJoueur;
        monopoly->tableauPropriete[numeroPropriete].loyerActuel = 0;
        monopoly->tableauPropriete[numeroPropriete].isHypothequee = 1;
        printf("Votre solde est a present de %d\n", monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
        return 1;
    } else {
        printf("Vous ne pouvez pas hypotequer car il reste un/des batiment(s).\n");
        return 0;
    }
}


void fonctionHypotheque(Monopoly *monopoly, int numeroPropriete, int numeroJoueur) {
    color(15, 0);
    printf("Votre solde est de %d€\n", monopoly->tableauJoueur[numeroJoueur].soldeJoueur);

    verifierQueLaProprieteEstALui(monopoly, monopoly->tableauJoueur[numeroJoueur].numeroJoueur);
    avoirDesRenseignements(monopoly, numeroJoueur);
    if (monopoly->tableauJoueur[numeroJoueur].soldeJoueur < monopoly->tableauPropriete[numeroPropriete].loyerActuel) {
        obligerHypotheque(monopoly, numeroJoueur);
    }
    if (isProprieteHypothequee(monopoly, numeroPropriete) == 1) {
        hypotheque(monopoly, numeroPropriete, numeroJoueur);
    }
}
