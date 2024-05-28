#ifndef ALBPL_PRISON_H
#define ALBPL_PRISON_H

#include "../../Structures/Structures.h"

void allerEnPrison(Monopoly *monopoly, int numeroJoueur);

int possessionCartePrison(Monopoly *monopoly, int numeroJoueur);

int quiACartePrisonChance(Monopoly *monopoly);

int quiACartePrisonCommunaute(Monopoly *monopoly);

void avancerIfDeAreDouble(Monopoly *monopoly, int numeroJoueur);

void routinePrison(Monopoly *monopoly, int numeroJoueur);

void isEnPrison(Monopoly *monopoly, int numeroJoueur);

void dernierTourEnPrison(Monopoly *monopoly, int numeroJoueur);

void isEnPrison2(Monopoly *monopoly, int numeroJoueur);

#endif
