#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_SORTS_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_SORTS_H

#include "../Structures/structures.h"

bool echecCritique(Dofus* dofus);

void initBitmapSortIop(Dofus* dofus);
void initBitmapSortFeca(Dofus* dofus);
void initBitmapSortEca(Dofus* dofus);
void initBitmapSortOsa(Dofus* dofus);
void initBitmapSorts(Dofus* dofus);

void initSortsIop(Dofus* dofus);
void initSortsFeca(Dofus* dofus);
void initSortsEca(Dofus* dofus);
void initSortsOsa(Dofus* dofus);
void initSorts(Dofus* dofus);


void boucleCombat(Dofus* dofus);
void affichageGeneralCombat(Dofus *dofus);

void passageJoueurSuivant(Dofus* dofus);
void timerFunc(Dofus* dofus);

#endif
