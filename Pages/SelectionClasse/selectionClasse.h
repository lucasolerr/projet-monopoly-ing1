#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_SELECTIONCLASSE_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_SELECTIONCLASSE_H
#include "../../Structures/structures.h"
#include "../../BoucleTout/boucleTout.h"

#define POSITION_BOUTON_VALIDER_SELECTION_CLASSE (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255) &&(dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)

#define POSITION_SOURIS_CLASSE_IOP (dofus->allegro.coordonneesSourisX > 0 && dofus->allegro.coordonneesSourisX < 640) &&(dofus->allegro.coordonneesSourisY > 0 && dofus->allegro.coordonneesSourisY < 360)
#define POSITION_SOURIS_CLASSE_FECA (dofus->allegro.coordonneesSourisX > 644 && dofus->allegro.coordonneesSourisX < 1280) &&(dofus->allegro.coordonneesSourisY > 0 && dofus->allegro.coordonneesSourisY < 360)
#define POSITION_SOURIS_CLASSE_ECA (dofus->allegro.coordonneesSourisX > 0 && dofus->allegro.coordonneesSourisX < 640) &&(dofus->allegro.coordonneesSourisY > 364 && dofus->allegro.coordonneesSourisY < 720)
#define POSITION_SOURIS_CLASSE_OSA (dofus->allegro.coordonneesSourisX > 644 && dofus->allegro.coordonneesSourisX < 1280) &&(dofus->allegro.coordonneesSourisY > 364 && dofus->allegro.coordonneesSourisY < 720)
#define POSITION_FLECHE_RETOUR_SELECTION_CLASSE (dofus->allegro.coordonneesSourisX > 10 && dofus->allegro.coordonneesSourisX < 135) &&(dofus->allegro.coordonneesSourisY > 10 && dofus->allegro.coordonneesSourisY < 110)

#define POSITION_FLECHE_GAUCHE_CASSE_IOP (dofus->allegro.coordonneesSourisX > 44 && dofus->allegro.coordonneesSourisX < 92) &&(dofus->allegro.coordonneesSourisY > 173 && dofus->allegro.coordonneesSourisY < 244)
#define POSITION_FLECHE_DROITE_CASSE_IOP (dofus->allegro.coordonneesSourisX > 334 && dofus->allegro.coordonneesSourisX < 381) &&(dofus->allegro.coordonneesSourisY > 173 && dofus->allegro.coordonneesSourisY < 244)

#define POSITION_FLECHE_GAUCHE_CASSE_FECA (dofus->allegro.coordonneesSourisX > 50 && dofus->allegro.coordonneesSourisX < 98) &&(dofus->allegro.coordonneesSourisY > 173 && dofus->allegro.coordonneesSourisY < 244)
#define POSITION_FLECHE_DROITE_CASSE_FECA (dofus->allegro.coordonneesSourisX > 334 && dofus->allegro.coordonneesSourisX < 381) &&(dofus->allegro.coordonneesSourisY > 173 && dofus->allegro.coordonneesSourisY < 244)

#define POSITION_FLECHE_GAUCHE_CASSE_ECA (dofus->allegro.coordonneesSourisX > 44 && dofus->allegro.coordonneesSourisX < 90) &&(dofus->allegro.coordonneesSourisY > 173 && dofus->allegro.coordonneesSourisY < 244)
#define POSITION_FLECHE_DROITE_CASSE_ECA (dofus->allegro.coordonneesSourisX > 326 && dofus->allegro.coordonneesSourisX < 373) &&(dofus->allegro.coordonneesSourisY > 173 && dofus->allegro.coordonneesSourisY < 244)

#define POSITION_FLECHE_GAUCHE_CASSE_OSA (dofus->allegro.coordonneesSourisX > 55 && dofus->allegro.coordonneesSourisX < 102) &&(dofus->allegro.coordonneesSourisY > 173 && dofus->allegro.coordonneesSourisY < 244)
#define POSITION_FLECHE_DROITE_CASSE_OSA (dofus->allegro.coordonneesSourisX > 333 && dofus->allegro.coordonneesSourisX < 380) &&(dofus->allegro.coordonneesSourisY > 173 && dofus->allegro.coordonneesSourisY < 244)

void initBitmapPageChoixClasse (Dofus *dofus);

void initBitmapPersoIopSelectionClasse (Dofus *dofus);
void initBitmapPersoFecaSelectionClasse (Dofus *dofus);
void initBitmapPersoEcaSelectionClasse (Dofus *dofus);
void initBitmapPersoOsaSelectionClasse (Dofus *dofus);

void initBitmapPersoSelectionClasseALL (Dofus *dofus);

void dessinerIopFaceSelectionClasse (Dofus *dofus, int x, int y);
void dessinerIopMiFaceDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerIopDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerIopMiDosDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerIopDosSelectionClasse (Dofus *dofus, int x, int y);
void dessinerIopMiDosGaucheSelectionClasse (Dofus *dofus, int x, int y);
void dessinerIopGaucheSelectionClasse (Dofus *dofus, int x, int y);
void dessinerIopMiFaceGaucheSelectionClasse (Dofus *dofus, int x, int y);

void dessinerFecaFaceSelectionClasse (Dofus *dofus, int x, int y);
void dessinerFecaMiFaceDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerFecaDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerFecaMiDosDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerFecaDosSelectionClasse (Dofus *dofus, int x, int y);
void dessinerFecaMiDosGaucheSelectionClasse (Dofus *dofus, int x, int y) ;
void dessinerFecaGaucheSelectionClasse (Dofus *dofus, int x, int y);
void dessinerFecaMiFaceGaucheSelectionClasse (Dofus *dofus, int x, int y);

void dessinerEcaFaceSelectionClasse (Dofus *dofus, int x, int y);
void dessinerEcaMiFaceDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerEcaDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerEcaMiDosDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerEcaDosSelectionClasse (Dofus *dofus, int x, int y);
void dessinerEcaMiDosGaucheSelectionClasse (Dofus *dofus, int x, int y);
void dessinerEcaGaucheSelectionClasse (Dofus *dofus, int x, int y);
void dessinerEcaMiFaceGaucheSelectionClasse (Dofus *dofus, int x, int y);

void dessinerOsaFaceSelectionClasse (Dofus *dofus, int x, int y);
void dessinerOsaMiFaceDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerOsaDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerOsaMiDosDroiteSelectionClasse (Dofus *dofus, int x, int y);
void dessinerOsaDosSelectionClasse (Dofus *dofus, int x, int y);
void dessinerOsaMiDosGaucheSelectionClasse (Dofus *dofus, int x, int y);
void dessinerOsaGaucheSelectionClasse (Dofus *dofus, int x, int y);
void dessinerOsaMiFaceGaucheSelectionClasse (Dofus *dofus, int x, int y);

void initBitmapClasse (Dofus *dofus);

void detecterFlecheRetourCliquer (Dofus *dofus);

void dessinerClassesHoover (Dofus *dofus);

void dessinerEtChoisirClasseJoueurs (Dofus *dofus);

void dessinerEtChoisirClasseJoueurs2(Dofus *dofus);

#endif
