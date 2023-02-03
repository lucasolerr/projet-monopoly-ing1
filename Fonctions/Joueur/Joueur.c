#include "Joueur.h"
#include <stdio.h>
#include "../Immobilier/immobilier.h"
#include "../Plateau/plateau.h"
#include "../Monnaie/monnaie.h"
#include "../Hypotheque/hypotheque.h"


void afficherNomJoueur(Monopoly *monopoly, int numeroJoueur) {
    printf("%s", monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
}

void afficherSoldeJoueur(Monopoly *monopoly, int numeroJoueur) {
    printf("Voici votre solde %s : %d\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur,
           monopoly->tableauJoueur[numeroJoueur].soldeJoueur);
}

void afficherProprietesJoueur(Monopoly *monopoly, int numeroJoueur) {
    if (monopoly->tableauJoueur[numeroJoueur].nombreProprietes <= 3) {
        printf("Vous avez %d proporietes, il serait temps de s'y mettre %s !\n",
               monopoly->tableauJoueur[numeroJoueur].nombreProprietes,
               monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
    } else if (monopoly->tableauJoueur[numeroJoueur].nombreProprietes >= 4 &&
               monopoly->tableauJoueur[numeroJoueur].nombreProprietes <= 10) {
        printf("Pas mal %s, vous avez %d proprietes !\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur,
               monopoly->tableauJoueur[numeroJoueur].nombreProprietes);
    } else if (monopoly->tableauJoueur[numeroJoueur].nombreProprietes >= 10) {
        printf("Vous avez %d proporietes, vous etes fait pour ca %s !\n",
               monopoly->tableauJoueur[numeroJoueur].nombreProprietes,
               monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
    }
}

void deplacerJoueurDeXCases(Monopoly *monopoly, int numeroJoueur, int somme) {
    monopoly->tableauJoueur[numeroJoueur].positionSurPlateau =
            monopoly->tableauJoueur[numeroJoueur].positionSurPlateau + somme;
}

void affichageListePropriete(Monopoly *monopoly, int numeroJoueur, int i) {
    color(monopoly->tableauPropriete[1 + 2 * i].couleurBackground,
          0);
    printf("\tPropriete numero %d : ", 1 + 2 * i);
    printf("%s ", monopoly->tableauPropriete[1 + 2 * i].strNomRue);
}

void affichageNombrePropriete(Monopoly *monopoly, int numeroJoueur) {
    printf("%s dispose de %d proprietee : \n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur,
           monopoly->tableauJoueur[numeroJoueur].nombreProprietes);
}

void afficherToutesPropJoueur(Monopoly *monopoly, int numeroJoueur) {
    switch (monopoly->tableauJoueur[numeroJoueur].nombreProprietes) {
        case 0: {
            printf("%s, vous ne disposez d'aucune proprietee pour le moment. \n",
                   monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
        }
        case 1: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }
        case 2: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }
        case 3: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);


                }
            }
            break;
        }
        case 4: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);


                }
            }
            break;
        }
        case 5: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; ++i) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);


                }
            }
            break;
        }
        case 6: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }
        case 7: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }
        case 8: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }
        case 9: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }

        case 10: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                }
            }
            break;
        }
        case 11: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }

        case 12: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }
        case 13: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);
                }
            }
            break;
        }
        case 14: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }
        case 15: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);

                }
            }
            break;
        }
        case 16: {
            affichageNombrePropriete(monopoly, numeroJoueur);
            for (int i = 0; i < 16; i++) {
                if (isProprieteDeJoueurX(monopoly, 1 + 2 * i, numeroJoueur) == 1) {
                    affichageListePropriete(monopoly, numeroJoueur, i);
                    conditionMaisonAffichageInfosPropriete(monopoly, i);
                    conditionAffichageHypothequeePropriete(monopoly, i);
                }
            }
            break;
        }
    }
}

void conditionMaisonAffichageInfosPropriete(Monopoly *monopoly, int i) {
    if (isMaisonSurCase(monopoly, 1 + 2 * i) == 1 && isHotelSurCase(monopoly, 1 + 2 * i) == 0) {
        if (monopoly->tableauPropriete[1 + 2 * i].nombreMaison == 1) {
            printf("avec %d maison\n", monopoly->tableauPropriete[1 + 2 * i].nombreMaison);
        } else {
            printf("avec %d maisons\n", monopoly->tableauPropriete[1 + 2 * i].nombreMaison);
        }
    } else if (isHotelSurCase(monopoly, 1 + 2 * i) == 1) {
        printf("avec 1 hotel\n");
    } else {
    }
}

void conditionAffichageHypothequeePropriete(Monopoly *monopoly, int i) {
    if (isProprieteHypothequee(monopoly, 1 + 2 * i) == 1) {
        color(monopoly->tableauPropriete[1 + 2 * i].couleurBackground,
              0);
        printf("hypothequee\n");
        color(15, 0);

    } else {
        printf("\n");
    }
}


void echangeProprieteEntreJoueur(Monopoly *monopoly, int numeroJoueur) {
    char caracUtilisateur;
    do {
        printf("%s souhaitez-vous proceder a un echange de propriete ? (O : Oui, N : Non)\n",
               monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
        scanf(" %c", &caracUtilisateur);
    } while (caracUtilisateur != 'O' && caracUtilisateur != 'o' && caracUtilisateur != 'N' && caracUtilisateur != 'n');
    if ((caracUtilisateur == 'O' || caracUtilisateur == 'o') && monopoly->tableauJoueur[numeroJoueur].nombreProprietes != 0) {
        echangePropriete(monopoly, numeroJoueur);
    } else if (monopoly->tableauJoueur[numeroJoueur].nombreProprietes == 0){
        printf("Vous n'avez pas de propriete.\n");
    }
}

void echangePropriete(Monopoly *monopoly, int numeroJoueur) {
    int entierUtilisateur = 0, reponseProprieteFromJoueur, reponseProprieteToJoueur, k = 0;
    color(15, 0);
    printf("%s, avec qui voulez-vous effectuer un echange ?\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
    do {
        color(15, 0);
        for (int i = 0; i < monopoly->nombreJoueurs; i++) {
            color(15, 0);
            if (i != numeroJoueur) {
                while (k < monopoly->nombreJoueurs) {
                    color(15, 0);
                    afficherToutesPropJoueur(monopoly, k);
                    color(15, 0);
                    k++;
                }
                color(15, 0);
                printf("%s, tapez %d pour echanger avec %s\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur,
                       i, monopoly->tableauJoueur[i].strNomJoueur);
            }
        }
        scanf(" %d", &entierUtilisateur);
        if (monopoly->tableauJoueur[entierUtilisateur].nombreProprietes == 0) {
            color(15, 0);
            printf("Desoler, mais %s ne detient aucune propriete.\n",
                   monopoly->tableauJoueur[entierUtilisateur].strNomJoueur);
        }
        color(15, 0);
    } while (entierUtilisateur < 0 || entierUtilisateur > monopoly->nombreJoueurs - 1 ||
             entierUtilisateur == numeroJoueur);
    if (entierUtilisateur == 0 && monopoly->tableauJoueur[entierUtilisateur].nombreProprietes > 0) {
        color(15, 0);
        printf("%s possede %d proprietee.\n", monopoly->tableauJoueur[entierUtilisateur].strNomJoueur,
               monopoly->tableauJoueur[entierUtilisateur].nombreProprietes);
        reponseProprieteFromJoueur = echangeAvec(monopoly, numeroJoueur, entierUtilisateur);
        reponseProprieteToJoueur = echangeAvec(monopoly, entierUtilisateur, numeroJoueur);
        echangeArgent(monopoly, numeroJoueur, reponseProprieteFromJoueur, entierUtilisateur, reponseProprieteToJoueur);
        echangerCartePropriete(monopoly, reponseProprieteFromJoueur, reponseProprieteToJoueur,
                               numeroJoueur, entierUtilisateur);
    } else if (entierUtilisateur == 1 && monopoly->tableauJoueur[entierUtilisateur].nombreProprietes > 0) {
        reponseProprieteFromJoueur = echangeAvec(monopoly, numeroJoueur, entierUtilisateur);
        reponseProprieteToJoueur = echangeAvec(monopoly, entierUtilisateur, numeroJoueur);
        echangeArgent(monopoly, numeroJoueur, reponseProprieteFromJoueur, entierUtilisateur, reponseProprieteToJoueur);
        echangerCartePropriete(monopoly, reponseProprieteFromJoueur, reponseProprieteToJoueur, numeroJoueur,
                               entierUtilisateur);
    } else if (entierUtilisateur == 2 && monopoly->tableauJoueur[entierUtilisateur].nombreProprietes > 0) {
        reponseProprieteFromJoueur = echangeAvec(monopoly, numeroJoueur, entierUtilisateur);
        reponseProprieteToJoueur = echangeAvec(monopoly, entierUtilisateur, numeroJoueur);
        echangeArgent(monopoly, numeroJoueur, reponseProprieteFromJoueur, entierUtilisateur, reponseProprieteToJoueur);
        echangerCartePropriete(monopoly, reponseProprieteFromJoueur, reponseProprieteToJoueur, numeroJoueur,
                               entierUtilisateur);
    } else if (entierUtilisateur == 3 && monopoly->tableauJoueur[entierUtilisateur].nombreProprietes > 0) {
        reponseProprieteFromJoueur = echangeAvec(monopoly, numeroJoueur, entierUtilisateur);
        reponseProprieteToJoueur = echangeAvec(monopoly, entierUtilisateur, numeroJoueur);
        echangeArgent(monopoly, numeroJoueur, reponseProprieteFromJoueur, entierUtilisateur, reponseProprieteToJoueur);
        echangerCartePropriete(monopoly, reponseProprieteFromJoueur, reponseProprieteToJoueur, numeroJoueur,
                               entierUtilisateur);
    }
}

void echangeArgent(Monopoly *monopoly, int fromJoueur, int reponseProprieteFrom, int toJoueur, int reponseProprieteTo) {
    color(15, 0);
    char choix, choixCarac, choixCarac2, choixVersement;
    int choixMonnaie = 0;
    do {
        printf("%s voulez vous que %s rajoute ou voulez vous (%s) ajouter de l'argent avec cette prop (A : ajout, R : rajout)\n",
               monopoly->tableauJoueur[fromJoueur].strNomJoueur, monopoly->tableauJoueur[toJoueur].strNomJoueur,
               monopoly->tableauJoueur[fromJoueur].strNomJoueur);
        fflush(stdin);
        scanf(" %c", &choix);
    } while (choix != 'A' && choix != 'R');

    if (choix == 'A') {
        printf("%s vous avez choisi d'ajouter de l'argent avec la propriete",
               monopoly->tableauJoueur[fromJoueur].strNomJoueur);
        color(monopoly->tableauPropriete[reponseProprieteFrom].couleurBackground, 0);
        printf(" %s ", monopoly->tableauPropriete[reponseProprieteFrom].strNomRue);
        color(15, 0);
        printf("pour echanger contre votre propriete");
        color(monopoly->tableauPropriete[reponseProprieteTo].couleurBackground, 0);
        printf(" %s\n", monopoly->tableauPropriete[reponseProprieteTo].strNomRue);
        color(15, 0);
        do {
            printf("Combien voulez vous rajouter ? (Entre 0 et %d)\n", monopoly->tableauJoueur[fromJoueur].soldeJoueur);
            fflush(stdin);
            scanf(" %d", &choixMonnaie);
        } while (haveSolde(monopoly, fromJoueur, choixMonnaie) == 0 || choixMonnaie < 0 || choixMonnaie > monopoly->tableauJoueur[fromJoueur].soldeJoueur);
        do {
            printf("%s vous allez verser %d euros a %s en plus de %s pour %s (O : Oui, N : Non)\n",
                   monopoly->tableauJoueur[fromJoueur].strNomJoueur, choixMonnaie,
                   monopoly->tableauJoueur[toJoueur].strNomJoueur,
                   monopoly->tableauPropriete[reponseProprieteTo].strNomRue,
                   monopoly->tableauPropriete[reponseProprieteFrom].strNomRue);
            scanf(" %c", &choixVersement);
        } while (choixVersement != 'O' && choixVersement != 'N');
        if (choixVersement == 'O') {
            printf("%s shouaite echanger sa propriete %d et %d euros contre votre propriete %d\n",
                   monopoly->tableauJoueur[fromJoueur].strNomJoueur, reponseProprieteTo, choixMonnaie,
                   reponseProprieteFrom);
            printf("Etes vous d'accord ? (O : Oui, N : Non)\n");
            fflush(stdin);
            scanf(" %c", &choixCarac2);
            if (choixCarac2 == 'O') {
                paiementJoueur(monopoly, fromJoueur, toJoueur, choixMonnaie);

            } else {
                printf("Echange annule");
            }
        } else {
            printf("Echange annule");
        }
    } else if (choix == 'R') {
        printf("%s vous avez choisi d'ajouter de l'argent avec la propriete",
               monopoly->tableauJoueur[toJoueur].strNomJoueur);
        color(monopoly->tableauPropriete[reponseProprieteTo].couleurBackground, 0);
        printf("%s", monopoly->tableauPropriete[reponseProprieteTo].strNomRue);
        color(15, 0);
        printf("pour echanger contre votre propriete");
        color(monopoly->tableauPropriete[reponseProprieteFrom].couleurBackground, 0);
        printf("%s\n", monopoly->tableauPropriete[reponseProprieteFrom].strNomRue);
        color(15, 0);
        do {
            printf("Combien voulez vous rajouter ? (Entre 0 et %d)\n", monopoly->tableauJoueur[toJoueur].soldeJoueur);
            fflush(stdin);
            scanf(" %d", &choixMonnaie);
        } while (haveSolde(monopoly, fromJoueur, choixMonnaie) == 0 && choixMonnaie < 0);
        do {
            printf("%s vous allez verser %d euros a %s en plus de %s pour %s (O : Oui, N : Non)\n",
                   monopoly->tableauJoueur[toJoueur].strNomJoueur, choixMonnaie,
                   monopoly->tableauJoueur[fromJoueur].strNomJoueur,
                   monopoly->tableauPropriete[reponseProprieteFrom].strNomRue,
                   monopoly->tableauPropriete[reponseProprieteTo].strNomRue);
            fflush(stdin);
            scanf(" %c", &choixCarac);
        } while (choixCarac != 'O' && choixCarac != 'N');
        if (choixCarac == 'O') {
            printf("%s shouaite echanger sa propriete %d et %d euros contre votre propriete %d\n",
                   monopoly->tableauJoueur[fromJoueur].strNomJoueur, reponseProprieteTo, choixMonnaie,
                   reponseProprieteFrom);
            printf("Etes vous d'accord ? (O : Oui, N : Non)\n");
            fflush(stdin);
            scanf(" %c", &choixCarac2);
            if (choixCarac2 == 'O') {
                paiementJoueur(monopoly, toJoueur, fromJoueur, choixMonnaie);
            } else {
                printf("Echange annule");
            }
        } else {
            printf("Echange annule");
        }
    }
}

void echangerCartePropriete(Monopoly *monopoly, int numeroProprieteJoueurQuiPropose, int numeroProprieteJoueurQuiAccepte,
                       int numeroJoueurQuiPropose, int numeroJoueurQuiAccepte) {
    Propriete temp;
    int temporaire;
    if (monopoly->tableauPropriete[numeroProprieteJoueurQuiPropose].nombreMaison < 1 &&
        monopoly->tableauPropriete[numeroProprieteJoueurQuiAccepte].nombreMaison < 1) {

        temp.tableauJoueur = monopoly->tableauPropriete[numeroProprieteJoueurQuiPropose].tableauJoueur;
        temporaire = monopoly->tableauPropriete[numeroProprieteJoueurQuiPropose].numeroJoueur;

        monopoly->tableauPropriete[numeroProprieteJoueurQuiPropose].tableauJoueur = &monopoly->tableauJoueur[numeroJoueurQuiAccepte];
        monopoly->tableauPropriete[numeroProprieteJoueurQuiPropose].numeroJoueur = monopoly->tableauPropriete[numeroProprieteJoueurQuiAccepte].numeroJoueur;
        monopoly->tableauPropriete[numeroProprieteJoueurQuiAccepte].tableauJoueur = temp.tableauJoueur;
        monopoly->tableauPropriete[numeroProprieteJoueurQuiAccepte].numeroJoueur = temporaire;
        printf("Echange effectuer avec succes !\n");

    } else {
        if (monopoly->tableauPropriete[numeroProprieteJoueurQuiPropose].nombreMaison > 0) {
            printf("%s, il reste %d maison(s) sur la proprietee %s.\n",
                   monopoly->tableauJoueur[numeroJoueurQuiPropose].strNomJoueur,
                   monopoly->tableauPropriete[numeroProprieteJoueurQuiPropose].nombreMaison,
                   monopoly->tableauPropriete[numeroProprieteJoueurQuiPropose].strNomRue);
        } else if (monopoly->tableauPropriete[numeroProprieteJoueurQuiAccepte].nombreMaison > 0) {
            printf("%s, il reste %d maison(s) sur la proprietee %s.\n",
                   monopoly->tableauJoueur[numeroJoueurQuiAccepte].strNomJoueur,
                   monopoly->tableauPropriete[numeroProprieteJoueurQuiAccepte].nombreMaison,
                   monopoly->tableauPropriete[numeroProprieteJoueurQuiAccepte].strNomRue);
        }
    }
}

int echangeAvec(Monopoly *monopoly, int numeroJoueur, int entierUtilisateur) {
    int reponsePropriete = 0;
    color(15, 0);
    printf("%s souhaite echanger une propriete avec %s\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur,
           monopoly->tableauJoueur[entierUtilisateur].strNomJoueur);
    if (monopoly->tableauPropriete[entierUtilisateur].nombreMaison == 0) {
        do {
            afficherToutesPropJoueur(monopoly, entierUtilisateur);
            color(15, 0);
            printf("%s, laquelle de ces proprietes vous interesse ?\n",
                   monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
            scanf(" %d", &reponsePropriete);
        } while (isProprieteDeJoueurX(monopoly, reponsePropriete, entierUtilisateur) == 0);
    }
    return reponsePropriete;
}

void isJoueurEliminer(Monopoly *monopoly) {
    for (int i = 0; i < monopoly->nombreJoueurs; ++i) {
        if (monopoly->tableauJoueur[i].isJoueurActif == 0) {
            monopoly->nombreJoueurs -= 1;
        }
    }
}

int dernierJoueur(Monopoly *monopoly) {
    for (int i = 0; i < 4; ++i) {
        if (monopoly->tableauJoueur[i].isJoueurActif == 1) {
            return (monopoly->tableauJoueur[i].numeroJoueur - 1);
        }
    }
}






