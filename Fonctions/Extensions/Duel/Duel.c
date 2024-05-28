#include "Duel.h"
#include "../../Cartes/cartes.h"
#include "../../De/de.h"
#include "../../Monnaie/monnaie.h"
#include <stdio.h>

void carteDuel(Monopoly* monopoly, int numeroJoueur){
    int choixJoueur, somme1, somme2;
    char choixCar;
    if(tirerUneCarteCommunaute(monopoly) == 11){
        do{
            afficherActionCarteCommunaute(monopoly, 10);
            for (int i = 0; i <monopoly->nombreJoueurs; ++i) {
                if (i != numeroJoueur){
                    printf("%s est pret au defi : pour le defier taper %d\n", monopoly->tableauJoueur[i].strNomJoueur, i);
                }
            }
            scanf(" %d", &choixJoueur);
        }while(choixJoueur == numeroJoueur || choixJoueur < 0 || choixJoueur > monopoly->nombreJoueurs - 1);
        printf(" %s, %s vous a selectionner pour dudududueeel\n", monopoly->tableauJoueur[choixJoueur].strNomJoueur,
               monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
        printf("Vous allez vous affrontez dans un duel de des ! Vous connaisez les enjeux ne trembler pas !\n");
        do {
            printf("%s a vous de commencer ! (D : lancer les des)\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
            fflush(stdin);
            scanf("%c", &choixCar);
        } while (choixCar!='D' );
        somme1 = tirEtSommeDeDes();
        printf("%s vous avez fait : %d\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, somme1);
        do {
            printf("%s a vous de jouer ! (D : lancer les des)\n", monopoly->tableauJoueur[choixJoueur].strNomJoueur);
            fflush(stdin);
            scanf("%c", &choixCar);
        }while (choixCar!='D' );
        somme2 = tirEtSommeDeDes();
        printf("%s vous avez fait : %d\n", monopoly->tableauJoueur[choixJoueur].strNomJoueur, somme2);
        if(somme1>somme2){
            printf("%s vous avez gagne !! \n%s vous doit 50 euros.\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur,
                   monopoly->tableauJoueur[choixJoueur].strNomJoueur);
            paiementJoueur(monopoly, choixJoueur, numeroJoueur, 50);
        }
        else if(somme2>somme1){
            printf("%s vous avez gagne !! \n%s vous doit 50 euros.\n", monopoly->tableauJoueur[choixJoueur].strNomJoueur,
                   monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
            paiementJoueur(monopoly, numeroJoueur, choixJoueur, 50);
        }
        else{
            do {
                printf("Vous avez fait egalite! Rejouez !\n");
                do {
                    printf("%s a vous de commencer ! (D : lancer les des)\n",
                           monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                    fflush(stdin);
                    scanf("%c", &choixCar);
                } while (choixCar != 'D');
                somme1 = tirEtSommeDeDes();
                printf("%s vous avez fait : %d\n", monopoly->tableauJoueur[numeroJoueur].strNomJoueur, somme1);
                do {
                    printf("%s a vous de jouer ! (D : lancer les des)\n", monopoly->tableauJoueur[choixJoueur].strNomJoueur);
                    fflush(stdin);
                    scanf("%c", &choixCar);
                } while (choixCar != 'D');
                somme2 = tirEtSommeDeDes();
                printf("%s vous avez fait : %d\n", monopoly->tableauJoueur[choixJoueur].strNomJoueur, somme2);
                if (somme1 > somme2) {
                    printf("%s vous avez gagne !! \n%s vous doit 50 euros.\n",
                           monopoly->tableauJoueur[numeroJoueur].strNomJoueur,
                           monopoly->tableauJoueur[choixJoueur].strNomJoueur);
                    paiementJoueur(monopoly, choixJoueur, numeroJoueur, 50);
                } else if (somme2 > somme1) {
                    printf("%s vous avez gagne !! \n%s vous doit 50 euros.\n",
                           monopoly->tableauJoueur[choixJoueur].strNomJoueur,
                           monopoly->tableauJoueur[numeroJoueur].strNomJoueur);
                    paiementJoueur(monopoly, numeroJoueur, choixJoueur, 50);
                }
            }while(somme1==somme2);
        }
    }
}