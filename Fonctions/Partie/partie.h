#ifndef ALBPL_PARTIE_H
#define ALBPL_PARTIE_H

#include "../../Structures/Structures.h"
#include "../Cartes/cartes.h"

Monopoly initialiserPartie();

void presentation(Monopoly* monopoly);

void tirageAuSortOrdreJoueur(Monopoly* monopoly);

void printAttributionPion(Monopoly *monopoly);

char choixUtilisateur();

void tour(Monopoly* monopoly);
void testTour(Monopoly *monopoly);

void nonBatimentInitialisation(Monopoly* monopoly);

int nombreJoueurActif(Monopoly *monopoly, int nombreJoueur);

#endif
