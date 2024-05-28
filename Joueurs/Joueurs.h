#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_JOUEURS_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_JOUEURS_H

#include "stdio.h"
#include "../Structures/structures.h"

bool detecterMortJoueur(Dofus* dofus);
void detecterGagnant(Dofus* dofus);
void nbDeJoueursEnVie(Dofus* dofus);
void TourJoueur(Dofus* dofus);
bool proba(Dofus* dofus);
void sortSelectionne(Dofus* dofus);


void initEnDurJoueur(Dofus* dofus);

void libererJoueur(Dofus* dofus);

void actualisationCoordsIsoJoueurLorsDuClic(Dofus* dofus);

void actualisationCoordsIsoJoueurLorsDuClicChemin(Dofus* dofus);

void allocationJoueurs(Dofus* dofus);


void actualisationCoordsDeplacementDuJoueurTeleportation(Dofus *dofus);


#endif //ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_JOUEURS_H
