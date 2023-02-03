#ifndef ALBPL_PLATEAU_H
#define ALBPL_PLATEAU_H

#include "../../Structures/Structures.h"

#define TAILLE_1_CASE_CONSOLE 13

void color(int t, int f);

void afficherBas(Monopoly *monopoly);

void afficherJoueur(Monopoly *monopoly, int ligne, int colonne);

void afficherNomRue(Monopoly *monopoly, int ligne, int colonne);

void afficherCouleurCase(Monopoly *monopoly, int ligne, int colonne);

void affichageSolde(Monopoly* monopoly, int numeroJoueur);


void afficherHaut(Monopoly *monopoly);

void afficherCases(Monopoly *monopoly);

void avancerJoueurXCases(Monopoly* monopoly, int numeroJoueur, int nombreDeCases);

void avancerJoueurXSurCaseX(Monopoly *monopoly, int numeroJoueur, int numeroCase);

void joueurCaseRaccourci(Monopoly *monopoly, int numeroJoueur);

void afficherNomJoueurPlateau(Monopoly *monopoly, int ligne, int colonne);

#endif //ALBPL_PLATEAU_H
