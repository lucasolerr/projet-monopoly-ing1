#ifndef ALBPL_CARTES_H
#define ALBPL_CARTES_H

#include "../../Structures/Structures.h"
#include "../Extensions/Duel/Duel.h"


#define TAILLE_CARTES_CHANCE 10
#define TAILLE_CARTES_COMMUNAUTE 11

#define MAX_ALE_CARTES_CHANCE 10
#define MIN_ALE_CARTES_CHANCE 1
#define MAX_ALE_CARTES_COMMUNAUTE 11
#define MIN_ALE_CARTES_COMMUNAUTE 1


// CARTES CHANCE :
void initialiserNumeroCarteChance(Monopoly *monopoly);
void initialiserActionCarteChance(Monopoly *monopoly);
void initialiserPositionCartePileChance(int max, int min, Monopoly *monopoly);
void initialiserCartesChance(Monopoly *monopoly);

void afficherNumeroCarteChance(Monopoly *monopoly, int numeroCarte);
void afficherActionCarteChance(Monopoly *monopoly, int numeroCarte);
void afficherPositionCarteChance(Monopoly *monopoly, int numeroCarte);
void afficherCarteChance(Monopoly *monopoly, int numeroCarte);
void afficherToutesCartesChance(Monopoly *monopoly);
void afficherCarteChanceTiree(Monopoly *monopoly);

int tirerUneCarteChance(Monopoly *monopoly);
void remettreCarteChanceEnBasPile(Monopoly *monopoly);
void donnerCartePrisonChanceJoueur(Monopoly *monopoly, int numeroJoueur );
void utiliseCarteChancePrison(Monopoly *monopoly, int numeroJoueur);

void actionCarteChanceTiree(Monopoly *monopoly,int numeroCarte, int numeroJoueur);

void joueurCaseChance(Monopoly *monopoly,int numeroJoueur );

// CARTES COMMUNAUTE :
void initialiserNumeroCarteCommunaute(Monopoly *monopoly);
void initialiserActionCarteCommunaute(Monopoly *monopoly);
void initialiserPositionCartePileCommunaute(int max, int min,Monopoly *monopoly);
void initialiserCartesCommunaute(Monopoly *monopoly);

void afficherNumeroCarteCommunaute(Monopoly *monopoly, int numeroCarte);
void afficherActionCarteCommunaute(Monopoly *monopoly, int numeroCarte);
void afficherPositionCarteCommunaute(Monopoly *monopoly, int numeroCarte);
void afficherToutesCartesCommunaute(Monopoly *monopoly);
void afficherCarteCommunauteTiree(Monopoly *monopoly);

int tirerUneCarteCommunaute(Monopoly *monopoly);
void remettreCarteCommunauteEnBasPile(Monopoly *monopoly);
void donnerCartePrisonCommunauteJoueur(Monopoly *monopoly,int numeroJoueur );
void utiliseCarteCommunautePrison(Monopoly *monopoly, int numeroJoueur);

void actionCarteCommunauteTiree(Monopoly *monopoly,int numeroCarte, int numeroJoueur);

void joueurCaseCommunaute(Monopoly *monopoly, int numeroJoueur);

void initialiserLesCartes(Monopoly *monopoly);
void joueurCaseCartes(Monopoly *monopoly, int numeroJoueur);





#endif