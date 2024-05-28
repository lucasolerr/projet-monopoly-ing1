#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_BITMAPS_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_BITMAPS_H

#include "../Structures/structures.h"

//ALLOCATIONS

void bitmapCreateAll(Dofus* dofus);

void bitmapCreateSpriteHUD(Dofus* dofus);

void bitmapCreateSpriteTile(Dofus* dofus);

void bitmapSpriteDecorCreate(Dofus* dofus);

void bitmapCreateLavaBg(Dofus* dofus);

void libererBitmapSpriteHUD(Dofus* dofus);

void bitmapCreateHoverTileBlocPlein(Dofus* dofus);

void bitmapCreateTileChemin(Dofus* dofus);

void bitmapSortsCreate(Dofus* dofus);

void bitmapCreateIopMvmnt(Dofus* dofus);

void bitmapCreateLogo(Dofus* dofus);

void bitmapCreateBoutonValiderPL(Dofus* dofus);

void bitmapCreatePersonnagesEnJeu (Dofus* dofus);

void bitmapCreatePageAide (Dofus* dofus);

void bitmapCreatePersonnagesClasse (Dofus* dofus);

void bitmapCreateNombreJoueur(Dofus *dofus);

void bitmapCreateNombreJoueurBouton(Dofus *dofus);

void bitmapCreateNomJoueur1(Dofus *dofus);
void bitmapCreateNomJoueur2(Dofus *dofus);

void bitmapCreateClasseDecors(Dofus *dofus);

void bitmapCreateTileZoneSort(Dofus* dofus);

void bitmapCreateFinDeGame(Dofus* dofus);

//LIBERATIONS

void libererBitmapHoverTileBlocPlein(Dofus* dofus);

void libererBitmpaTileChemin(Dofus* dofus);

void libererIopMvmnt(Dofus* dofus);

void libererBitmapLavaBg(Dofus* dofus);

void libererBitmapSpriteTile(Dofus* dofus);

void libererBitmapSorts(Dofus* dofus);

void libererBitmap(Dofus* dofus);

void libererBitmapAll(Dofus* dofus);

void bitmapCreateSpriteIopAnim(Dofus* dofus);

void libererBitmapPersonnagesEnJeu (Dofus* dofus);

void libererBitmapPersonnagesClasse(Dofus* dofus);

void libererBitmapNombreJoueur(Dofus *dofus);

void libererBitmapNombreJoueurBouton(Dofus *dofus);

void libererBitmapNomJoueur1(Dofus *dofus);
void libererBitmapNomJoueur2(Dofus *dofus);

void libererBitmapClasseDecors(Dofus *dofus);

void libererBitmapLogo(Dofus* dofus);

void libererBitmapBoutonValider(Dofus *dofus);

void libererBitmapFinDeGame(Dofus* dofus);



#endif
