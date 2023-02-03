#ifndef ALBPL_STRUCTURES_H
#define ALBPL_STRUCTURES_H


typedef struct {
    unsigned char numeroCarte;
    char action[120];
    unsigned char positionCarteDansLaPile;

} Carte;

typedef struct {
    int valeurDe1;
    int valeurDe2;
    int numeroJoueur;
    int couleurJoueur;
    char strNomJoueur[100];
    char caracterePion;
    int soldeJoueur;
    int nombreMaisons;
    int nombreHotels;
    int nombreProprietes;
    int positionSurPlateau;
    int isJoueurActif;
    int isPrisonnier;
    int nombreDeTourEnPrison;
    Carte *tableauCartesChance;
    Carte *tableauCartesCommunaute;
    int cartePrisonCommunaute;
    int cartePrisonChance;

} Joueur;

typedef struct {
    int couleurPolice;
    int couleurBackground;
    char strNomRue[100];
    char strNomRueInitiales[20];
    int prixAchatPropriete;
    int loyerPropriete;
    int loyerActuel;
    float coefLoyerUneMaison;
    float coefLoyerPlusMaison;
    int prixUneMaison;
    int nombreMaison;
    int nombreHotel;
    int prixHypotheque;
    int isHypothequee;
    int isBatiment;
    int numeroJoueur;
    Joueur *tableauJoueur;

} Propriete;

typedef struct {
    int numeroCase;
    Propriete *tableauPropriete;
    Joueur *tableauJoueur;
} CasePlateau;

typedef struct {
    Joueur tableauJoueur[4];
    Carte tableauCartesCommunaute[11];
    Carte tableauCartesChance[10];
    CasePlateau plateau[32];
    Propriete tableauPropriete[32];
    int nombreHotelBanque;
    int nombreMaisonBanque;
    int nombreJoueurs;
} Monopoly;

#endif
