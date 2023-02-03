#ifndef MONOPOLY_HYPOTHEQUE_H
#define MONOPOLY_HYPOTHEQUE_H

#include "../../Structures/Structures.h"

short int verifierNumeroDuJoueur(int numeroJoueur);

short int verifierNumeroPropriete(int numeroPropriete);

int *demanderPropriete(int numeroPropriete);

int verifierQueLaProprieteEstALui(Monopoly* monopoly, int numeroJoueur);

int montantHypothequaireDeLaPropriete(Monopoly* monopoly, int numeroPropriete);

void leverHypotheque(Monopoly* monopoly, int numeroPropriete, int numeroJoueur);

int isProprieteHypothequee(Monopoly* monopoly, int numeroPropriete);

void sayIsHypothequee(Monopoly* monopoly, int numeroProprieteAHypothequer);

void avoirDesRenseignements(Monopoly* monopoly, int numeroJoueur);

void vendreMaisonOuHotel(Monopoly* monopoly, int numeroPropriete, int numeroJoueur);

int hypotheque(Monopoly* monopoly, int numeroPropriete, int numeroJoueur);

void fonctionHypotheque(Monopoly *monopoly, int numeroPropriete, int numeroJoueur);

void obligerHypotheque(Monopoly *monopoly, int numeroJoueur);


#endif //MONOPOLY_HYPOTHEQUE_H
