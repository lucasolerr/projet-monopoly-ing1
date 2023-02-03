#ifndef ALBPL_JOUEUR_H
#define ALBPL_JOUEUR_H

#include "../../Structures/Structures.h"


void afficherNomJoueur(Monopoly *monopoly, int numeroJoueur);

void afficherSoldeJoueur(Monopoly *monopoly, int numeroJoueur);

void afficherProprietesJoueur(Monopoly *monopoly, int numeroJoueur);

void deplacerJoueurDeXCases(Monopoly *monopoly, int numeroJoueur, int somme);

void affichageListePropriete(Monopoly *monopoly, int numeroJoueur, int i);

void affichageNombrePropriete(Monopoly *monopoly, int numeroJoueur);

void afficherToutesPropJoueur(Monopoly *monopoly, int numeroJoueur);

void conditionAffichageHypothequeePropriete(Monopoly* monopoly, int i);

void conditionMaisonAffichageInfosPropriete(Monopoly *monopoly, int i);

void echangeProprieteEntreJoueur(Monopoly *monopoly, int numeroJoueur);

void echangePropriete(Monopoly *monopoly, int numeroJoueur);

void echangerCartePropriete(Monopoly *monopoly, int numeroProprieteJoueurQuiPropose, int numeroProprieteJoueurQuiAccepte,
                            int numeroJoueurQuiPropose, int numeroJoueurQuiAccepte);

int echangeAvec(Monopoly *monopoly, int numeroJoueur, int entierUtilisateur);

void echangeArgent(Monopoly *monopoly, int fromJoueur, int reponseProprieteFrom, int toJoueur, int reponseProprieteTo);


void isJoueurEliminer(Monopoly *monopoly);
int dernierJoueur(Monopoly *monopoly);

#endif
