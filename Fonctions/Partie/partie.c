#include "partie.h"
#include "string.h"
#include "stdio.h"
#include "../De/de.h"
#include "../Plateau/plateau.h"
#include "../Hypotheque/hypotheque.h"
#include "../Immobilier/immobilier.h"
#include "../Cartes/cartes.h"
#include "../Monnaie/monnaie.h"
#include "../Prison/Prison.h"
#include "../Joueur/Joueur.h"
#include "../Sauvegarde/sauvegarde.h"
#include "../Menu/menu.h"


Monopoly initialiserPartie() {

    Monopoly monopoly;

    monopoly.tableauJoueur->tableauCartesChance = monopoly.tableauCartesChance;
    monopoly.tableauJoueur->tableauCartesCommunaute = monopoly.tableauCartesCommunaute;
    monopoly.plateau->tableauJoueur = monopoly.tableauJoueur;
    monopoly.plateau->tableauPropriete = monopoly.tableauPropriete;
    monopoly.tableauPropriete->tableauJoueur = monopoly.tableauJoueur;


    for (int i = 0; i < 16; i++) {
        monopoly.tableauPropriete[i * 2 + 1].tableauJoueur = NULL;
        monopoly.tableauPropriete[i * 2 + 1].isBatiment = 1;
        monopoly.tableauPropriete[i * 2 + 1].nombreMaison = 0;
        monopoly.tableauPropriete[i * 2 + 1].nombreHotel = 0;
        monopoly.tableauPropriete[i * 2 + 1].isHypothequee = 0;
        monopoly.tableauPropriete[i * 2 + 1].numeroJoueur = -1;
    }


    for (int i = 0; i < 16; i++) {
        monopoly.tableauPropriete[i * 2].tableauJoueur = NULL;
        monopoly.tableauPropriete[i * 2].isBatiment = 0;
        monopoly.tableauPropriete[i * 2].nombreMaison = 0;
        monopoly.tableauPropriete[i * 2].nombreHotel = 0;
        monopoly.tableauPropriete[i * 2].isHypothequee = 0;
        monopoly.tableauPropriete[i * 2].numeroJoueur = -1;
    }




    for (int i = 0; i < 32; i++) {
#ifdef WIN32
        monopoly.tableauPropriete[2 * i].isBatiment = 0;
#else
        monopoly.tableauPropriete[i].numeroJoueur = -1;
#endif
        monopoly.plateau[i].numeroCase = i + 1;
    }

    for (int i = 0; i < 4; i++) {
        monopoly.tableauJoueur[i].numeroJoueur = i + 1;
        monopoly.tableauJoueur[i].couleurJoueur = i + 1;
        monopoly.tableauJoueur[i].isJoueurActif = 0;
        monopoly.tableauJoueur[i].isPrisonnier = 0;
        monopoly.tableauJoueur[i].nombreDeTourEnPrison = 0;
        monopoly.tableauJoueur[i].nombreHotels = 0;
        monopoly.tableauJoueur[i].nombreMaisons = 0;
        monopoly.tableauJoueur[i].nombreProprietes = 0;
        monopoly.tableauJoueur[i].positionSurPlateau = 32;
        monopoly.tableauJoueur[i].soldeJoueur = 1500;
        monopoly.tableauJoueur[i].caracterePion = '#' + i;
        monopoly.tableauJoueur[i].tableauCartesCommunaute = NULL;
        monopoly.tableauJoueur[i].tableauCartesChance = NULL;
        monopoly.tableauJoueur[i].cartePrisonCommunaute = 0;
        monopoly.tableauJoueur[i].cartePrisonChance = 0;

    }

    strcpy(monopoly.tableauJoueur[0].strNomJoueur, "Joueur 1");
    strcpy(monopoly.tableauJoueur[1].strNomJoueur, "Joueur 2");
    strcpy(monopoly.tableauJoueur[2].strNomJoueur, "Joueur 3");
    strcpy(monopoly.tableauJoueur[3].strNomJoueur, "Joueur 4");


    strcpy(monopoly.tableauPropriete[0].strNomRue, "Case depart");
    strcpy(monopoly.tableauPropriete[0].strNomRueInitiales, "Case depart");
    monopoly.tableauPropriete[0].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[1].strNomRue, "Boulevard de Belleville");
    strcpy(monopoly.tableauPropriete[1].strNomRueInitiales, "Belleville");
    strcpy(monopoly.tableauPropriete[2].strNomRue, "Taxe d'habitation : Payez 100euros");
    strcpy(monopoly.tableauPropriete[2].strNomRueInitiales, "Taxe hab");
    monopoly.tableauPropriete[2].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[3].strNomRue, "Rue Lecourbe");
    strcpy(monopoly.tableauPropriete[3].strNomRueInitiales, "RueLecourbe");
    strcpy(monopoly.tableauPropriete[4].strNomRue, "Raccourci : Avancez a la case 13");
    strcpy(monopoly.tableauPropriete[4].strNomRueInitiales, "Rac->13");
    monopoly.tableauPropriete[4].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[5].strNomRue, "Rue de Courcelles");
    strcpy(monopoly.tableauPropriete[5].strNomRueInitiales, "R. Courcel");
    strcpy(monopoly.tableauPropriete[6].strNomRue, "Tirez une carte communaute");
    strcpy(monopoly.tableauPropriete[6].strNomRueInitiales, "Commu");
    monopoly.tableauPropriete[6].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[7].strNomRue, "Avenue de la Republique");
    strcpy(monopoly.tableauPropriete[7].strNomRueInitiales, "Av. Repu");
    strcpy(monopoly.tableauPropriete[8].strNomRue, "Case Prison");
    strcpy(monopoly.tableauPropriete[8].strNomRueInitiales, "Prison");
    monopoly.tableauPropriete[8].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[9].strNomRue, "Avenue de Neuilly");
    strcpy(monopoly.tableauPropriete[9].strNomRueInitiales, "Av. Neuilly");
    strcpy(monopoly.tableauPropriete[10].strNomRue, "Impot sur la fortune : Payez 100euros");
    strcpy(monopoly.tableauPropriete[10].strNomRueInitiales, "Impots");
    monopoly.tableauPropriete[10].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[11].strNomRue, "Rue de Paradis");
    strcpy(monopoly.tableauPropriete[11].strNomRueInitiales, "R. Paradis");
    strcpy(monopoly.tableauPropriete[12].strNomRue, "Raccourci : Avancez a la case 21");
    strcpy(monopoly.tableauPropriete[12].strNomRueInitiales, "Rac->21");
    monopoly.tableauPropriete[12].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[13].strNomRue, "Boulevard Saint-Michel");
    strcpy(monopoly.tableauPropriete[13].strNomRueInitiales, "Bd. StMich");
    strcpy(monopoly.tableauPropriete[14].strNomRue, "Tirez une carte chance");
    strcpy(monopoly.tableauPropriete[14].strNomRueInitiales, "Chance");
    monopoly.tableauPropriete[14].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[15].strNomRue, "Place Pigalle");
    strcpy(monopoly.tableauPropriete[15].strNomRueInitiales, "Pl. Pigalle");
    strcpy(monopoly.tableauPropriete[16].strNomRue, "Case stationnement gratuit");
    strcpy(monopoly.tableauPropriete[16].strNomRueInitiales, "Gratuit");
    monopoly.tableauPropriete[16].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[17].strNomRue, "Avenue Matignon");
    strcpy(monopoly.tableauPropriete[17].strNomRueInitiales, "Av. Matigon");
    strcpy(monopoly.tableauPropriete[18].strNomRue, "Taxe produits de luxe : Payez 200euros");
    strcpy(monopoly.tableauPropriete[18].strNomRueInitiales, "Taxes");
    monopoly.tableauPropriete[18].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[19].strNomRue, "Avenue Henri-Martin");
    strcpy(monopoly.tableauPropriete[19].strNomRueInitiales, "Av. HenrMar");
    strcpy(monopoly.tableauPropriete[20].strNomRue, "Raccourci : Avancez a la case 29");
    strcpy(monopoly.tableauPropriete[20].strNomRueInitiales, "Rac->29");
    monopoly.tableauPropriete[20].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[21].strNomRue, "Place de la Bourse");
    strcpy(monopoly.tableauPropriete[21].strNomRueInitiales, "Pl. Bourse");
    strcpy(monopoly.tableauPropriete[22].strNomRue, "Tirez une carte communautee");
    strcpy(monopoly.tableauPropriete[22].strNomRueInitiales, "Commu");
    monopoly.tableauPropriete[22].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[23].strNomRue, "Rue la Fayette");
    strcpy(monopoly.tableauPropriete[23].strNomRueInitiales, "R. Fayette");
    strcpy(monopoly.tableauPropriete[24].strNomRue, "Allez en prison");
    strcpy(monopoly.tableauPropriete[24].strNomRueInitiales, "->Prison");
    monopoly.tableauPropriete[24].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[25].strNomRue, "Avenue Foch");
    strcpy(monopoly.tableauPropriete[25].strNomRueInitiales, "Av. Foch");
    strcpy(monopoly.tableauPropriete[26].strNomRue, "Vous trouvez 50euros par terre");
    strcpy(monopoly.tableauPropriete[26].strNomRueInitiales, "50euros");
    monopoly.tableauPropriete[26].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[27].strNomRue, "Boulevard des Capucins");
    strcpy(monopoly.tableauPropriete[27].strNomRueInitiales, "Bd. Capu");
    strcpy(monopoly.tableauPropriete[28].strNomRue,
           "Raccourci : Avancez a la case 5");
    strcpy(monopoly.tableauPropriete[28].strNomRueInitiales, "Rac->5");
    monopoly.tableauPropriete[28].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[29].strNomRue, "Avenue des Champs-Elysees");
    strcpy(monopoly.tableauPropriete[29].strNomRueInitiales, "Av. ChpsEl");
    strcpy(monopoly.tableauPropriete[30].strNomRue, "Tirez une carte chance");
    strcpy(monopoly.tableauPropriete[30].strNomRueInitiales, "Chance");
    monopoly.tableauPropriete[30].couleurBackground = 7;
    strcpy(monopoly.tableauPropriete[31].strNomRue, "Rue de la Paix");
    strcpy(monopoly.tableauPropriete[31].strNomRueInitiales, "R. delaPaix");

    monopoly.nombreMaisonBanque = 32;
    monopoly.nombreHotelBanque = 12;

    //initialisation paramètres groupe 1 propriété 1
    monopoly.tableauPropriete[1].couleurBackground = 6;
    monopoly.tableauPropriete[1].couleurPolice = 0;
    monopoly.tableauPropriete[1].prixAchatPropriete = 60;
    monopoly.tableauPropriete[1].loyerPropriete = 2;
    monopoly.tableauPropriete[1].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[1].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[1].prixUneMaison = 50;
    monopoly.tableauPropriete[1].prixHypotheque = 30;

    //initialisation paramètres groupe 1 propriété 2
    monopoly.tableauPropriete[3].couleurBackground = 6;
    monopoly.tableauPropriete[3].couleurPolice = 0;
    monopoly.tableauPropriete[3].prixAchatPropriete = 60;
    monopoly.tableauPropriete[3].loyerPropriete = 4;
    monopoly.tableauPropriete[3].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[3].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[3].prixUneMaison = 50;
    monopoly.tableauPropriete[3].prixHypotheque = 30;

    //initialisation paramètres groupe 2 propriété 1
    monopoly.tableauPropriete[5].couleurBackground = 11;
    monopoly.tableauPropriete[5].couleurPolice = 0;
    monopoly.tableauPropriete[5].prixAchatPropriete = 100;
    monopoly.tableauPropriete[5].loyerPropriete = 6;
    monopoly.tableauPropriete[5].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[5].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[5].prixUneMaison = 50;
    monopoly.tableauPropriete[5].prixHypotheque = 50;

    //initialisation paramètres groupe 2 propriété 2
    monopoly.tableauPropriete[7].couleurBackground = 11;
    monopoly.tableauPropriete[7].couleurPolice = 0;
    monopoly.tableauPropriete[7].prixAchatPropriete = 120;
    monopoly.tableauPropriete[7].loyerPropriete = 8;
    monopoly.tableauPropriete[7].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[7].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[7].prixUneMaison = 50;
    monopoly.tableauPropriete[7].prixHypotheque = 60;

    //initialisation paramètres groupe 3 propriété 1
    monopoly.tableauPropriete[9].couleurBackground = 5;
    monopoly.tableauPropriete[9].couleurPolice = 0;
    monopoly.tableauPropriete[9].prixAchatPropriete = 140;
    monopoly.tableauPropriete[9].loyerPropriete = 10;
    monopoly.tableauPropriete[9].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[9].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[9].prixUneMaison = 100;
    monopoly.tableauPropriete[9].prixHypotheque = 70;

    //initialisation paramètres groupe 3 propriété 2
    monopoly.tableauPropriete[11].couleurBackground = 5;
    monopoly.tableauPropriete[11].couleurPolice = 0;
    monopoly.tableauPropriete[11].prixAchatPropriete = 160;
    monopoly.tableauPropriete[11].loyerPropriete = 12;
    monopoly.tableauPropriete[11].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[11].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[11].prixUneMaison = 100;
    monopoly.tableauPropriete[11].prixHypotheque = 80;

    //initialisation paramètres groupe 4 propriété 1
    monopoly.tableauPropriete[13].couleurBackground = 12;
    monopoly.tableauPropriete[13].couleurPolice = 0;
    monopoly.tableauPropriete[13].prixAchatPropriete = 180;
    monopoly.tableauPropriete[13].loyerPropriete = 14;
    monopoly.tableauPropriete[13].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[13].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[13].prixUneMaison = 100;
    monopoly.tableauPropriete[13].prixHypotheque = 90;

    //initialisation paramètres groupe 4 propriété 2
    monopoly.tableauPropriete[15].couleurBackground = 12;
    monopoly.tableauPropriete[15].couleurPolice = 0;
    monopoly.tableauPropriete[15].prixAchatPropriete = 200;
    monopoly.tableauPropriete[15].loyerPropriete = 16;
    monopoly.tableauPropriete[15].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[15].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[15].prixUneMaison = 100;
    monopoly.tableauPropriete[15].prixHypotheque = 100;

    //initialisation paramètres groupe 5 propriété 1
    monopoly.tableauPropriete[17].couleurBackground = 4;
    monopoly.tableauPropriete[17].couleurPolice = 0;
    monopoly.tableauPropriete[17].prixAchatPropriete = 220;
    monopoly.tableauPropriete[17].loyerPropriete = 18;
    monopoly.tableauPropriete[17].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[17].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[17].prixUneMaison = 150;
    monopoly.tableauPropriete[17].prixHypotheque = 110;

    //initialisation paramètres groupe 5 propriété 2
    monopoly.tableauPropriete[19].couleurBackground = 4;
    monopoly.tableauPropriete[19].couleurPolice = 0;
    monopoly.tableauPropriete[19].prixAchatPropriete = 240;
    monopoly.tableauPropriete[19].loyerPropriete = 20;
    monopoly.tableauPropriete[19].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[19].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[19].prixUneMaison = 150;
    monopoly.tableauPropriete[19].prixHypotheque = 120;

    //initialisation paramètres groupe 6 propriété 1
    monopoly.tableauPropriete[21].couleurBackground = 14;
    monopoly.tableauPropriete[21].couleurPolice = 0;
    monopoly.tableauPropriete[21].prixAchatPropriete = 260;
    monopoly.tableauPropriete[21].loyerPropriete = 22;
    monopoly.tableauPropriete[21].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[21].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[21].prixUneMaison = 150;
    monopoly.tableauPropriete[21].prixHypotheque = 130;

    //initialisation paramètres groupe 6 propriété 2
    monopoly.tableauPropriete[23].couleurBackground = 14;
    monopoly.tableauPropriete[23].couleurPolice = 0;
    monopoly.tableauPropriete[23].prixAchatPropriete = 280;
    monopoly.tableauPropriete[23].loyerPropriete = 24;
    monopoly.tableauPropriete[23].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[23].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[23].prixUneMaison = 150;
    monopoly.tableauPropriete[23].prixHypotheque = 140;

    //initialisation paramètres groupe 7 propriété 1
    monopoly.tableauPropriete[25].couleurBackground = 2;
    monopoly.tableauPropriete[25].couleurPolice = 0;
    monopoly.tableauPropriete[25].prixAchatPropriete = 300;
    monopoly.tableauPropriete[25].loyerPropriete = 26;
    monopoly.tableauPropriete[25].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[25].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[25].prixUneMaison = 200;
    monopoly.tableauPropriete[25].prixHypotheque = 150;

    //initialisation paramètres groupe 7 propriété 2
    monopoly.tableauPropriete[27].couleurBackground = 2;
    monopoly.tableauPropriete[27].couleurPolice = 0;
    monopoly.tableauPropriete[27].prixAchatPropriete = 320;
    monopoly.tableauPropriete[27].loyerPropriete = 28;
    monopoly.tableauPropriete[27].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[27].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[27].prixUneMaison = 200;
    monopoly.tableauPropriete[27].prixHypotheque = 160;

    //initialisation paramètres groupe 8 propriété 1
    monopoly.tableauPropriete[29].couleurBackground = 1;
    monopoly.tableauPropriete[29].couleurPolice = 0;
    monopoly.tableauPropriete[29].prixAchatPropriete = 350;
    monopoly.tableauPropriete[29].loyerPropriete = 35;
    monopoly.tableauPropriete[29].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[29].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[29].prixUneMaison = 200;
    monopoly.tableauPropriete[29].prixHypotheque = 175;

    //initialisation paramètres groupe 8 propriété 2
    monopoly.tableauPropriete[31].couleurBackground = 1;
    monopoly.tableauPropriete[31].couleurPolice = 0;
    monopoly.tableauPropriete[31].prixAchatPropriete = 400;
    monopoly.tableauPropriete[31].loyerPropriete = 50;
    monopoly.tableauPropriete[31].coefLoyerUneMaison = 5.0f;
    monopoly.tableauPropriete[31].coefLoyerPlusMaison = 3.0f;
    monopoly.tableauPropriete[31].prixUneMaison = 200;
    monopoly.tableauPropriete[31].prixHypotheque = 200;
#ifdef WIN32
#else
    monopoly.tableauPropriete[24].isBatiment = 0;
#endif

    if (0) {
        monopoly.tableauPropriete[3].numeroJoueur = 0;
        monopoly.tableauPropriete[3].tableauJoueur = &monopoly.tableauJoueur[0];
        monopoly.tableauPropriete[21].numeroJoueur = 0;
        monopoly.tableauPropriete[21].tableauJoueur = &monopoly.tableauJoueur[0];
        monopoly.tableauPropriete[7].numeroJoueur = 0;
        monopoly.tableauPropriete[7].tableauJoueur = &monopoly.tableauJoueur[0];
        monopoly.tableauPropriete[13].numeroJoueur = 0;
        monopoly.tableauPropriete[13].tableauJoueur = &monopoly.tableauJoueur[0];
        monopoly.tableauPropriete[13].nombreHotel = 1;
        monopoly.tableauPropriete[15].numeroJoueur = 0;
        monopoly.tableauPropriete[15].tableauJoueur = &monopoly.tableauJoueur[0];
        monopoly.tableauPropriete[15].nombreMaison = 3;
        monopoly.tableauJoueur->nombreMaisons = 5;
        monopoly.tableauJoueur->nombreHotels = 1;
        monopoly.tableauPropriete[25].numeroJoueur = 0;
        monopoly.tableauPropriete[25].tableauJoueur = &monopoly.tableauJoueur[0];
        monopoly.tableauJoueur[0].nombreProprietes = 6;
    }

    return monopoly;

}


void presentation(Monopoly *monopoly) {
    int nbJoueurs;
    printf("Bonjour, bienvenue au jeu du Monopoly !\n");
    do {
        printf("Combien etes-vous ? (Min : 2, Max : 4)\n");
        fflush(stdin);
        scanf(" %d", &nbJoueurs);
    } while (nbJoueurs < 2 || nbJoueurs > 4);
    for (int i = 0; i < nbJoueurs; ++i) {
        monopoly->tableauJoueur[i].isJoueurActif = 1;
    }
    monopoly->nombreJoueurs = nbJoueurs;


    for (int i = 0; i < nbJoueurs; i++) {
        printf("Salut %s, donne moi ton prenom :\n", monopoly->tableauJoueur[i].strNomJoueur);
        fflush(stdin);
        fgets(monopoly->tableauJoueur[i].strNomJoueur, 100, stdin);
        if (monopoly->tableauJoueur[i].strNomJoueur[strlen(monopoly->tableauJoueur[i].strNomJoueur) - 1] == '\n') {
            monopoly->tableauJoueur[i].strNomJoueur[strlen(monopoly->tableauJoueur[i].strNomJoueur) - 1] = '\0';
        }
        printf("Bien enregistre %s.\n", monopoly->tableauJoueur[i].strNomJoueur);
    }

    for (int i = 0; i < nbJoueurs; i++) {
        monopoly->tableauJoueur[i].positionSurPlateau = 0;

    }

}

void tirageAuSortOrdreJoueur(Monopoly *monopoly) {

    int scoreJoueur1, scoreJoueur2, scoreJoueur3, scoreJoueur4;
    char carac;


    printf("Determinons l'ordre de passage des joueurs !\n");

    if (monopoly->nombreJoueurs == 2) {
        do {
            do {
                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[0].strNomJoueur);
                fflush(stdin);
                scanf(" %c", &carac);
            } while (carac != 'D' && carac != 'd');
            scoreJoueur1 = tirEtSommeDeDes();
            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

            do {
                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                fflush(stdin);
                scanf("%c", &carac);
            } while (carac != 'D' && carac != 'd');
            scoreJoueur2 = tirEtSommeDeDes();
            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

            if (scoreJoueur1 > scoreJoueur2) { //J1 > J2
                printf("%s a fait plus que %s il/elle commence donc !\n", monopoly->tableauJoueur[0].strNomJoueur,
                       monopoly->tableauJoueur[1].strNomJoueur);
                break;

            } else if (scoreJoueur2 > scoreJoueur1) { //J2 > J1
                printf("%s a fait plus que %s il/elle commence donc !\n", monopoly->tableauJoueur[1].strNomJoueur,
                       monopoly->tableauJoueur[0].strNomJoueur);
                Joueur temp = monopoly->tableauJoueur[0];
                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                monopoly->tableauJoueur[1] = temp;
                printf("joueur 1 %s, joueur 2 %s\n", monopoly->tableauJoueur[0].strNomJoueur,
                       monopoly->tableauJoueur[1].strNomJoueur);
                break;
            } else {
                printf("Egalite recommencons !\n");
            }
        } while (scoreJoueur2 == scoreJoueur1);
    }

    if (monopoly->nombreJoueurs == 3) {

        do {
            do {
                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[0].strNomJoueur);
                fflush(stdin);
                scanf(" %c", &carac);
            } while (carac != 'D' && carac != 'd');
            scoreJoueur1 = tirEtSommeDeDes();
            printf("Tu as fait %d ! Joli score %s ;) \n", scoreJoueur1, monopoly->tableauJoueur[0].strNomJoueur);

            do {
                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                fflush(stdin);
                scanf(" %c", &carac);
            } while (carac != 'D' && carac != 'd');
            scoreJoueur2 = tirEtSommeDeDes();
            printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur2, monopoly->tableauJoueur[1].strNomJoueur);

            do {
                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                fflush(stdin);
                scanf(" %c", &carac);
            } while (carac != 'D' && carac != 'd');
            scoreJoueur3 = tirEtSommeDeDes();
            printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur3, monopoly->tableauJoueur[2].strNomJoueur);

            if (scoreJoueur1 > scoreJoueur2 && scoreJoueur1 > scoreJoueur3) { //J1 > J2et3
                printf("%s a fait plus que %s et %s il/elle commence donc !\n",
                       monopoly->tableauJoueur[0].strNomJoueur, monopoly->tableauJoueur[1].strNomJoueur,
                       monopoly->tableauJoueur[2].strNomJoueur);


                if (scoreJoueur2 > scoreJoueur3 && scoreJoueur2 < scoreJoueur1) { //J1 > J2 > J3 conserve l'ordre
                    printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                           monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);
                    break;
                } else if (scoreJoueur3 > scoreJoueur2 && scoreJoueur3 < scoreJoueur1) { //J1 > J3 > J2
                    printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                           monopoly->tableauJoueur[2].strNomJoueur, monopoly->tableauJoueur[1].strNomJoueur);
                    Joueur temporary = monopoly->tableauJoueur[1];
                    monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                    monopoly->tableauJoueur[2] = temporary;
                    break;
                } else if (scoreJoueur2 == scoreJoueur3) {

                    do {

                        printf("Egalite entre %s et %s vous devez relancer les des\n",
                               monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);

                        do {
                            printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur2 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur2,
                               monopoly->tableauJoueur[1].strNomJoueur);

                        do {
                            printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur3 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur3,
                               monopoly->tableauJoueur[2].strNomJoueur);

                        if (scoreJoueur2 > scoreJoueur3) { //conserve tout de même l'ordre
                            printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                                   monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);
                            break;
                        } else if (scoreJoueur3 > scoreJoueur2) { //J1 > J3 > J2
                            printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                                   monopoly->tableauJoueur[2].strNomJoueur, monopoly->tableauJoueur[1].strNomJoueur);
                            Joueur temporary = monopoly->tableauJoueur[1];
                            monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                            monopoly->tableauJoueur[2] = temporary;
                            break;
                        }

                    } while (scoreJoueur2 == scoreJoueur3);

                }

            } else if (scoreJoueur2 > scoreJoueur1 && scoreJoueur2 > scoreJoueur3) { //Joueur 2 > Joueur 1 et 3
                printf("%s a fait plus que %s et %s il/elle commence donc !\n",
                       monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[0].strNomJoueur,
                       monopoly->tableauJoueur[2].strNomJoueur);
                Joueur temporary = monopoly->tableauJoueur[0];
                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];


                if (scoreJoueur1 > scoreJoueur3 && scoreJoueur1 < scoreJoueur2) { //J2 > J1 > J3
                    printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                           monopoly->tableauJoueur[0].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);
                    monopoly->tableauJoueur[1] = temporary;
                    break;
                } else if (scoreJoueur3 > scoreJoueur1 && scoreJoueur3 < scoreJoueur2) { //J2 > J3 > J1
                    printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                           monopoly->tableauJoueur[2].strNomJoueur, monopoly->tableauJoueur[0].strNomJoueur);
                    monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                    monopoly->tableauJoueur[2] = temporary;
                    break;
                } else if (scoreJoueur1 == scoreJoueur3) {


                    do {

                        printf("Egalite entre %s et %s vous devez relancer les des\n", temporary.strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur);;

                        do {
                            printf("%s, entre D pour lancer les des\n", temporary.strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur2 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur1, temporary.strNomJoueur);

                        do {
                            printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur3 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur3,
                               monopoly->tableauJoueur[2].strNomJoueur);

                        if (scoreJoueur1 > scoreJoueur3) { //J2 > J1 > J3
                            printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                                   temporary.strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);
                            monopoly->tableauJoueur[1] = temporary;
                            break;
                        } else if (scoreJoueur3 > scoreJoueur1) { //J2 > J3 > J1
                            printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                                   monopoly->tableauJoueur[2].strNomJoueur, temporary.strNomJoueur);
                            monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                            monopoly->tableauJoueur[2] = temporary;
                            break;
                        }

                    } while (scoreJoueur1 == scoreJoueur3);

                }

            } else if (scoreJoueur3 > scoreJoueur1 && scoreJoueur3 > scoreJoueur2) { //Joueur 3 > Joueur 2 et 1
                printf("%s a fait plus que %s et %s il/elle commence donc !\n",
                       monopoly->tableauJoueur[2].strNomJoueur, monopoly->tableauJoueur[0].strNomJoueur,
                       monopoly->tableauJoueur[1].strNomJoueur);
                Joueur temporary = monopoly->tableauJoueur[0];
                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];


                if (scoreJoueur1 > scoreJoueur2 && scoreJoueur1 < scoreJoueur3) { //J3 > J1 > J2
                    printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                           temporary.strNomJoueur, monopoly->tableauJoueur[1].strNomJoueur);
                    Joueur temp = monopoly->tableauJoueur[1];
                    monopoly->tableauJoueur[1] = temporary;
                    monopoly->tableauJoueur[2] = temp;
                    break;
                } else if (scoreJoueur2 > scoreJoueur1 && scoreJoueur2 < scoreJoueur3) { //J3 > J2 > J1
                    printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                           monopoly->tableauJoueur[1].strNomJoueur, temporary.strNomJoueur);
                    monopoly->tableauJoueur[2] = temporary;
                    break;
                } else if (scoreJoueur1 == scoreJoueur2) {

                    do {

                        printf("Egalite entre %s et %s vous devez relancer les des\n", temporary.strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur);

                        do {
                            printf("%s, entre D pour lancer les des\n", temporary.strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur1 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur1, temporary.strNomJoueur);

                        do {
                            printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur2 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur2,
                               monopoly->tableauJoueur[1].strNomJoueur);

                        if (scoreJoueur1 > scoreJoueur2) { //J3 > J1 > J2
                            printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                                   temporary.strNomJoueur, monopoly->tableauJoueur[1].strNomJoueur);
                            Joueur temp = monopoly->tableauJoueur[1];
                            monopoly->tableauJoueur[1] = temporary;
                            monopoly->tableauJoueur[2] = temp;
                            break;
                        } else if (scoreJoueur2 > scoreJoueur1) { //J3 > J2 > J1
                            printf("%s a fait plus que %s il/elle est donc ensuite !\n",
                                   monopoly->tableauJoueur[1].strNomJoueur, temporary.strNomJoueur);
                            monopoly->tableauJoueur[2] = temporary;
                            break;
                        }

                    } while (scoreJoueur1 == scoreJoueur2);

                }


            } else if (scoreJoueur1 > scoreJoueur3 && scoreJoueur2 == scoreJoueur1 &&
                       scoreJoueur2 > scoreJoueur3) {//J1 == J2 > J3

                do {
                    printf("Egalite entre %s et %s vous devez relancer les des\n",
                           monopoly->tableauJoueur[0].strNomJoueur, monopoly->tableauJoueur[1].strNomJoueur);

                    do {
                        printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[0].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur1 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur1, monopoly->tableauJoueur[0].strNomJoueur);

                    do {
                        printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur2 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur2, monopoly->tableauJoueur[1].strNomJoueur);

                    if (scoreJoueur1 > scoreJoueur2) { //J1 > J2 > J3
                        printf("%s a fait plus que %s il/elle commence donc !\n",
                               monopoly->tableauJoueur[0].strNomJoueur, monopoly->tableauJoueur[1].strNomJoueur);
                    } else if (scoreJoueur2 > scoreJoueur1) { //J2 > J1 > J3
                        printf("%s a fait plus que %s il/elle commence donc !\n",
                               monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[0].strNomJoueur);
                        Joueur temporary = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = temporary;
                        break;
                    }

                } while (scoreJoueur1 == scoreJoueur2);

            } else if (scoreJoueur2 > scoreJoueur1 && scoreJoueur3 == scoreJoueur2 &&
                       scoreJoueur3 == scoreJoueur1) {//J2 == J3 > J1

                do {
                    printf("Egalite entre %s et %s vous devez relancer les des\n",
                           monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);

                    do {
                        printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur2 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur2, monopoly->tableauJoueur[1].strNomJoueur);

                    do {
                        printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur3 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur3, monopoly->tableauJoueur[2].strNomJoueur);

                    if (scoreJoueur2 > scoreJoueur3) { //J1 > J2 > J3
                        printf("%s a fait plus que %s il/elle commence donc !\n",
                               monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);
                        Joueur temporary = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temporary;

                    } else if (scoreJoueur3 > scoreJoueur2) { //J2 > J1 > J3
                        printf("%s a fait plus que %s il/elle commence donc !\n",
                               monopoly->tableauJoueur[2].strNomJoueur, monopoly->tableauJoueur[1].strNomJoueur);
                        Joueur temporary = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temporary;
                        break;
                    }

                } while (scoreJoueur2 == scoreJoueur3);


            } else if (scoreJoueur3 > scoreJoueur2 && scoreJoueur1 == scoreJoueur3 &&
                       scoreJoueur1 > scoreJoueur2) {//J1 == J3 > J2
                do {
                    printf("Egalite entre %s et %s vous devez relancer les des\n",
                           monopoly->tableauJoueur[0].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);

                    do {
                        printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[0].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur1 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur1, monopoly->tableauJoueur[0].strNomJoueur);

                    do {
                        printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur3 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score %s ;)\n", scoreJoueur3, monopoly->tableauJoueur[2].strNomJoueur);

                    if (scoreJoueur1 > scoreJoueur3) { //J1 > J3 > J2
                        printf("%s a fait plus que %s il/elle commence donc !\n",
                               monopoly->tableauJoueur[0].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);
                        Joueur temporary = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temporary;

                    } else if (scoreJoueur3 > scoreJoueur1) { //J3 > J1 > J2
                        printf("%s a fait plus que %s il/elle commence donc !\n",
                               monopoly->tableauJoueur[2].strNomJoueur, monopoly->tableauJoueur[0].strNomJoueur);
                        Joueur temporary = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = temporary;
                        break;
                    }

                } while (scoreJoueur1 == scoreJoueur3);
            }
        } while ((scoreJoueur1 == scoreJoueur2 && scoreJoueur1 == scoreJoueur3 && scoreJoueur3 == scoreJoueur2));

        printf("Pour recapituler nous avons donc %s qui commencera, suivi de %s, et enfin %s cloturera chaque tour.",
               monopoly->tableauJoueur[0].strNomJoueur, monopoly->tableauJoueur[1].strNomJoueur,
               monopoly->tableauJoueur[2].strNomJoueur);

    }

    if (monopoly->nombreJoueurs == 4) {

        do {
            if ((scoreJoueur1 == scoreJoueur2 && scoreJoueur2 == scoreJoueur3 && scoreJoueur3 == scoreJoueur4)) {
                printf("Egalite relancons les des\n");
            }
            do {
                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[0].strNomJoueur);
                scanf(" %c", &carac);
            } while (carac != 'D' && carac != 'd');
            scoreJoueur1 = tirEtSommeDeDes();
            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

            do {
                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                scanf(" %c", &carac);
            } while (carac != 'D' && carac != 'd');
            scoreJoueur2 = tirEtSommeDeDes();
            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

            do {
                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                scanf(" %c", &carac);
            } while (carac != 'D' && carac != 'd');
            scoreJoueur3 = tirEtSommeDeDes();
            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

            do {
                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[3].strNomJoueur);
                scanf(" %c", &carac);
            } while (carac != 'D' && carac != 'd');
            scoreJoueur4 = tirEtSommeDeDes();
            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

            if (scoreJoueur1 > scoreJoueur2 && scoreJoueur1 > scoreJoueur3 &&
                scoreJoueur1 > scoreJoueur4) {//J1 > J2 J3 J4

                if (scoreJoueur2 > scoreJoueur3 && scoreJoueur2 > scoreJoueur4) {//J1 > J2 > J3 J4
                    if (scoreJoueur3 > scoreJoueur4) {//J1 > J2 > J3 > J4
                        printf("%s commence suivi de %s, %s et enfin %s", monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                        break;
                    } else if (scoreJoueur4 > scoreJoueur3) {//J1 > J2 > J3 > J4
                        Joueur temp = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                        break;
                    } else if (scoreJoueur3 == scoreJoueur4) {
                        do {
                            printf("Egalite entre %s et %s relancons les des\n",
                                   monopoly->tableauJoueur[2].strNomJoueur,
                                   monopoly->tableauJoueur[3].strNomJoueur);
                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur3 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[3].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur4 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                            if (scoreJoueur3 > scoreJoueur4) {//J1 > J2 > J3 > J4
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;
                            } else if (scoreJoueur4 > scoreJoueur3) {//J1 > J2 > J3 > J4
                                Joueur temp = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;
                            }

                        } while (scoreJoueur3 == scoreJoueur4);
                    }

                } else if (scoreJoueur3 > scoreJoueur2 && scoreJoueur3 > scoreJoueur4) {//J1 > J3 > J2 J4
                    if (scoreJoueur2 > scoreJoueur4) {//J1 > J3 > J2 > J4
                        Joueur temp = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s", monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                        break;

                    } else if (scoreJoueur4 > scoreJoueur2) {//J1 > J3 > J4 > J2
                        Joueur temp = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s", monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                        break;

                    } else if (scoreJoueur4 == scoreJoueur2) {
                        do {
                            printf("Egalite entre %s et %s relancons les des\n",
                                   monopoly->tableauJoueur[1].strNomJoueur,
                                   monopoly->tableauJoueur[3].strNomJoueur);
                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur2 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[3].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur4 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                            if (scoreJoueur2 > scoreJoueur4) {//J1 > J3 > J2 > J4
                                Joueur temp = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;

                            } else if (scoreJoueur4 > scoreJoueur2) {//J1 > J3 > J4 > J2
                                Joueur temp = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;

                            }

                        } while (scoreJoueur2 == scoreJoueur4);
                    }

                } else if (scoreJoueur4 > scoreJoueur2 && scoreJoueur4 > scoreJoueur3) {//J1 > J4 > J2 J3
                    if (scoreJoueur2 > scoreJoueur3) {//J1 > J4 > J2 > J3
                        Joueur temp = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s", monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                        break;
                    } else if (scoreJoueur3 > scoreJoueur2) {//J1 > J4 > J3 > J2
                        Joueur temp = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                        break;

                    } else if (scoreJoueur2 == scoreJoueur3) {
                        do {
                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur2 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur3 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                            if (scoreJoueur2 > scoreJoueur3) {//J1 > J4 > J2 > J3
                                Joueur temp = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;
                            } else if (scoreJoueur3 > scoreJoueur2) {//J1 > J4 > J3 > J2
                                Joueur temp = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;

                            }
                        } while (scoreJoueur2 == scoreJoueur3);
                    }

                } else if (scoreJoueur2 == scoreJoueur3 && scoreJoueur3 == scoreJoueur4) {

                    do {
                        printf("Egalite entre %s, %s et %s, relancons les des\n",
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur, monopoly->tableauJoueur[3].strNomJoueur);

                        do {
                            printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur2 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                        do {
                            printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur3 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                        do {
                            printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[3].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur4 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                        if (scoreJoueur2 > scoreJoueur3 && scoreJoueur2 > scoreJoueur4) {//J1 > J2 > J3 J4
                            if (scoreJoueur3 > scoreJoueur4) {//J1 > J2 > J3 > J4
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;
                            } else if (scoreJoueur4 > scoreJoueur3) {//J1 > J2 > J3 > J4
                                Joueur temp = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;
                            } else if (scoreJoueur3 == scoreJoueur4) {
                                do {
                                    printf("Egalite entre %s et %s relancons les des\n",
                                           monopoly->tableauJoueur[2].strNomJoueur,
                                           monopoly->tableauJoueur[3].strNomJoueur);
                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[2].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur3 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur4 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                                    if (scoreJoueur3 > scoreJoueur4) {//J1 > J2 > J3 > J4
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        break;
                                    } else if (scoreJoueur4 > scoreJoueur3) {//J1 > J2 > J3 > J4
                                        Joueur temp = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        break;
                                    }

                                } while (scoreJoueur3 == scoreJoueur4);
                            }

                        } else if (scoreJoueur3 > scoreJoueur2 && scoreJoueur3 > scoreJoueur4) {//J1 > J3 > J2 J4
                            if (scoreJoueur2 > scoreJoueur4) {//J1 > J3 > J2 > J4
                                Joueur temp = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;

                            } else if (scoreJoueur4 > scoreJoueur2) {//J1 > J3 > J4 > J2
                                Joueur temp = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;

                            } else if (scoreJoueur4 == scoreJoueur2) {
                                do {
                                    printf("Egalite entre %s et %s relancons les des\n",
                                           monopoly->tableauJoueur[1].strNomJoueur,
                                           monopoly->tableauJoueur[3].strNomJoueur);
                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[1].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur2 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur4 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                                    if (scoreJoueur2 > scoreJoueur4) {//J1 > J3 > J2 > J4
                                        Joueur temp = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                        monopoly->tableauJoueur[2] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        break;

                                    } else if (scoreJoueur4 > scoreJoueur2) {//J1 > J3 > J4 > J2
                                        Joueur temp = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        break;
                                    }

                                } while (scoreJoueur2 == scoreJoueur4);
                            }

                        } else if (scoreJoueur4 > scoreJoueur2 && scoreJoueur4 > scoreJoueur3) {//J1 > J4 > J2 J3
                            if (scoreJoueur2 > scoreJoueur3) {//J1 > J4 > J2 > J3
                                Joueur temp = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;
                            } else if (scoreJoueur3 > scoreJoueur2) {//J1 > J4 > J3 > J2
                                Joueur temp = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                break;

                            } else if (scoreJoueur2 == scoreJoueur3) {
                                do {
                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[1].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur2 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[2].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur3 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                                    if (scoreJoueur2 > scoreJoueur3) {//J1 > J4 > J2 > J3
                                        Joueur temp = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                        monopoly->tableauJoueur[2] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        break;
                                    } else if (scoreJoueur3 > scoreJoueur2) {//J1 > J4 > J3 > J2
                                        Joueur temp = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        break;
                                    }
                                } while (scoreJoueur2 == scoreJoueur3);
                            }
                        }

                    } while (scoreJoueur2 == scoreJoueur3 && scoreJoueur3 == scoreJoueur4);
                }
            } else if (scoreJoueur2 > scoreJoueur1 && scoreJoueur2 > scoreJoueur3 &&
                       scoreJoueur2 > scoreJoueur4) {//J2 > J1 J3 J4
                if (scoreJoueur1 > scoreJoueur3 && scoreJoueur1 > scoreJoueur4) {//J2 > J1 > J3 J4
                    if (scoreJoueur3 > scoreJoueur4) {//J2 > J1 > J3 > J4
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur4 > scoreJoueur3) {//J2 > J1 > J4 > J3
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = temp;
                        temp = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur3 == scoreJoueur4) {
                        do {
                            printf("Egalite entre %s et %s, relancons les des\n",
                                   monopoly->tableauJoueur[2].strNomJoueur,
                                   monopoly->tableauJoueur[3].strNomJoueur);

                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur3 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[3].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur4 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                            if (scoreJoueur3 > scoreJoueur4) {//J2 > J1 > J3 > J4
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur4 > scoreJoueur3) {//J2 > J1 > J4 > J3
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                temp = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            }

                        } while (scoreJoueur3 == scoreJoueur4);

                    }

                } else if (scoreJoueur3 > scoreJoueur1 && scoreJoueur3 > scoreJoueur4) {//J2 > J3 > J1 J4
                    if (scoreJoueur1 > scoreJoueur4) {//J2 > J3 > J1 > J4
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur4 > scoreJoueur1) {//J2 > J3 > J4 > J1
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur1 == scoreJoueur4) {
                        do {
                            printf("Egalite entre %s et %s, relancons les des\n",
                                   monopoly->tableauJoueur[0].strNomJoueur,
                                   monopoly->tableauJoueur[3].strNomJoueur);

                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[0].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur1 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[3].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur4 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                            if (scoreJoueur1 > scoreJoueur4) {//J2 > J3 > J1 > J4
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur4 > scoreJoueur1) {//J2 > J3 > J4 > J1
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            }

                        } while (scoreJoueur1 == scoreJoueur4);
                    }
                } else if (scoreJoueur4 > scoreJoueur3 && scoreJoueur4 > scoreJoueur1) {//J2 > J4 > J1 J3
                    if (scoreJoueur1 > scoreJoueur3) {//J2 > J4 > J1 > J3
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur3 > scoreJoueur1) {//J2 > J4 > J3 > J1
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur3 == scoreJoueur1) {
                        do {
                            printf("Egalite entre %s et %s, relancons les des", monopoly->tableauJoueur[0].strNomJoueur,
                                   monopoly->tableauJoueur[2].strNomJoueur);

                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[0].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur1 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                            do {
                                printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[2].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur3 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                            if (scoreJoueur1 > scoreJoueur3) {//J2 > J4 > J1 > J3
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur3 > scoreJoueur1) {//J2 > J4 > J3 > J1
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            }
                        } while (scoreJoueur3 == scoreJoueur1);
                    }
                } else if (scoreJoueur4 == scoreJoueur1 && scoreJoueur3 == scoreJoueur1) {//J2 > J1=J3=J4
                    do {
                        printf("Egalite entre %s, %s et %s, relancons les des\n",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur, monopoly->tableauJoueur[3].strNomJoueur);
                        if (scoreJoueur1 > scoreJoueur3 && scoreJoueur1 > scoreJoueur4) {//J2 > J1 > J3 J4
                            if (scoreJoueur3 > scoreJoueur4) {//J2 > J1 > J3 > J4
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur4 > scoreJoueur3) {//J2 > J1 > J4 > J3
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                temp = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur3 == scoreJoueur4) {
                                do {
                                    printf("Egalite entre %s et %s, relancons les des\n",
                                           monopoly->tableauJoueur[2].strNomJoueur,
                                           monopoly->tableauJoueur[3].strNomJoueur);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[2].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur3 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur4 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                                    if (scoreJoueur3 > scoreJoueur4) {//J2 > J1 > J3 > J4
                                        Joueur temp = monopoly->tableauJoueur[0];
                                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                    } else if (scoreJoueur4 > scoreJoueur3) {//J2 > J1 > J4 > J3
                                        Joueur temp = monopoly->tableauJoueur[0];
                                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = temp;
                                        temp = monopoly->tableauJoueur[2];
                                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                    }

                                } while (scoreJoueur3 == scoreJoueur4);

                            }

                        } else if (scoreJoueur3 > scoreJoueur1 && scoreJoueur3 > scoreJoueur4) {//J2 > J3 > J1 J4
                            if (scoreJoueur1 > scoreJoueur4) {//J2 > J3 > J1 > J4
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur4 > scoreJoueur1) {//J2 > J3 > J4 > J1
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur1 == scoreJoueur4) {
                                do {
                                    printf("Egalite entre %s et %s, relancons les des\n",
                                           monopoly->tableauJoueur[0].strNomJoueur,
                                           monopoly->tableauJoueur[3].strNomJoueur);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[0].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur1 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur4 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                                    if (scoreJoueur1 > scoreJoueur4) {//J2 > J3 > J1 > J4
                                        Joueur temp = monopoly->tableauJoueur[0];
                                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                        monopoly->tableauJoueur[2] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                    } else if (scoreJoueur4 > scoreJoueur1) {//J2 > J3 > J4 > J1
                                        Joueur temp = monopoly->tableauJoueur[0];
                                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                    }

                                } while (scoreJoueur1 == scoreJoueur4);
                            }
                        } else if (scoreJoueur4 > scoreJoueur3 && scoreJoueur4 > scoreJoueur1) {//J2 > J4 > J1 J3
                            if (scoreJoueur1 > scoreJoueur3) {//J2 > J4 > J1 > J3
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur3 > scoreJoueur1) {//J2 > J4 > J3 > J1
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur3 == scoreJoueur1) {
                                do {
                                    printf("Egalite entre %s et %s, relancons les des",
                                           monopoly->tableauJoueur[0].strNomJoueur,
                                           monopoly->tableauJoueur[2].strNomJoueur);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[0].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur1 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[2].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur3 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                                    if (scoreJoueur1 > scoreJoueur3) {//J2 > J4 > J1 > J3
                                        Joueur temp = monopoly->tableauJoueur[0];
                                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                        monopoly->tableauJoueur[2] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                    } else if (scoreJoueur3 > scoreJoueur1) {//J2 > J4 > J3 > J1
                                        Joueur temp = monopoly->tableauJoueur[0];
                                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                    }
                                } while (scoreJoueur3 == scoreJoueur1);
                            }
                        }
                    } while (scoreJoueur4 == scoreJoueur3 && scoreJoueur3 == scoreJoueur1);
                }

            } else if (scoreJoueur3 > scoreJoueur2 && scoreJoueur3 > scoreJoueur4 &&
                       scoreJoueur3 > scoreJoueur1) {//J3 > J1 J2 J4
                if (scoreJoueur1 > scoreJoueur2 && scoreJoueur1 > scoreJoueur4) {//J3 > J1 > J2 J4
                    if (scoreJoueur2 > scoreJoueur4) {//J3 > J1 > J2 > J4
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur4 > scoreJoueur2) {//J3 > J1 > J4 > J2
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur4 == scoreJoueur2) {
                        do {
                            printf("Egalite entre %s et %s, relancons les des\n",
                                   monopoly->tableauJoueur[1].strNomJoueur,
                                   monopoly->tableauJoueur[3].strNomJoueur);
                            do {
                                printf("%s, entre D pour lancer les des\n",
                                       monopoly->tableauJoueur[1].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur2 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                            do {
                                printf("%s, entre D pour lancer les des\n",
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur4 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                            if (scoreJoueur2 > scoreJoueur4) {//J3 > J1 > J2 > J4
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur4 > scoreJoueur2) {//J3 > J1 > J4 > J2
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            }
                        } while (scoreJoueur4 == scoreJoueur2);
                    }
                } else if (scoreJoueur2 > scoreJoueur1 && scoreJoueur2 > scoreJoueur4) {//J3 > J2 > J1 J4
                    if (scoreJoueur1 > scoreJoueur4) {//J3 > J2 > J1 > J4
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur4 > scoreJoueur1) {//J3 > J2 > J4 > J1
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur4 == scoreJoueur1) {
                        do {
                            printf("Egalite entre %s et %s, relancons les des\n",
                                   monopoly->tableauJoueur[0].strNomJoueur,
                                   monopoly->tableauJoueur[3].strNomJoueur);

                            do {
                                printf("%s, entre D pour lancer les des\n",
                                       monopoly->tableauJoueur[3].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur4 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);

                            do {
                                printf("%s, entre D pour lancer les des\n",
                                       monopoly->tableauJoueur[0].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur1 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                            if (scoreJoueur1 > scoreJoueur4) {//J3 > J2 > J1 > J4
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur4 > scoreJoueur1) {//J3 > J2 > J4 > J1
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            }
                        } while (scoreJoueur1 == scoreJoueur4);
                    }
                } else if (scoreJoueur4 > scoreJoueur2 && scoreJoueur4 > scoreJoueur1) {//J3 > J4 > J1 J2
                    if (scoreJoueur1 > scoreJoueur2) {//J3 > J4 > J1 > J2
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temp;
                        temp = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur2 > scoreJoueur1) {//J3 > J4 > J2 > J1
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur2 == scoreJoueur1) {
                        do {
                            printf("Egalite entre %s et %s, relancons les des\n",
                                   monopoly->tableauJoueur[0].strNomJoueur,
                                   monopoly->tableauJoueur[1].strNomJoueur);
                            do {
                                printf("%s, entre D pour lancer les des\n",
                                       monopoly->tableauJoueur[1].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur2 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                            do {
                                printf("%s, entre D pour lancer les des\n",
                                       monopoly->tableauJoueur[0].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur1 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                            if (scoreJoueur1 > scoreJoueur2) {//J3 > J4 > J1 > J2
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                temp = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur2 > scoreJoueur1) {//J3 > J4 > J2 > J1
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            }

                        } while (scoreJoueur2 == scoreJoueur1);
                    }
                }
            } else if (scoreJoueur4 > scoreJoueur1 && scoreJoueur4 > scoreJoueur2 &&
                       scoreJoueur4 > scoreJoueur3) {//J4 > J1 J2 J3
                if (scoreJoueur1 > scoreJoueur2 && scoreJoueur1 > scoreJoueur3) {//J4 > J1 > J2 J3
                    if (scoreJoueur2 > scoreJoueur3) {//J4 > J1 > J2 > J3
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur3 > scoreJoueur2) {//J4 > J1 > J3 > J2
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur3 == scoreJoueur2) {
                        do {
                            printf("Egalite entre %s et %s, relancons les des\n",
                                   monopoly->tableauJoueur[1].strNomJoueur,
                                   monopoly->tableauJoueur[2].strNomJoueur);
                            do {
                                printf("%s, entre D pour lancer les des\n",
                                       monopoly->tableauJoueur[1].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur2 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                            do {
                                printf("%s, entre D pour lancer les des\n",
                                       monopoly->tableauJoueur[2].strNomJoueur);
                                scanf(" %c", &carac);
                            } while (carac != 'D' && carac != 'd');
                            scoreJoueur3 = tirEtSommeDeDes();
                            printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                            if (scoreJoueur2 > scoreJoueur3) {//J4 > J1 > J2 > J3
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur3 > scoreJoueur2) {//J4 > J1 > J3 > J2
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            }
                        } while (scoreJoueur3 == scoreJoueur2);
                    }
                } else if (scoreJoueur2 > scoreJoueur1 && scoreJoueur2 > scoreJoueur3) {//J4 > J3 > J1 J2
                    if (scoreJoueur1 > scoreJoueur3) {//J4 > J3 > J1 > J2
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                        monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                        monopoly->tableauJoueur[2] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur3 > scoreJoueur1) {//J4 > J2 > J3 > J1
                        Joueur temp = monopoly->tableauJoueur[0];
                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                        monopoly->tableauJoueur[3] = temp;
                        printf("%s commence suivi de %s, %s et enfin %s",
                               monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur,
                               monopoly->tableauJoueur[3].strNomJoueur);
                    } else if (scoreJoueur1 == scoreJoueur3) {
                        printf("Egalite entre %s et %s, relancons les des\n", monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[2].strNomJoueur);
                        do {
                            printf("%s, entre D pour lancer les des\n",
                                   monopoly->tableauJoueur[0].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur1 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                        do {
                            printf("%s, entre D pour lancer les des\n",
                                   monopoly->tableauJoueur[2].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur3 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                        if (scoreJoueur1 > scoreJoueur3) {//J4 > J3 > J1 > J2
                            Joueur temp = monopoly->tableauJoueur[0];
                            monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                            monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                            monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                            monopoly->tableauJoueur[2] = temp;
                            printf("%s commence suivi de %s, %s et enfin %s",
                                   monopoly->tableauJoueur[0].strNomJoueur,
                                   monopoly->tableauJoueur[1].strNomJoueur,
                                   monopoly->tableauJoueur[2].strNomJoueur,
                                   monopoly->tableauJoueur[3].strNomJoueur);
                        } else if (scoreJoueur3 > scoreJoueur1) {//J4 > J2 > J3 > J1
                            Joueur temp = monopoly->tableauJoueur[0];
                            monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                            monopoly->tableauJoueur[3] = temp;
                            printf("%s commence suivi de %s, %s et enfin %s",
                                   monopoly->tableauJoueur[0].strNomJoueur,
                                   monopoly->tableauJoueur[1].strNomJoueur,
                                   monopoly->tableauJoueur[2].strNomJoueur,
                                   monopoly->tableauJoueur[3].strNomJoueur);
                        }
                    }
                } else if (scoreJoueur1 == scoreJoueur3 && scoreJoueur1 == scoreJoueur2) {
                    do {
                        printf("Egalite entre %s, %s et %s\n", monopoly->tableauJoueur[0].strNomJoueur,
                               monopoly->tableauJoueur[1].strNomJoueur, monopoly->tableauJoueur[2].strNomJoueur);
                        do {
                            printf("%s, entre D pour lancer les des\n",
                                   monopoly->tableauJoueur[0].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur1 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                        do {
                            printf("%s, entre D pour lancer les des\n",
                                   monopoly->tableauJoueur[1].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur2 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                        do {
                            printf("%s, entre D pour lancer les des\n",
                                   monopoly->tableauJoueur[2].strNomJoueur);
                            scanf(" %c", &carac);
                        } while (carac != 'D' && carac != 'd');
                        scoreJoueur3 = tirEtSommeDeDes();
                        printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);


                        if (scoreJoueur1 > scoreJoueur2 && scoreJoueur1 > scoreJoueur3) {//J4 > J1 > J2 J3
                            if (scoreJoueur2 > scoreJoueur3) {//J4 > J1 > J2 > J3
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur3 > scoreJoueur2) {//J4 > J1 > J3 > J2
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur3 == scoreJoueur2) {
                                do {
                                    printf("Egalite entre %s et %s, relancons les des\n",
                                           monopoly->tableauJoueur[1].strNomJoueur,
                                           monopoly->tableauJoueur[2].strNomJoueur);
                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[1].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur2 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                                    do {
                                        printf("%s, entre D pour lancer les des\n",
                                               monopoly->tableauJoueur[2].strNomJoueur);
                                        scanf(" %c", &carac);
                                    } while (carac != 'D' && carac != 'd');
                                    scoreJoueur3 = tirEtSommeDeDes();
                                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                                    if (scoreJoueur2 > scoreJoueur3) {//J4 > J1 > J2 > J3
                                        Joueur temp = monopoly->tableauJoueur[0];
                                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[2];
                                        monopoly->tableauJoueur[2] = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                    } else if (scoreJoueur3 > scoreJoueur2) {//J4 > J1 > J3 > J2
                                        Joueur temp = monopoly->tableauJoueur[0];
                                        monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                        monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                                        monopoly->tableauJoueur[1] = temp;
                                        printf("%s commence suivi de %s, %s et enfin %s",
                                               monopoly->tableauJoueur[0].strNomJoueur,
                                               monopoly->tableauJoueur[1].strNomJoueur,
                                               monopoly->tableauJoueur[2].strNomJoueur,
                                               monopoly->tableauJoueur[3].strNomJoueur);
                                    }
                                } while (scoreJoueur3 == scoreJoueur2);
                            }
                        } else if (scoreJoueur2 > scoreJoueur1 && scoreJoueur2 > scoreJoueur3) {//J4 > J3 > J1 J2
                            if (scoreJoueur1 > scoreJoueur3) {//J4 > J3 > J1 > J2
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                                monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                monopoly->tableauJoueur[2] = temp;
                                printf("%s commence suivi de %s, %s et enfin %s",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[1].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur,
                                       monopoly->tableauJoueur[3].strNomJoueur);
                            } else if (scoreJoueur3 > scoreJoueur1) {//J4 > J2 > J3 > J1
                                Joueur temp = monopoly->tableauJoueur[0];
                                monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                monopoly->tableauJoueur[3] = temp;
                            } else if (scoreJoueur1 == scoreJoueur3) {
                                printf("Egalite entre %s et %s, relancons les des\n",
                                       monopoly->tableauJoueur[0].strNomJoueur,
                                       monopoly->tableauJoueur[2].strNomJoueur);
                                do {
                                    printf("%s, entre D pour lancer les des\n",
                                           monopoly->tableauJoueur[0].strNomJoueur);
                                    scanf(" %c", &carac);
                                } while (carac != 'D' && carac != 'd');
                                scoreJoueur1 = tirEtSommeDeDes();
                                printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                                do {
                                    printf("%s, entre D pour lancer les des\n",
                                           monopoly->tableauJoueur[2].strNomJoueur);
                                    scanf(" %c", &carac);
                                } while (carac != 'D' && carac != 'd');
                                scoreJoueur3 = tirEtSommeDeDes();
                                printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                                if (scoreJoueur1 > scoreJoueur3) {//J4 > J3 > J1 > J2
                                    Joueur temp = monopoly->tableauJoueur[0];
                                    monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                    monopoly->tableauJoueur[3] = monopoly->tableauJoueur[1];
                                    monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                                    monopoly->tableauJoueur[2] = temp;
                                    printf("%s commence suivi de %s, %s et enfin %s",
                                           monopoly->tableauJoueur[0].strNomJoueur,
                                           monopoly->tableauJoueur[1].strNomJoueur,
                                           monopoly->tableauJoueur[2].strNomJoueur,
                                           monopoly->tableauJoueur[3].strNomJoueur);
                                } else if (scoreJoueur3 > scoreJoueur1) {//J4 > J2 > J3 > J1
                                    Joueur temp = monopoly->tableauJoueur[0];
                                    monopoly->tableauJoueur[0] = monopoly->tableauJoueur[3];
                                    monopoly->tableauJoueur[3] = temp;
                                    printf("%s commence suivi de %s, %s et enfin %s",
                                           monopoly->tableauJoueur[0].strNomJoueur,
                                           monopoly->tableauJoueur[1].strNomJoueur,
                                           monopoly->tableauJoueur[2].strNomJoueur,
                                           monopoly->tableauJoueur[3].strNomJoueur);
                                }
                            }
                        }
                    } while (scoreJoueur1 == scoreJoueur3 && scoreJoueur1 == scoreJoueur2);
                }
            } else if (scoreJoueur1 == scoreJoueur2 && scoreJoueur1 > scoreJoueur3 && scoreJoueur4) {
                do {
                    printf("Egalite entre %s et %s, relancons les des\n", monopoly->tableauJoueur[0].strNomJoueur,
                           monopoly->tableauJoueur[1].strNomJoueur);

                    do {
                        printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[0].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur1 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                    do {
                        printf("%s, entre D pour lancer les des\n", monopoly->tableauJoueur[1].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur2 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                } while (scoreJoueur1 == scoreJoueur2);

                do {
                    printf("Egalite entre %s et %s, relancons les des\n",
                           monopoly->tableauJoueur[2].strNomJoueur,
                           monopoly->tableauJoueur[3].strNomJoueur);

                    do {
                        printf("%s, entre D pour lancer les des\n",
                               monopoly->tableauJoueur[2].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur3 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                    do {
                        printf("%s, entre D pour lancer les des\n",
                               monopoly->tableauJoueur[3].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur4 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);


                } while (scoreJoueur3 == scoreJoueur4);

                if (scoreJoueur1 > scoreJoueur2 && scoreJoueur2 > scoreJoueur3 && scoreJoueur3 > scoreJoueur4) {
                    printf("%s commence suivi de %s, %s et enfin %s",
                           monopoly->tableauJoueur[0].strNomJoueur,
                           monopoly->tableauJoueur[1].strNomJoueur,
                           monopoly->tableauJoueur[2].strNomJoueur,
                           monopoly->tableauJoueur[3].strNomJoueur);
                } else if (scoreJoueur2 > scoreJoueur1 && scoreJoueur3 > scoreJoueur4) {
                    Joueur temp = monopoly->tableauJoueur[0];
                    monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                    monopoly->tableauJoueur[1] = temp;
                    printf("%s commence suivi de %s, %s et enfin %s",
                           monopoly->tableauJoueur[0].strNomJoueur,
                           monopoly->tableauJoueur[1].strNomJoueur,
                           monopoly->tableauJoueur[2].strNomJoueur,
                           monopoly->tableauJoueur[3].strNomJoueur);
                } else if (scoreJoueur2 > scoreJoueur1 && scoreJoueur4 > scoreJoueur3) {
                    Joueur temp = monopoly->tableauJoueur[0];
                    monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                    monopoly->tableauJoueur[1] = temp;
                    temp = monopoly->tableauJoueur[2];
                    monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                    monopoly->tableauJoueur[3] = temp;
                    printf("%s commence suivi de %s, %s et enfin %s",
                           monopoly->tableauJoueur[0].strNomJoueur,
                           monopoly->tableauJoueur[1].strNomJoueur,
                           monopoly->tableauJoueur[2].strNomJoueur,
                           monopoly->tableauJoueur[3].strNomJoueur);
                }

            } else if (scoreJoueur2 == scoreJoueur3 && scoreJoueur2 > scoreJoueur1 && scoreJoueur2 > scoreJoueur4) {
                do {
                    printf("Egalite entre %s et %s, relancons les des\n",
                           monopoly->tableauJoueur[1].strNomJoueur,
                           monopoly->tableauJoueur[2].strNomJoueur);
                    do {
                        printf("%s, entre D pour lancer les des\n",
                               monopoly->tableauJoueur[1].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur2 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur2);

                    do {
                        printf("%s, entre D pour lancer les des\n",
                               monopoly->tableauJoueur[2].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur3 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur3);

                } while (scoreJoueur3 == scoreJoueur2);

                do {
                    printf("Egalite entre %s et %s, relancons les des\n",
                           monopoly->tableauJoueur[0].strNomJoueur,
                           monopoly->tableauJoueur[3].strNomJoueur);
                    do {
                        printf("%s, entre D pour lancer les des\n",
                               monopoly->tableauJoueur[0].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur1 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur1);

                    do {
                        printf("%s, entre D pour lancer les des\n",
                               monopoly->tableauJoueur[3].strNomJoueur);
                        scanf(" %c", &carac);
                    } while (carac != 'D' && carac != 'd');
                    scoreJoueur4 = tirEtSommeDeDes();
                    printf("Tu as fait %d ! Joli score ;)\n", scoreJoueur4);
                } while (scoreJoueur1 == scoreJoueur4);
                if (scoreJoueur2 > scoreJoueur3 && scoreJoueur3 > scoreJoueur1 && scoreJoueur1 > scoreJoueur4) {
                    Joueur temp = monopoly->tableauJoueur[0];
                    monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                    monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                    monopoly->tableauJoueur[2] = temp;
                    printf("%s commence suivi de %s, %s et enfin %s",
                           monopoly->tableauJoueur[0].strNomJoueur,
                           monopoly->tableauJoueur[1].strNomJoueur,
                           monopoly->tableauJoueur[2].strNomJoueur,
                           monopoly->tableauJoueur[3].strNomJoueur);

                } else if (scoreJoueur2 > scoreJoueur3 && scoreJoueur3 > scoreJoueur4 && scoreJoueur4 > scoreJoueur1) {
                    Joueur temp = monopoly->tableauJoueur[0];
                    monopoly->tableauJoueur[0] = monopoly->tableauJoueur[1];
                    monopoly->tableauJoueur[1] = monopoly->tableauJoueur[2];
                    monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                    monopoly->tableauJoueur[3] = temp;
                    printf("%s commence suivi de %s, %s et enfin %s",
                           monopoly->tableauJoueur[0].strNomJoueur,
                           monopoly->tableauJoueur[1].strNomJoueur,
                           monopoly->tableauJoueur[2].strNomJoueur,
                           monopoly->tableauJoueur[3].strNomJoueur);
                } else if (scoreJoueur3 > scoreJoueur2 && scoreJoueur2 > scoreJoueur1 && scoreJoueur1 > scoreJoueur4) {
                    Joueur temp = monopoly->tableauJoueur[0];
                    monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                    monopoly->tableauJoueur[2] = temp;
                    printf("%s commence suivi de %s, %s et enfin %s",
                           monopoly->tableauJoueur[0].strNomJoueur,
                           monopoly->tableauJoueur[1].strNomJoueur,
                           monopoly->tableauJoueur[2].strNomJoueur,
                           monopoly->tableauJoueur[3].strNomJoueur);
                } else if (scoreJoueur3 > scoreJoueur2 && scoreJoueur2 > scoreJoueur4 && scoreJoueur4 > scoreJoueur1) {
                    Joueur temp = monopoly->tableauJoueur[0];
                    monopoly->tableauJoueur[0] = monopoly->tableauJoueur[2];
                    monopoly->tableauJoueur[2] = monopoly->tableauJoueur[3];
                    monopoly->tableauJoueur[3] = temp;
                    printf("%s commence suivi de %s, %s et enfin %s",
                           monopoly->tableauJoueur[0].strNomJoueur,
                           monopoly->tableauJoueur[1].strNomJoueur,
                           monopoly->tableauJoueur[2].strNomJoueur,
                           monopoly->tableauJoueur[3].strNomJoueur);
                }
            }
        } while (scoreJoueur1 == scoreJoueur2 && scoreJoueur2 == scoreJoueur3 && scoreJoueur4 == scoreJoueur3);

        //J1 > J2 > J3 > J4
        //J1 > J2 > J4 > J3
        //J1 > J3 > J4 > J2
        //J1 > J3 > J2 > J4
        //J1 > J4 > J2 > J3
        //J1 > J4 > J3 > J2


        //J2 > J1 > J3 > J4
        //J2 > J1 > J4 > J3
        //J2 > J3 > J4 > J1
        //J2 > J3 > J1 > J4
        //J2 > J4 > J1 > J3
        //J2 > J4 > J3 > J1


        //J3 > J1 > J2 > J4
        //J3 > J1 > J4 > J2
        //J3 > J2 > J4 > J1
        //J3 > J2 > J1 > J4
        //J3 > J4 > J1 > J2
        //J3 > J4 > J2 > J1


        //J4 > J1 > J2 > J3
        //J4 > J1 > J3 > J2
        //J4 > J2 > J3 > J1
        //J4 > J2 > J1 > J2
        //J4 > J3 > J1 > J2
        //J4 > J3 > J2 > J1



    }
}

void printAttributionPion(Monopoly *monopoly) {
    for (int i = 0; i < monopoly->nombreJoueurs; ++i) {
        color(1, 0);
        printf("\n%s, nous vous avons attribue le pion :", monopoly->tableauJoueur[i].strNomJoueur);
        color(monopoly->tableauJoueur[i].couleurJoueur, 0);
        printf(" %c", monopoly->tableauJoueur[i].caracterePion);
        color(1, 0);
        printf(".\n");
    }
}

void actionCases(Monopoly *monopoly, int numeroJoueur) {
    if (monopoly->tableauJoueur[numeroJoueur].positionSurPlateau % 2 != 0) {

    }
}

void actionCasesBatiment(Monopoly *monopoly, int numeroJoueur) {
    if (isProprieteNonAchetee(monopoly, monopoly->tableauJoueur[numeroJoueur].positionSurPlateau) == 1) {
        //action pour acheter une propriete
    }
    if (isProprieteNonAchetee(monopoly, monopoly->tableauJoueur[numeroJoueur].positionSurPlateau == 1)) {
        //action pour payer loyer
    }
}

char choixUtilisateur() {
    char choix;
    do {
        color(15, 0);
        printf("\nVeuillez selectionner une action a realiser :\n");
        printf("Pour lancer les des tapez 'D',\n");
        printf("Pour afficher le plateay tapez 'X',\n");
        printf("Pour consulter la fiche d'une case tapez 'C',\n");
        printf("Pour consulter vos proprietes tapez 'P', \n");
        printf("Pour acheter des maisons ou des hotels tapez 'A'.\n");
        printf("Pour vendre des maisons ou des hotels tapez 'V'.\n");
        printf("Pour effectuer un echange de propriete tapez 'E'.\n");
        printf("Pour hypothequer des proprietes ou avoir des informations tapez 'H'.\n");
        printf("Pour sauvegarder ou charger une partie tapez 'S'.\n");
        printf("Pour revenir au menu principal tapez 'M'.\n");
        scanf(" %c", &choix);

    } while ((choix != 'P') && (choix != 'D') && (choix != 'C') && (choix != 'A') && (choix != 'V') &&
             (choix != 'H') && (choix != 'E') && (choix != 'S') && (choix != 'X') && (choix != 'M'));

    return choix;
}


void testTour(Monopoly *monopoly) {
    int nombreTour = 1;
    nonBatimentInitialisation(monopoly);//sinon bug de la case départ de temps en temps
    do {
        for (int i = 0; i < monopoly->nombreJoueurs; i++) {
            int nombreDouble = 0;
            actualiserLoyer(monopoly);
            color(15, 0);
            printf("\nTour : %d\n", nombreTour);
            printf("\nAu tour de %s de jouer \n", monopoly->tableauJoueur[i].strNomJoueur);
            printf("Solde : %d\n", monopoly->tableauJoueur[i].soldeJoueur);

            if (monopoly->tableauJoueur[i].isPrisonnier == 0) {
                do {
                    switch (choixUtilisateur()) {
                        case 'D': {
                            avancerJoueurXCases(monopoly, i, sommeDe(&monopoly->tableauJoueur[i].valeurDe1,
                                                                     &monopoly->tableauJoueur[i].valeurDe2));
                            nombreDouble += 1;
                            if (nombreDouble == 3) {
                                monopoly->tableauJoueur[i].isPrisonnier = 1;
                                printf("%d double a la suite, vous allez en prison", nombreDouble);
                                break;
                            }
                            afficherCases(monopoly);
                            color(15, 0);
                            printSommeDe(monopoly, i);
                            joueurCaseRaccourci(monopoly, i);
                            allerEnPrison(monopoly, i);
                            joueurCaseCartes(monopoly, i);
                            joueurCaseImpot(monopoly, i);
                            joueurActionCaseProprietes(monopoly, i);
                            joueurXChezJoueurX(monopoly, i, monopoly->tableauJoueur[i].positionSurPlateau);
                            printf("Solde %s : %d\n", monopoly->tableauJoueur[i].strNomJoueur,
                                   monopoly->tableauJoueur[i].soldeJoueur);
                            if (isDouble(&monopoly->tableauJoueur[i].valeurDe1,
                                         &monopoly->tableauJoueur[i].valeurDe2) == 1) {
                                printf("\nVous avez fait un double ! Vous pouvez rejouer :\n");
                            }
                            break;
                        }
                        case 'C': {
                            int choix;
                            do {
                                printf("\nQuelle case voulez vous afficher ? (de 0 a 31) \n");
                                scanf("%d", &choix);
                            } while (choix < 0 || choix > 31);
                            printf("Case %d :\n", choix);
                            afficherInfosPropriete(monopoly, choix);
                            monopoly->tableauJoueur[i].valeurDe1 = 1;
                            monopoly->tableauJoueur[i].valeurDe2 = 1;
                            break;
                        }
                        case 'P': {
                            afficherToutesPropJoueur(monopoly, i);
                            monopoly->tableauJoueur[i].valeurDe1 = 1;
                            monopoly->tableauJoueur[i].valeurDe2 = 1;
                            break;
                        }
                        case 'A': {
                            voulezVousAcheterMaison(monopoly, i);
                            monopoly->tableauJoueur[i].valeurDe1 = 1;
                            monopoly->tableauJoueur[i].valeurDe2 = 1;
                            break;
                        }
                        case 'V': {
                            voulezVousVendreMaison(monopoly, i);
                            monopoly->tableauJoueur[i].valeurDe1 = 1;
                            monopoly->tableauJoueur[i].valeurDe2 = 1;
                            break;
                        }

                        case 'E': {
                            echangeProprieteEntreJoueur(monopoly, i);
                            monopoly->tableauJoueur[i].valeurDe1 = 1;
                            monopoly->tableauJoueur[i].valeurDe2 = 1;
                            break;
                        }
                        case 'H': {
                            avoirDesRenseignements(monopoly, i);
                            monopoly->tableauJoueur[i].valeurDe1 = 1;
                            monopoly->tableauJoueur[i].valeurDe2 = 1;
                            break;
                        }
                        case 'S':{
                            menuSauvegarde(monopoly);
                            monopoly->tableauJoueur[i].valeurDe1 = 1;
                            monopoly->tableauJoueur[i].valeurDe2 = 1;
                            break;
                        }
                        case 'X':{
                            afficherCases(monopoly);
                            monopoly->tableauJoueur[i].valeurDe1 = 1;
                            monopoly->tableauJoueur[i].valeurDe2 = 1;
                            break;
                        }
                        case 'M':{
                            menuSauvegardeEnCoursDePartie(monopoly);
                            monopoly->tableauJoueur[i].valeurDe1 = 1;
                            monopoly->tableauJoueur[i].valeurDe2 = 1;
                            break;

                        }


                    }
                } while (isDouble(&monopoly->tableauJoueur[i].valeurDe1, &monopoly->tableauJoueur[i].valeurDe2) == 1 &&
                         monopoly->tableauJoueur[i].isPrisonnier != 1);
            } else {
                monopoly->tableauJoueur[i].nombreDeTourEnPrison += 1;
                if (monopoly->tableauJoueur[i].nombreDeTourEnPrison < 3){
                    isEnPrison2(monopoly, i);
                    if (monopoly->tableauJoueur[i].isPrisonnier == 0 && isDouble(&monopoly->tableauJoueur[i].valeurDe1, &monopoly->tableauJoueur[i].valeurDe2)) {
                        afficherCases(monopoly);
                        printSommeDe(monopoly, i);
                        joueurCaseRaccourci(monopoly, i);
                        allerEnPrison(monopoly, i);
                        joueurCaseCartes(monopoly, i);
                        joueurCaseImpot(monopoly, i);
                        joueurActionCaseProprietes(monopoly, i);
                        joueurXChezJoueurX(monopoly, i, monopoly->tableauJoueur[i].positionSurPlateau);
                        printf("Solde %s : %d\n", monopoly->tableauJoueur[i].strNomJoueur,monopoly->tableauJoueur[i].soldeJoueur);
                        monopoly->tableauJoueur[i].nombreDeTourEnPrison = 0;
                    }
                    else if (monopoly->tableauJoueur[i].isPrisonnier == 1){
                        printf("Vous etes en prison pour encore %d tours. \n", (3- monopoly->tableauJoueur[i].nombreDeTourEnPrison));
                    }

                }
                else if (monopoly->tableauJoueur[i].nombreDeTourEnPrison == 3){
                    printf("Vous sortez de prison.\n");
                    monopoly->tableauJoueur[i].nombreDeTourEnPrison = 0;
                    monopoly->tableauJoueur[i].isPrisonnier = 0;
                    nombreDouble = 0;
                    do {
                        switch (choixUtilisateur()) {
                            case 'D': {
                                avancerJoueurXCases(monopoly, i, sommeDe(&monopoly->tableauJoueur[i].valeurDe1,
                                                                         &monopoly->tableauJoueur[i].valeurDe2));
                                nombreDouble += 1;
                                if (nombreDouble == 3) {
                                    monopoly->tableauJoueur[i].isPrisonnier = 1;
                                    printf("%d double a la suite, vous allez en prison", nombreDouble);
                                    break;
                                }
                                afficherCases(monopoly);
                                joueurCaseRaccourci(monopoly, i);
                                color(15, 0);
                                printSommeDe(monopoly, i);
                                allerEnPrison(monopoly, i);
                                joueurCaseCartes(monopoly, i);
                                joueurCaseImpot(monopoly, i);
                                joueurActionCaseProprietes(monopoly, i);
                                joueurXChezJoueurX(monopoly, i, monopoly->tableauJoueur[i].positionSurPlateau);
                                printf("Solde %s : %d\n", monopoly->tableauJoueur[i].strNomJoueur,
                                       monopoly->tableauJoueur[i].soldeJoueur);
                                if (isDouble(&monopoly->tableauJoueur[i].valeurDe1,
                                             &monopoly->tableauJoueur[i].valeurDe2) == 1) {
                                    printf("\nVous avez fait un double ! Vous pouvez rejouer :\n");
                                }
                                break;
                            }
                            case 'C': {
                                int choix;
                                do {
                                    printf("\nQuelle case voulez vous afficher ? (de 0 a 31) \n");
                                    scanf("%d", &choix);
                                } while (choix < 0 || choix > 31);
                                printf("Case %d :\n", choix);
                                afficherInfosPropriete(monopoly, choix);
                                monopoly->tableauJoueur[i].valeurDe1 = 1;
                                monopoly->tableauJoueur[i].valeurDe2 = 1;
                                break;
                            }
                            case 'P': {
                                afficherToutesPropJoueur(monopoly, i);
                                monopoly->tableauJoueur[i].valeurDe1 = 1;
                                monopoly->tableauJoueur[i].valeurDe2 = 1;
                                break;
                            }
                            case 'A': {
                                voulezVousAcheterMaison(monopoly, i);
                                monopoly->tableauJoueur[i].valeurDe1 = 1;
                                monopoly->tableauJoueur[i].valeurDe2 = 1;
                                break;
                            }
                            case 'V': {
                                voulezVousVendreMaison(monopoly, i);
                                monopoly->tableauJoueur[i].valeurDe1 = 1;
                                monopoly->tableauJoueur[i].valeurDe2 = 1;
                                break;
                            }

                            case 'E': {
                                echangeProprieteEntreJoueur(monopoly, i);
                                monopoly->tableauJoueur[i].valeurDe1 = 1;
                                monopoly->tableauJoueur[i].valeurDe2 = 1;
                                break;
                            }

                            case 'H': {
                                avoirDesRenseignements(monopoly, i);
                                monopoly->tableauJoueur[i].valeurDe1 = 1;
                                monopoly->tableauJoueur[i].valeurDe2 = 1;
                                break;
                            }
                            case 'S':{
                                menuSauvegarde(monopoly);
                                monopoly->tableauJoueur[i].valeurDe1 = 1;
                                monopoly->tableauJoueur[i].valeurDe2 = 1;
                                break;
                            }
                            case 'X':{
                                afficherCases(monopoly);
                                monopoly->tableauJoueur[i].valeurDe1 = 1;
                                monopoly->tableauJoueur[i].valeurDe2 = 1;
                                break;
                            }
                            case 'M':{
                                menuSauvegardeEnCoursDePartie(monopoly);
                                monopoly->tableauJoueur[i].valeurDe1 = 1;
                                monopoly->tableauJoueur[i].valeurDe2 = 1;
                                break;

                            }
                        }
                    } while (isDouble(&monopoly->tableauJoueur[i].valeurDe1, &monopoly->tableauJoueur[i].valeurDe2) == 1 &&
                             monopoly->tableauJoueur[i].isPrisonnier != 1);
                }
            }
        }
        if (nombreTour % 1 == 0){
            sauvegarderPartieAutomatique(monopoly);
        }
        nombreTour += 1;
    }while (nombreJoueurActif(monopoly,monopoly->nombreJoueurs) > 1);

    printf("Bravo %s ! Vous avez gagne.\n", monopoly->tableauJoueur[dernierJoueur(monopoly)].strNomJoueur);
}


void nonBatimentInitialisation(Monopoly* monopoly){
    for (int i = 0; i < 16; i++) {
        monopoly->tableauPropriete[i * 2].tableauJoueur = NULL;
        monopoly->tableauPropriete[i * 2].isBatiment = 0;
        monopoly->tableauPropriete[i * 2].nombreMaison = 0;
        monopoly->tableauPropriete[i * 2].nombreHotel = 0;
        monopoly->tableauPropriete[i * 2].isHypothequee = 0;
        monopoly->tableauPropriete[i * 2].numeroJoueur = -1;
    }
}

int nombreJoueurActif(Monopoly *monopoly, int nombreJoueur) {
    int nombreJoueurActif = 0;
    for (int i = 0; i < nombreJoueur; ++i) {
        if (monopoly->tableauJoueur[i].isJoueurActif == 1) {
            nombreJoueurActif += 1;
        }
    }
    return nombreJoueurActif;
}