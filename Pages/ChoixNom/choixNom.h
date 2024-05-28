#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_CHOIXNOM_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_CHOIXNOM_H
#include "../../Structures/structures.h"
#include "../SelectionNombreJoueur/selectionNombreJoueur.h"

#define POSITION_JOUEUR_UN (dofus->allegro.coordonneesSourisX > 65 && dofus->allegro.coordonneesSourisX < 396) && (dofus->allegro.coordonneesSourisY > 154 && dofus->allegro.coordonneesSourisY < 294)
#define POSITION_JOUEUR_DEUX (dofus->allegro.coordonneesSourisX > 474 && dofus->allegro.coordonneesSourisX < 806) && (dofus->allegro.coordonneesSourisY > 154 && dofus->allegro.coordonneesSourisY < 294)
#define POSITION_JOUEUR_TROIS (dofus->allegro.coordonneesSourisX > 876 && dofus->allegro.coordonneesSourisX < 1209) && (dofus->allegro.coordonneesSourisY > 154 && dofus->allegro.coordonneesSourisY < 294)
#define POSITION_JOUEUR_QUATRE (dofus->allegro.coordonneesSourisX > 65 && dofus->allegro.coordonneesSourisX < 396) && (dofus->allegro.coordonneesSourisY > 331 && dofus->allegro.coordonneesSourisY < 472)
#define POSITION_JOUEUR_CINQ (dofus->allegro.coordonneesSourisX > 474 && dofus->allegro.coordonneesSourisX < 806) && (dofus->allegro.coordonneesSourisY > 331 && dofus->allegro.coordonneesSourisY < 472)
#define POSITION_JOUEUR_SIX (dofus->allegro.coordonneesSourisX > 876 && dofus->allegro.coordonneesSourisX < 1209) && (dofus->allegro.coordonneesSourisY > 331 && dofus->allegro.coordonneesSourisY < 472)
#define POSITION_JOUEUR_SEPT (dofus->allegro.coordonneesSourisX > 65 && dofus->allegro.coordonneesSourisX < 396) && (dofus->allegro.coordonneesSourisY > 509 && dofus->allegro.coordonneesSourisY < 648)
#define POSITION_JOUEUR_HUIT (dofus->allegro.coordonneesSourisX > 474 && dofus->allegro.coordonneesSourisX < 806) && (dofus->allegro.coordonneesSourisY > 509 && dofus->allegro.coordonneesSourisY < 648)
#define POSITION_JOUEUR_NEUF (dofus->allegro.coordonneesSourisX > 876 && dofus->allegro.coordonneesSourisX < 1209) && (dofus->allegro.coordonneesSourisY > 509 && dofus->allegro.coordonneesSourisY < 648)

#define POSITION_BOUTON_LISTE (dofus->allegro.coordonneesSourisX > 450 && dofus->allegro.coordonneesSourisX < 842) && (dofus->allegro.coordonneesSourisY > 475 && dofus->allegro.coordonneesSourisY < 580)
#define POSITION_FLECHE_RETOUR_CHOIX_NOM (dofus->allegro.coordonneesSourisX > 28 && dofus->allegro.coordonneesSourisX < 147) && (dofus->allegro.coordonneesSourisY > 21 && dofus->allegro.coordonneesSourisY < 115)
#define POSITION_CROIX_CHOIX_NOM (dofus->allegro.coordonneesSourisX > 24 && dofus->allegro.coordonneesSourisX < 120) && (dofus->allegro.coordonneesSourisY > 24 && dofus->allegro.coordonneesSourisY < 121)
#define CASE_NOM (dofus->allegro.coordonneesSourisX > 340 && dofus->allegro.coordonneesSourisX < 940) && (dofus->allegro.coordonneesSourisY > 250 && dofus->allegro.coordonneesSourisY < 375)

void initBitmapChoixNomJoueurs (Dofus *dofus);

char switchCaseToucheClavier (Dofus *dofus);

void detecterToucheClavier(Dofus *dofus);
void dessinerLaToucheClavier(Dofus *dofus);

void choixNomJoueur (Dofus *dofus);

#endif
