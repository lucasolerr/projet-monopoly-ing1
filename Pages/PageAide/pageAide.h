#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_PAGEAIDE_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_PAGEAIDE_H
#include "../../Structures/structures.h"

#define FLECHE_RETOUR_AIDE (dofus->allegro.coordonneesSourisX > 27 && dofus->allegro.coordonneesSourisX < 109) && (dofus->allegro.coordonneesSourisY > 21 && dofus->allegro.coordonneesSourisY < 84)
#define APPRENDRE_A_JOUER_AIDE (dofus->allegro.coordonneesSourisX > 65 && dofus->allegro.coordonneesSourisX < 396) && (dofus->allegro.coordonneesSourisY > 286 && dofus->allegro.coordonneesSourisY < 442)
#define REGLES_JEU_AIDE (dofus->allegro.coordonneesSourisX > 474 && dofus->allegro.coordonneesSourisX < 806) && (dofus->allegro.coordonneesSourisY > 286 && dofus->allegro.coordonneesSourisY < 442)
#define CLASSES_AIDE (dofus->allegro.coordonneesSourisX > 876 && dofus->allegro.coordonneesSourisX < 1209) && (dofus->allegro.coordonneesSourisY > 286 && dofus->allegro.coordonneesSourisY < 442)
#define POSITION_JOUEUR_QUATRE (dofus->allegro.coordonneesSourisX > 65 && dofus->allegro.coordonneesSourisX < 396) && (dofus->allegro.coordonneesSourisY > 331 && dofus->allegro.coordonneesSourisY < 472)
#define POSITION_JOUEUR_CINQ (dofus->allegro.coordonneesSourisX > 474 && dofus->allegro.coordonneesSourisX < 806) && (dofus->allegro.coordonneesSourisY > 331 && dofus->allegro.coordonneesSourisY < 472)
#define POSITION_JOUEUR_SIX (dofus->allegro.coordonneesSourisX > 876 && dofus->allegro.coordonneesSourisX < 1209) && (dofus->allegro.coordonneesSourisY > 331 && dofus->allegro.coordonneesSourisY < 472)
#define POSITION_JOUEUR_SEPT (dofus->allegro.coordonneesSourisX > 65 && dofus->allegro.coordonneesSourisX < 396) && (dofus->allegro.coordonneesSourisY > 509 && dofus->allegro.coordonneesSourisY < 648)

#define POSITION_CONTINUER_CLASSES_IMAGE (dofus->allegro.coordonneesSourisX > 1061 && dofus->allegro.coordonneesSourisX < 1210) && (dofus->allegro.coordonneesSourisY > 620 && dofus->allegro.coordonneesSourisY < 648)

#define LIRE_SUITE_1 (dofus->allegro.coordonneesSourisX > 1120 && dofus->allegro.coordonneesSourisX < 1280) && (dofus->allegro.coordonneesSourisY > 256 && dofus->allegro.coordonneesSourisY < 283)
#define IMAGE_1 (dofus->allegro.coordonneesSourisX > 26 && dofus->allegro.coordonneesSourisX < 305) && (dofus->allegro.coordonneesSourisY > 129 && dofus->allegro.coordonneesSourisY < 283)

#define LIRE_SUITE_2 (dofus->allegro.coordonneesSourisX > 1120 && dofus->allegro.coordonneesSourisX < 1280) && (dofus->allegro.coordonneesSourisY > 432 && dofus->allegro.coordonneesSourisY < 458)
#define IMAGE_2 (dofus->allegro.coordonneesSourisX > 26 && dofus->allegro.coordonneesSourisX < 305) && (dofus->allegro.coordonneesSourisY > 316 && dofus->allegro.coordonneesSourisY < 473)

#define LIRE_SUITE_3 (dofus->allegro.coordonneesSourisX > 1120 && dofus->allegro.coordonneesSourisX < 1280) && (dofus->allegro.coordonneesSourisY > 620 && dofus->allegro.coordonneesSourisY < 645)
#define IMAGE_3 (dofus->allegro.coordonneesSourisX > 26 && dofus->allegro.coordonneesSourisX < 305) && (dofus->allegro.coordonneesSourisY > 504 && dofus->allegro.coordonneesSourisY < 662)

#define POSITION_CONTINUER_REGLE_JEU (dofus->allegro.coordonneesSourisX > 1061 && dofus->allegro.coordonneesSourisX < 1210) && (dofus->allegro.coordonneesSourisY > 620 && dofus->allegro.coordonneesSourisY < 648)

#define COMMENCER_COMBAT (dofus->allegro.coordonneesSourisX > 886 && dofus->allegro.coordonneesSourisX < 1205) && (dofus->allegro.coordonneesSourisY > 620 && dofus->allegro.coordonneesSourisY < 647)
#define UTILISER_SORT (dofus->allegro.coordonneesSourisX > 974 && dofus->allegro.coordonneesSourisX < 1210) && (dofus->allegro.coordonneesSourisY > 620 && dofus->allegro.coordonneesSourisY < 647)
#define REVENIR_AU_MENU (dofus->allegro.coordonneesSourisX > 1097 && dofus->allegro.coordonneesSourisX < 1242) && (dofus->allegro.coordonneesSourisY > 618 && dofus->allegro.coordonneesSourisY < 680)



void initBitmapPageAide(Dofus *dofus);

void bouclePageAide(Dofus *dofus);

#endif
