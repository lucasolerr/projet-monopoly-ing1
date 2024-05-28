#ifndef ALBPL_IMMOBILIER_H
#define ALBPL_IMMOBILIER_H

#include "../../Structures/Structures.h"

#define TAILLE_UNE_CASE_CONSOLE 27
#define TAILLECONSOLEMOINS2 25
#define TAILLE_UNE_CASE_CONSOLE_NON_BAT 40
#define TAILLECONSOLEMOINS2NONBAT 38

int isPenurieBatiment(Monopoly *monopoly, int nombreMaisonQueVeutAcheteur);

void vendreMaisons(Monopoly* monopoly, int nombreDeMaisonQueJoueurVeutVendre,int numeroJoueur, int numeroPropriete);

int isProprieteNonAchetable(Monopoly* monopoly, int numeroPropriete);

int isProprieteNonAchetee(Monopoly *monopoly, int numeroPropriete);

void afficherInfosPropriete(Monopoly* monopoly, int numeroPropriete);

void acheterPropriete(Monopoly* monopoly, int numeroJoueur, int numeroPropriete);

int nbMaisonSurCase(Monopoly* monopoly, int numeroPropriete);

int isMaisonSurCase(Monopoly* monopoly, int numeroPropriete);

int is4MaisonSurCase(Monopoly* monopoly, int numeroPropriete);

int isHotelSurCase(Monopoly* monopoly, int numeroPropriete);

void acheterMaisons(Monopoly* monopoly, int numeroCase, int numeroJoueur, int nombreMaisonSouhaitee);

int isProprieteDeJoueurX(Monopoly* monopoly, int numeroPropriete, int numeroJoueur);

void actualiserLoyer(Monopoly *monopoly);

// fait par antoine :
void joueurXChezJoueurX(Monopoly *monopoly, int fromJoueur, int postionJoueur);
int joueurCasePropriete(Monopoly *monopoly, int numeroJoueur);
void joueurActionCaseProprietes(Monopoly *monopoly, int numeroJoueur);
void acheterHotel(Monopoly *monopoly, int numeroCase, int numeroJoueur);
void voulezVousAcheterMaison(Monopoly* monopoly, int numeroJoueur);
void voulezVousVendreMaison(Monopoly *monopoly, int numeroJoueur);
int isProprieteGroupe(Monopoly *monopoly, int numeroJoueur);
void forcerVendreMaisons(Monopoly *monopoly, int numeroJoueur);


#endif
