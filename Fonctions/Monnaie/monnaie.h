#ifndef ALBPL_MONNAIE_H
#define ALBPL_MONNAIE_H

#include "../../Structures/Structures.h"


int haveSolde(Monopoly *monopoly, int numeroJoueur, int valeurAPayer);
void paiementBanque(Monopoly *monopoly, int numeroJoueur, int valeurAPayer);
void paiementJoueur(Monopoly *monopoly, int numeroFromJoueur, int numeroToJoueur, int valeurAPayer);

void isFailliteBanque(Monopoly *monopoly, int numeroJoueur);
void isFailliteJoueur(Monopoly *monopoly, int numeroFromJoueur, int numeroToJoueur);

void banquePayeJoueur(Monopoly *monopoly, int numeroJoueur, int valeurARecevoir);
void joueurCaseImpot(Monopoly *monopoly, int numeroJoueur);
void paiementBanqueChoix(Monopoly *monopoly, int numeroJoueur, int valeurAPayer);

void monnaieTest();


#endif
