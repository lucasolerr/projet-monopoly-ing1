#include "sauvegarde.h"
#include "../Partie/partie.h"
//#include "ListeSauvegardes/"
#include <stdio.h>
#include "../Hypotheque/hypotheque.h"
#include "../Joueur/Joueur.h"
#include "../Menu/menu.h"
#include "../Prison/Prison.h"
#include "../Extensions/Duel/Duel.h"
#include "../Menu/menu.h"
#include <dirent.h>
#include <stdio.h>
#include "../Plateau/plateau.h"

int nombredeSauvegardes() {
    int nbSauvegarde = 0, compteur = 0;
    DIR *d;
    struct dirent *dir;
    d = opendir("../Fonctions/Sauvegarde/ListeSauvegardes");
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            compteur++;
            if(compteur > 2){
                printf("\t%s\n", dir->d_name);
                nbSauvegarde++;
            }
            //printf("%s\n", dir->d_name);
            //nbSauvegarde++;
        }
        closedir(d);
    }
    return (nbSauvegarde);
}


char *creationFichierParUtilisateur(char *nomSauvegarde) {
    printf("Comment souhaitez vous appeler la sauvegarde ?\n");
    fflush(stdin);
    fgets(nomSauvegarde, 50, stdin);
    if (nomSauvegarde[strlen(nomSauvegarde) - 1] == '\n') {
        nomSauvegarde[strlen(nomSauvegarde) - 1] = '\0';
    }
    return nomSauvegarde;
}

char *recuperationFichierParUtilisateur(char *nomSauvegarde) {
    printf("Il y a %d sauvegardes. Avec quelle sauvegarde voulez-vous jouer ?\n\t", nombredeSauvegardes());
    scanf("%s", nomSauvegarde);
    if (nomSauvegarde[strlen(nomSauvegarde) - 1] == '\n') {
        nomSauvegarde[strlen(nomSauvegarde) - 1] = '\0';
    }
    return nomSauvegarde;
}

FILE *ouvrirUnFichierEcriture(char *nomSauvegarde) {
    FILE *pMonFichier = NULL;
    char chemin[100];
    char extension[7] = ".alpbl";
    sprintf(chemin, "../Fonctions/Sauvegarde/ListeSauvegardes/%s%s", nomSauvegarde, extension);
    if ((pMonFichier = fopen(chemin, "w+")) == NULL) {
        printf("Erreur ouverture fichier ecriture\n");
    }
    return pMonFichier;
}

FILE *ouvrirUnFichierLecture(char *nomSauvegarde) {
    FILE *pMonFichier = NULL;
    char chemin[1000];
    char extension[7] = ".alpbl";
    sprintf(chemin, "../Fonctions/Sauvegarde/ListeSauvegardes/%s%s", nomSauvegarde, extension);
    if ((pMonFichier = fopen(chemin, "r+")) == NULL) {
        printf("Erreur ouverture fichier lecture\n");
    }
    return pMonFichier;
}

void fermerFichier(FILE *fichier) {
    fclose(fichier);
    fichier = NULL;
}


void sauvegardeMonopoly(Monopoly* monopoly, FILE *fichier) {
    sauvegardeJoueur(monopoly, fichier);
    sauvegardeCarteCommunaute(monopoly, fichier);
    sauvegardeCarteChance(monopoly, fichier);
    sauvegardePlateau(monopoly, fichier);
    sauvegardeTableauPropriete(monopoly, fichier);
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte) +
          sizeof(int) + 32 * sizeof(CasePlateau) + 32 * sizeof(Propriete), SEEK_SET);
    fwrite(&monopoly->nombreHotelBanque, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    fwrite(&monopoly->nombreMaisonBanque, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    fwrite(&monopoly->nombreJoueurs, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    fermerFichier(fichier);
}

//A remplir
void chargerMonopoly(Monopoly *monopoly, char *nomSauvegarde, FILE *fichier) {
    int tailleTableauJoueur, tailleTableauCarteCommu, tailleTableauCarteChance, tailleTableauPlateau, tailleTableauPropriete;
    chargerJoueur(fichier, &tailleTableauJoueur, monopoly);
    chargerCarteCommunaute(fichier, &tailleTableauCarteCommu, monopoly);
    chargerCarteChance(fichier, &tailleTableauCarteChance, monopoly);
    chargerPlateau(fichier, &tailleTableauPlateau, monopoly);
    chargerTableauPropriete(fichier, &tailleTableauPropriete, monopoly);
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte) +
          sizeof(int) + 32 * sizeof(CasePlateau) + 32 * sizeof(Propriete), SEEK_SET);
    fread(&monopoly->nombreHotelBanque, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    fread(&monopoly->nombreMaisonBanque, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    fread(&monopoly->nombreJoueurs, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    fermerFichier(fichier);
}

Monopoly chargerPartie() {
    char nomSauvegarde[50];
    Monopoly monopoly;
    //Monopoly monopoly = chargerTout(ouvrirUnFichierLecture(recuperationFichierParUtilisateur(nomSauvegarde)));
    chargerMonopoly(&monopoly, nomSauvegarde, ouvrirUnFichierLecture(recuperationFichierParUtilisateur(nomSauvegarde)));
    monopoly.tableauJoueur->tableauCartesChance = monopoly.tableauCartesChance;
    monopoly.tableauJoueur->tableauCartesCommunaute = monopoly.tableauCartesCommunaute;
    monopoly.plateau->tableauJoueur = monopoly.tableauJoueur;
    monopoly.plateau->tableauPropriete = monopoly.tableauPropriete;
    monopoly.tableauPropriete->tableauJoueur = monopoly.tableauJoueur;
    for (int i = 12; i < 16; i++) {
        monopoly.tableauPropriete[i * 2 + 1].tableauJoueur = NULL;
        monopoly.tableauPropriete[i * 2 + 1].isBatiment = 1;
        monopoly.tableauPropriete[i * 2 + 1].nombreMaison = 0;
        monopoly.tableauPropriete[i * 2 + 1].nombreHotel = 0;
        monopoly.tableauPropriete[i * 2 + 1].isHypothequee = 0;
        monopoly.tableauPropriete[i * 2 + 1].numeroJoueur = -1;
    }
    for (int i = 12; i < 16; i++) {
        monopoly.tableauPropriete[i * 2].tableauJoueur = NULL;
        monopoly.tableauPropriete[i * 2].isBatiment = 0;
        monopoly.tableauPropriete[i * 2].nombreMaison = 0;
        monopoly.tableauPropriete[i * 2].nombreHotel = 0;
        monopoly.tableauPropriete[i * 2].isHypothequee = 0;
        monopoly.tableauPropriete[i * 2].numeroJoueur = -1;
    }
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

    monopoly.tableauPropriete[0].tableauJoueur = NULL;
    monopoly.tableauPropriete[0].isBatiment = 0;
    monopoly.tableauPropriete[0].nombreMaison = 0;
    monopoly.tableauPropriete[0].nombreHotel = 0;
    monopoly.tableauPropriete[0].isHypothequee = 0;
    monopoly.tableauPropriete[0].numeroJoueur = -1;
    initialiserLesCartes(&monopoly);
    return monopoly;
}

void sauvegarderPartie(Monopoly* monopoly) {
    char nomSauvegarde[50];
    sauvegardeMonopoly(monopoly, ouvrirUnFichierEcriture(creationFichierParUtilisateur(nomSauvegarde)));
}

void sauvegarderPartieAutomatique(Monopoly* monopoly) {
    char nomSauvegarde[50];
    sauvegardeMonopoly(monopoly, ouvrirUnFichierEcriture("auto"));
}
/*
void recuperationPartie(Monopoly monopoly) {
    char nomSauvegarde[50];
    printf("Avec quelle sauvegarde voulez-vous jouer ?\n\t");
    fgets(nomSauvegarde, 50, stdin);
    if (nomSauvegarde[strlen(nomSauvegarde) - 1] == '\n') {
        nomSauvegarde[strlen(nomSauvegarde) - 1] = '\0';
    }
    chargerMonopoly(&monopoly, recuperationFichierParUtilisateur(nomSauvegarde), ouvrirUnFichierLecture(nomSauvegarde));
}*/ //Plutot utiliser chargerPartie

int sauvegardeJoueur(Monopoly *monopoly, FILE *fichier) {
    const int tailleTableauJoueur = 4;
    fwrite(&tailleTableauJoueur, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fwrite(monopoly->tableauJoueur, sizeof(Joueur), tailleTableauJoueur, fichier) !=
        tailleTableauJoueur) { // puis le tableau
        printf("Probleme d'écriture dans le fichier joueur.\n");
    }
    fichier = NULL;
    return 0;
}

void chargerJoueur(FILE *fichier, int *tailleTableauJoueur, Monopoly *monopoly) {
    fread(tailleTableauJoueur, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly->tableauJoueur, sizeof(Joueur), *tailleTableauJoueur, fichier) !=
        *tailleTableauJoueur) { // puis le tableau
        printf("Probleme de lecture dans le fichier joueur.\n");
    }
    fichier = NULL;
}


int sauvegardeCarteCommunaute(Monopoly *monopoly, FILE *fichier) {
    const int tailleTableauCarteCommu = 11;
    fseek(fichier, sizeof(int) + 4 * sizeof(Joueur), SEEK_SET);
    fwrite(&tailleTableauCarteCommu, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fwrite(monopoly->tableauCartesCommunaute, sizeof(Carte), tailleTableauCarteCommu, fichier) !=
        tailleTableauCarteCommu) { // puis le tableau
        printf("Probleme d'écriture dans le fichier commu.\n");
    }
    fichier = NULL;
    return 0;
}

void chargerCarteCommunaute(FILE *fichier, int *tailleTableauCarteCommu, Monopoly *monopoly) {
    fseek(fichier, sizeof(int) + 4 * sizeof(Joueur), SEEK_SET);
    fread(tailleTableauCarteCommu, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly->tableauCartesCommunaute, sizeof(Carte), *tailleTableauCarteCommu, fichier) !=
        *tailleTableauCarteCommu) { // puis le tableau
        printf("Probleme de lecture dans le fichier commu.\n");
    }
    fichier = NULL;
}

int sauvegardeCarteChance(Monopoly *monopoly, FILE *fichier) {
    const int tailleTableauCarteChance = 10;
    fseek(fichier, sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte), SEEK_SET);

    fwrite(&tailleTableauCarteChance, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fwrite(monopoly->tableauCartesChance, sizeof(Carte), tailleTableauCarteChance, fichier) !=
        tailleTableauCarteChance) { // puis le tableau
        printf("Probleme d'écriture dans le fichier chance.\n");
    }
    fichier = NULL;
    return 0;
}

void chargerCarteChance(FILE *fichier, int *tailleTableauCarteChance, Monopoly *monopoly) {
    fseek(fichier, sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte), SEEK_SET);
    fread(tailleTableauCarteChance, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly->tableauCartesChance, sizeof(Carte), *tailleTableauCarteChance, fichier) !=
        *tailleTableauCarteChance) { // puis le tableau
        printf("Probleme de lecture dans le fichier chance.\n");
    }
    fichier = NULL;
}

int sauvegardePlateau(Monopoly *monopoly, FILE *fichier) {
    const int tailleTableauPlateau = 32;
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte),
          SEEK_SET);
    fwrite(&tailleTableauPlateau, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fwrite(monopoly->tableauPropriete, sizeof(CasePlateau), tailleTableauPlateau, fichier) !=
        tailleTableauPlateau) { // puis le tableau
        printf("Probleme d'écriture dans le fichier plateau.\n");
    }
    fichier = NULL;
    return 0;
}

void chargerPlateau(FILE *fichier, int *tailleTableauPlateau, Monopoly *monopoly) {
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte),
          SEEK_SET);
    fread(tailleTableauPlateau, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly->plateau, sizeof(CasePlateau), *tailleTableauPlateau, fichier) !=
        *tailleTableauPlateau) { // puis le tableau
        printf("Probleme de lecture dans le fichier plateau.\n");
    }
    fichier = NULL;
}

int sauvegardeTableauPropriete(Monopoly *monopoly, FILE *fichier) {
    const int tailleTableauPropriete = 32;
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte) +
          sizeof(int) + 32 * sizeof(CasePlateau), SEEK_SET);
    fwrite(&tailleTableauPropriete, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fwrite(monopoly->tableauPropriete, sizeof(Propriete), tailleTableauPropriete, fichier) !=
        tailleTableauPropriete) { // puis le tableau
        printf("Probleme d'ecriture dans le fichier propriete.\n");
        return -1;
    }
    fichier = NULL;
    return 0;
}

/*
void chargerJoueur(FILE *fichier, int *tailleTableauJoueur, Monopoly *monopoly) {
    fread(tailleTableauJoueur, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly->tableauJoueur, sizeof(Joueur), *tailleTableauJoueur, fichier) !=
        *tailleTableauJoueur) { // puis le tableau
        printf("Problème de lecture dans le fichier.\n");
    }
    fichier = NULL;
}*/

int chargerTableauPropriete(FILE *fichier, int *tailleTableauPropriete, Monopoly *monopoly) {

    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte) +
          sizeof(int) + 32 * sizeof(CasePlateau),
          SEEK_SET);
    fread(tailleTableauPropriete, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly->tableauPropriete, sizeof(Propriete), *tailleTableauPropriete, fichier) !=
        *tailleTableauPropriete) { // puis le tableau
        printf("Probleme de lecture dans le fichier propriete.\n");
    }
    fichier = NULL;
    return 0;
}


Monopoly chargerTout(FILE *fichier) {
    Monopoly monopoly;
    int tailleTableauJoueur, tailleTableauCarteCommu, tailleTableauCarteChance, tailleTableauPlateau, tailleTableauPropriete;
    fseek(fichier,
          0,
          SEEK_SET);
    fread(&tailleTableauJoueur, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly.tableauJoueur, sizeof(Joueur), tailleTableauJoueur, fichier) !=
        tailleTableauJoueur) { // puis le tableau
        printf("Probleme de lecture dans le fichier joueur.\n");
    }
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur),
          SEEK_SET);
    fread(&tailleTableauCarteCommu, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly.tableauCartesCommunaute, sizeof(Carte), tailleTableauCarteCommu, fichier) !=
        tailleTableauCarteCommu) { // puis le tableau
        printf("Probleme de lecture dans le fichier commu.\n");
    }
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte),
          SEEK_SET);
    fread(&tailleTableauCarteChance, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly.tableauCartesChance, sizeof(Carte), tailleTableauCarteChance, fichier) !=
        tailleTableauCarteChance) { // puis le tableau
        printf("Probleme de lecture dans le fichier chance.\n");
    }
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte),
          SEEK_SET);
    fread(&tailleTableauPlateau, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly.plateau, sizeof(CasePlateau), tailleTableauPlateau, fichier) !=
        tailleTableauPlateau) { // puis le tableau
        printf("Probleme de lecture dans le fichier plateau.\n");
    }
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte) +
          sizeof(int) + 32 * sizeof(CasePlateau),
          SEEK_SET);
    fread(&tailleTableauPropriete, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly.tableauPropriete, sizeof(Propriete), tailleTableauPropriete, fichier) !=
        tailleTableauPropriete) { // puis le tableau
        printf("Probleme de lecture dans le fichier propriete.\n");
    }
    fseek(fichier,
         sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte) +
         sizeof(int) + 32 * sizeof(CasePlateau) + 32 * sizeof(Propriete), SEEK_SET);
    fread(&monopoly.nombreHotelBanque, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    fread(&monopoly.nombreMaisonBanque, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    fread(&monopoly.nombreJoueurs, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    fermerFichier(fichier);

    return monopoly;
}

Monopoly chargerPlateauMonopoly(){
    char nomSauvegarde[50];
    int tailleTableauPropriete;
    Monopoly monopoly = chargerTableauProprieteLuca(ouvrirUnFichierLecture(recuperationFichierParUtilisateur(nomSauvegarde)), &tailleTableauPropriete);
    return monopoly;
}

Monopoly chargerTableauProprieteLuca(FILE *fichier, int *tailleTableauPropriete) {
    Monopoly monopoly;
    fseek(fichier,
          sizeof(int) + 4 * sizeof(Joueur) + sizeof(int) + 11 * sizeof(Carte) + sizeof(int) + 10 * sizeof(Carte) +
          sizeof(int) + 32 * sizeof(CasePlateau),
          SEEK_SET);
    fread(tailleTableauPropriete, sizeof(int), 1, fichier); // on sauvegarde la taille du tableau
    if (fread(monopoly.tableauPropriete, sizeof(Propriete), *tailleTableauPropriete, fichier) !=
        *tailleTableauPropriete) { // puis le tableau
        printf("Probleme de lecture dans le fichier propriete.\n");
    }
    fichier = NULL;
    return monopoly;
}





