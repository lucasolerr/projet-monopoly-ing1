#include "sorts.h"
#include "../Map/map.h"
#include "../Pages/PageMenuInGame/pageMenuInGame.h"
#include "../Joueurs/Joueurs.h"
#include "../Pages/PageMenuInGame/pageMenuInGame.h"

bool echecCritique(Dofus* dofus){
    int temp = rand() % 101;
    if (dofus->joueurActif->ptrClasse == &dofus->classes[IOP]){
        for (int i = 0; i < NB_SORTS_IOP; ++i) {
            if (dofus->tabSortsIop[i].sortSelectionne == true && temp <= dofus->tabSortsIop[i].echecCritique && dofus->joueurActif->nbPA >= dofus->tabSortsIop[i].nbPA){
                dofus->pages.pageJeu.echecCritique = true;
                return true;
            }
        }
    }else if (dofus->joueurActif->ptrClasse == &dofus->classes[FECA]){
        for (int i = 0; i < NB_SORTS_FECA; ++i) {
            if (dofus->tabSortsFeca[i].sortSelectionne == true && temp <= dofus->tabSortsFeca[i].echecCritique && dofus->joueurActif->nbPA >= dofus->tabSortsFeca[i].nbPA){
                dofus->pages.pageJeu.echecCritique = true;
                return true;
            }
        }
    }else if (dofus->joueurActif->ptrClasse == &dofus->classes[ECA]){
        for (int i = 0; i < NB_SORTS_ECA; ++i) {
            if (dofus->tabSortsEca[i].sortSelectionne == true && temp <= dofus->tabSortsEca[i].echecCritique && dofus->joueurActif->nbPA >= dofus->tabSortsEca[i].nbPA){
                dofus->pages.pageJeu.echecCritique = true;
                return true;
            }
        }
    }else if (dofus->joueurActif->ptrClasse == &dofus->classes[OSA]){
        for (int i = 0; i < NB_SORTS_OSA; ++i) {
            if (dofus->tabSortsOsa[i].sortSelectionne == true && temp <= dofus->tabSortsOsa[i].echecCritique && dofus->joueurActif->nbPA >= dofus->tabSortsOsa[i].nbPA){
                dofus->pages.pageJeu.echecCritique = true;
                return true;
            }
        }
    }
    dofus->pages.pageJeu.echecCritique = false;
    return false;
}
bool ligneDeVueLigneDroite(Dofus* dofus){
    if (dofus->joueurActif->ptrClasse == &dofus->classes[IOP] && dofus->tabSortsIop[BOND].sortSelectionne == true){
        return true;
    }else if (dofus->joueurActif->ptrClasse == &dofus->classes[OSA] && dofus->tabSortsOsa[HARCELANTE].sortSelectionne == true){
        return true;
    }else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && dofus->joueurActif->celluleActuelle.celluleX < dofus->interactionExterieure.mouse.celluleIso.celluleX){
        for (int i = 0; i < valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - dofus->interactionExterieure.mouse.celluleIso.celluleX) ; ++i) {
            if (dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + i].blocPlein == true){
                return false;
            }
        }
    }else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && dofus->joueurActif->celluleActuelle.celluleX > dofus->interactionExterieure.mouse.celluleIso.celluleX){
        for (int i = 0; i < valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - dofus->interactionExterieure.mouse.celluleIso.celluleX) ; ++i) {
            if (dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX - i].blocPlein == true){
                return false;
            }
        }
    }else if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && dofus->joueurActif->celluleActuelle.celluleY < dofus->interactionExterieure.mouse.celluleIso.celluleY){
        for (int i = 0; i < valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - dofus->interactionExterieure.mouse.celluleIso.celluleY) ; ++i) {
            if (dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY + i][dofus->joueurActif->celluleActuelle.celluleX].blocPlein == true){
                return false;
            }
        }
    }else if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && dofus->joueurActif->celluleActuelle.celluleY > dofus->interactionExterieure.mouse.celluleIso.celluleY){
        for (int i = 0; i < valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - dofus->interactionExterieure.mouse.celluleIso.celluleY) ; ++i) {
            if (dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY - i][dofus->joueurActif->celluleActuelle.celluleX].blocPlein == true){
                return false;
            }
        }
    }
}
bool isLancerSort(Dofus* dofus){
    if (ligneDeVueLigneDroite(dofus) == true && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein != true && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].lancerLeSort == true && dofus->joueurActif->nbPA > 0){
        return true;
    } else{
        for (int i = 0; i < NB_SORTS_IOP; ++i) {
            dofus->tabSortsOsa[i].sortLance = false;
            dofus->tabSortsIop[i].sortLance = false;
            dofus->tabSortsEca[i].sortLance = false;
            dofus->tabSortsFeca[i].sortLance = false;
        }
        return false;
    }
}
bool ligneDeVueTest(Dofus* dofus){
    int sourisX = dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX + 1].coordsXY.screenX;
    int sourisY = dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX + 1].coordsXY.screenY;
    /*for (int i = 1; i < NBCELLULEY - 1; ++i) {
        for (int j = 1; j < NBCELLULEX - 1; ++j) {
            if (dofus->map.mapTile[i][j].blocPlein == true){
                al_draw_line(dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenX,dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenY,dofus->map.mapTile[i][j].coordsXY.screenX,dofus->map.mapTile[i][j].coordsXY.screenY + 20,al_map_rgb(0,255,0),2);
                al_draw_line(dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenX,dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenY,dofus->map.mapTile[i][j].coordsXY.screenX + 80,dofus->map.mapTile[i][j].coordsXY.screenY + 20,al_map_rgb(0,255,0),2);
            }
        }
    }*/
    al_draw_line(dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenX,dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenY,sourisX,sourisY,al_map_rgb(0,0,255),2);
    al_draw_line(dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenX,dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenY,dofus->map.mapTile[9][8].coordsXY.screenX,dofus->map.mapTile[9][8].coordsXY.screenY + 20,al_map_rgb(0,255,0),2);
    al_draw_line(dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenX,dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX + 1].coordsXY.screenY,dofus->map.mapTile[9][8].coordsXY.screenX + 80,dofus->map.mapTile[9][8].coordsXY.screenY + 20,al_map_rgb(0,255,0),2);

}

void initBitmapSortIop(Dofus* dofus){
    dofus->tabSortsIop[PRESSION].spriteSorts[SPRITE_PRESSION].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsIop[PRESSION].spriteSorts[SPRITE_PRESSION].spriteX = 37;
    dofus->tabSortsIop[PRESSION].spriteSorts[SPRITE_PRESSION].spriteY = 33;
    dofus->tabSortsIop[PRESSION].spriteSorts[SPRITE_PRESSION].spriteLargeur = 55;
    dofus->tabSortsIop[PRESSION].spriteSorts[SPRITE_PRESSION].spriteHauteur = 55;
    dofus->tabSortsIop[PRESSION].spriteSorts[SPRITE_PRESSION].screenXFixe = 500;
    dofus->tabSortsIop[PRESSION].spriteSorts[SPRITE_PRESSION].screenYFixe = 630;

    dofus->tabSortsIop[CONCENTRATION].spriteSorts[SPRITE_CONCENTRATION].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsIop[CONCENTRATION].spriteSorts[SPRITE_CONCENTRATION].spriteX = 107;
    dofus->tabSortsIop[CONCENTRATION].spriteSorts[SPRITE_CONCENTRATION].spriteY = 33;
    dofus->tabSortsIop[CONCENTRATION].spriteSorts[SPRITE_CONCENTRATION].spriteLargeur = 55;
    dofus->tabSortsIop[CONCENTRATION].spriteSorts[SPRITE_CONCENTRATION].spriteHauteur = 55;
    dofus->tabSortsIop[CONCENTRATION].spriteSorts[SPRITE_CONCENTRATION].screenXFixe = 560;
    dofus->tabSortsIop[CONCENTRATION].spriteSorts[SPRITE_CONCENTRATION].screenYFixe = 630;

    dofus->tabSortsIop[EPEE].spriteSorts[SPRITE_EPEE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsIop[EPEE].spriteSorts[SPRITE_EPEE].spriteX = 177;
    dofus->tabSortsIop[EPEE].spriteSorts[SPRITE_EPEE].spriteY = 33;
    dofus->tabSortsIop[EPEE].spriteSorts[SPRITE_EPEE].spriteLargeur = 55;
    dofus->tabSortsIop[EPEE].spriteSorts[SPRITE_EPEE].spriteHauteur = 55;
    dofus->tabSortsIop[EPEE].spriteSorts[SPRITE_EPEE].screenXFixe = 620;
    dofus->tabSortsIop[EPEE].spriteSorts[SPRITE_EPEE].screenYFixe = 630;

    dofus->tabSortsIop[INTIMIDATION].spriteSorts[SPRITE_INTIMIDATION].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsIop[INTIMIDATION].spriteSorts[SPRITE_INTIMIDATION].spriteX = 247;
    dofus->tabSortsIop[INTIMIDATION].spriteSorts[SPRITE_INTIMIDATION].spriteY = 33;
    dofus->tabSortsIop[INTIMIDATION].spriteSorts[SPRITE_INTIMIDATION].spriteLargeur = 55;
    dofus->tabSortsIop[INTIMIDATION].spriteSorts[SPRITE_INTIMIDATION].spriteHauteur = 55;
    dofus->tabSortsIop[INTIMIDATION].spriteSorts[SPRITE_INTIMIDATION].screenXFixe = 680;
    dofus->tabSortsIop[INTIMIDATION].spriteSorts[SPRITE_INTIMIDATION].screenYFixe = 630;

    dofus->tabSortsIop[SOUFFLE].spriteSorts[SPRITE_SOUFFLE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsIop[SOUFFLE].spriteSorts[SPRITE_SOUFFLE].spriteX = 317;
    dofus->tabSortsIop[SOUFFLE].spriteSorts[SPRITE_SOUFFLE].spriteY = 33;
    dofus->tabSortsIop[SOUFFLE].spriteSorts[SPRITE_SOUFFLE].spriteLargeur = 55;
    dofus->tabSortsIop[SOUFFLE].spriteSorts[SPRITE_SOUFFLE].spriteHauteur = 55;
    dofus->tabSortsIop[SOUFFLE].spriteSorts[SPRITE_SOUFFLE].screenXFixe = 740;
    dofus->tabSortsIop[SOUFFLE].spriteSorts[SPRITE_SOUFFLE].screenYFixe = 630;

    dofus->tabSortsIop[BOND].spriteSorts[SPRITE_BOND].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsIop[BOND].spriteSorts[SPRITE_BOND].spriteX = 387;
    dofus->tabSortsIop[BOND].spriteSorts[SPRITE_BOND].spriteY = 33;
    dofus->tabSortsIop[BOND].spriteSorts[SPRITE_BOND].spriteLargeur = 55;
    dofus->tabSortsIop[BOND].spriteSorts[SPRITE_BOND].spriteHauteur = 55;
    dofus->tabSortsIop[BOND].spriteSorts[SPRITE_BOND].screenXFixe = 800;
    dofus->tabSortsIop[BOND].spriteSorts[SPRITE_BOND].screenYFixe = 630;

}
void initPositionSortMouvIop(Dofus* dofus){
    dofus->tabSortsIop[PRESSION].spriteSorts[SPRITE_PRESSION].screenX = 500;
    dofus->tabSortsIop[PRESSION].spriteSorts[SPRITE_PRESSION].screenY = 630;

    dofus->tabSortsIop[CONCENTRATION].spriteSorts[SPRITE_CONCENTRATION].screenX = 560;
    dofus->tabSortsIop[CONCENTRATION].spriteSorts[SPRITE_CONCENTRATION].screenY = 630;

    dofus->tabSortsIop[EPEE].spriteSorts[SPRITE_EPEE].screenX = 620;
    dofus->tabSortsIop[EPEE].spriteSorts[SPRITE_EPEE].screenY = 630;

    dofus->tabSortsIop[INTIMIDATION].spriteSorts[SPRITE_INTIMIDATION].screenX = 680;
    dofus->tabSortsIop[INTIMIDATION].spriteSorts[SPRITE_INTIMIDATION].screenY = 630;

    dofus->tabSortsIop[SOUFFLE].spriteSorts[SPRITE_SOUFFLE].screenX = 740;
    dofus->tabSortsIop[SOUFFLE].spriteSorts[SPRITE_SOUFFLE].screenY = 630;

    dofus->tabSortsIop[BOND].spriteSorts[SPRITE_BOND].screenX = 800;
    dofus->tabSortsIop[BOND].spriteSorts[SPRITE_BOND].screenY = 630;
}
void initBitmapSortFeca(Dofus* dofus){
    dofus->tabSortsFeca[GLYPHE].spriteSorts[SPRITE_GLYPHE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsFeca[GLYPHE].spriteSorts[SPRITE_GLYPHE].spriteX = 506;
    dofus->tabSortsFeca[GLYPHE].spriteSorts[SPRITE_GLYPHE].spriteY = 33;
    dofus->tabSortsFeca[GLYPHE].spriteSorts[SPRITE_GLYPHE].spriteLargeur = 55;
    dofus->tabSortsFeca[GLYPHE].spriteSorts[SPRITE_GLYPHE].spriteHauteur = 55;
    dofus->tabSortsFeca[GLYPHE].spriteSorts[SPRITE_GLYPHE].screenXFixe = 500;
    dofus->tabSortsFeca[GLYPHE].spriteSorts[SPRITE_GLYPHE].screenYFixe = 630;

    dofus->tabSortsFeca[TENSION].spriteSorts[SPRITE_TENSION].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsFeca[TENSION].spriteSorts[SPRITE_TENSION].spriteX = 576;
    dofus->tabSortsFeca[TENSION].spriteSorts[SPRITE_TENSION].spriteY = 33;
    dofus->tabSortsFeca[TENSION].spriteSorts[SPRITE_TENSION].spriteLargeur = 55;
    dofus->tabSortsFeca[TENSION].spriteSorts[SPRITE_TENSION].spriteHauteur = 55;
    dofus->tabSortsFeca[TENSION].spriteSorts[SPRITE_TENSION].screenXFixe = 560;
    dofus->tabSortsFeca[TENSION].spriteSorts[SPRITE_TENSION].screenYFixe = 630;

    dofus->tabSortsFeca[BULLE].spriteSorts[SPRITE_BULLE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsFeca[BULLE].spriteSorts[SPRITE_BULLE].spriteX = 646;
    dofus->tabSortsFeca[BULLE].spriteSorts[SPRITE_BULLE].spriteY = 33;
    dofus->tabSortsFeca[BULLE].spriteSorts[SPRITE_BULLE].spriteLargeur = 55;
    dofus->tabSortsFeca[BULLE].spriteSorts[SPRITE_BULLE].spriteHauteur = 55;
    dofus->tabSortsFeca[BULLE].spriteSorts[SPRITE_BULLE].screenXFixe = 620;
    dofus->tabSortsFeca[BULLE].spriteSorts[SPRITE_BULLE].screenYFixe = 630;

    dofus->tabSortsFeca[NUAGE].spriteSorts[SPRITE_NUAGE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsFeca[NUAGE].spriteSorts[SPRITE_NUAGE].spriteX = 716;
    dofus->tabSortsFeca[NUAGE].spriteSorts[SPRITE_NUAGE].spriteY = 33;
    dofus->tabSortsFeca[NUAGE].spriteSorts[SPRITE_NUAGE].spriteLargeur = 55;
    dofus->tabSortsFeca[NUAGE].spriteSorts[SPRITE_NUAGE].spriteHauteur = 55;
    dofus->tabSortsFeca[NUAGE].spriteSorts[SPRITE_NUAGE].screenXFixe = 680;
    dofus->tabSortsFeca[NUAGE].spriteSorts[SPRITE_NUAGE].screenYFixe = 630;

    dofus->tabSortsFeca[AVEUGLEMENT].spriteSorts[SPRITE_AVEUGLEMENT].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsFeca[AVEUGLEMENT].spriteSorts[SPRITE_AVEUGLEMENT].spriteX = 786;
    dofus->tabSortsFeca[AVEUGLEMENT].spriteSorts[SPRITE_AVEUGLEMENT].spriteY = 33;
    dofus->tabSortsFeca[AVEUGLEMENT].spriteSorts[SPRITE_AVEUGLEMENT].spriteLargeur = 55;
    dofus->tabSortsFeca[AVEUGLEMENT].spriteSorts[SPRITE_AVEUGLEMENT].spriteHauteur = 55;
    dofus->tabSortsFeca[AVEUGLEMENT].spriteSorts[SPRITE_AVEUGLEMENT].screenXFixe = 740;
    dofus->tabSortsFeca[AVEUGLEMENT].spriteSorts[SPRITE_AVEUGLEMENT].screenYFixe = 630;

    dofus->tabSortsFeca[BASTION].spriteSorts[SPRITE_BASTION].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsFeca[BASTION].spriteSorts[SPRITE_BASTION].spriteX = 856;
    dofus->tabSortsFeca[BASTION].spriteSorts[SPRITE_BASTION].spriteY = 33;
    dofus->tabSortsFeca[BASTION].spriteSorts[SPRITE_BASTION].spriteLargeur = 55;
    dofus->tabSortsFeca[BASTION].spriteSorts[SPRITE_BASTION].spriteHauteur = 55;
    dofus->tabSortsFeca[BASTION].spriteSorts[SPRITE_BASTION].screenXFixe = 800;
    dofus->tabSortsFeca[BASTION].spriteSorts[SPRITE_BASTION].screenYFixe = 630;
}
void initPositionSortMouvFeca(Dofus* dofus){
    dofus->tabSortsFeca[GLYPHE].spriteSorts[SPRITE_GLYPHE].screenX = 500;
    dofus->tabSortsFeca[GLYPHE].spriteSorts[SPRITE_GLYPHE].screenY = 630;

    dofus->tabSortsFeca[TENSION].spriteSorts[SPRITE_TENSION].screenX = 560;
    dofus->tabSortsFeca[TENSION].spriteSorts[SPRITE_TENSION].screenY = 630;

    dofus->tabSortsFeca[BULLE].spriteSorts[SPRITE_BULLE].screenX = 620;
    dofus->tabSortsFeca[BULLE].spriteSorts[SPRITE_BULLE].screenY = 630;

    dofus->tabSortsFeca[NUAGE].spriteSorts[SPRITE_NUAGE].screenX = 680;
    dofus->tabSortsFeca[NUAGE].spriteSorts[SPRITE_NUAGE].screenY = 630;

    dofus->tabSortsFeca[AVEUGLEMENT].spriteSorts[SPRITE_AVEUGLEMENT].screenX = 740;
    dofus->tabSortsFeca[AVEUGLEMENT].spriteSorts[SPRITE_AVEUGLEMENT].screenY = 630;

    dofus->tabSortsFeca[BASTION].spriteSorts[SPRITE_BASTION].screenX = 800;
    dofus->tabSortsFeca[BASTION].spriteSorts[SPRITE_BASTION].screenY = 630;
}
void initBitmapSortEca(Dofus* dofus){
    dofus->tabSortsEca[TOPKAJ].spriteSorts[SPRITE_TOPKAJ].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsEca[TOPKAJ].spriteSorts[SPRITE_TOPKAJ].spriteX = 506;
    dofus->tabSortsEca[TOPKAJ].spriteSorts[SPRITE_TOPKAJ].spriteY = 282;
    dofus->tabSortsEca[TOPKAJ].spriteSorts[SPRITE_TOPKAJ].spriteLargeur = 55;
    dofus->tabSortsEca[TOPKAJ].spriteSorts[SPRITE_TOPKAJ].spriteHauteur = 55;
    dofus->tabSortsEca[TOPKAJ].spriteSorts[SPRITE_TOPKAJ].screenXFixe = 500;
    dofus->tabSortsEca[TOPKAJ].spriteSorts[SPRITE_TOPKAJ].screenYFixe = 630;

    dofus->tabSortsEca[COUSSINET].spriteSorts[SPRITE_COUSSINET].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsEca[COUSSINET].spriteSorts[SPRITE_COUSSINET].spriteX = 576;
    dofus->tabSortsEca[COUSSINET].spriteSorts[SPRITE_COUSSINET].spriteY = 282;
    dofus->tabSortsEca[COUSSINET].spriteSorts[SPRITE_COUSSINET].spriteLargeur = 55;
    dofus->tabSortsEca[COUSSINET].spriteSorts[SPRITE_COUSSINET].spriteHauteur = 55;
    dofus->tabSortsEca[COUSSINET].spriteSorts[SPRITE_COUSSINET].screenXFixe = 560;
    dofus->tabSortsEca[COUSSINET].spriteSorts[SPRITE_COUSSINET].screenYFixe = 630;

    dofus->tabSortsEca[LANGUE].spriteSorts[SPRITE_LANGUE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsEca[LANGUE].spriteSorts[SPRITE_LANGUE].spriteX = 646;
    dofus->tabSortsEca[LANGUE].spriteSorts[SPRITE_LANGUE].spriteY = 283;
    dofus->tabSortsEca[LANGUE].spriteSorts[SPRITE_LANGUE].spriteLargeur = 55;
    dofus->tabSortsEca[LANGUE].spriteSorts[SPRITE_LANGUE].spriteHauteur = 55;
    dofus->tabSortsEca[LANGUE].spriteSorts[SPRITE_LANGUE].screenXFixe = 620;
    dofus->tabSortsEca[LANGUE].spriteSorts[SPRITE_LANGUE].screenYFixe = 630;

    dofus->tabSortsEca[BOND_FELIN].spriteSorts[SPRITE_BOND_FELIN].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsEca[BOND_FELIN].spriteSorts[SPRITE_BOND_FELIN].spriteX = 716;
    dofus->tabSortsEca[BOND_FELIN].spriteSorts[SPRITE_BOND_FELIN].spriteY = 283;
    dofus->tabSortsEca[BOND_FELIN].spriteSorts[SPRITE_BOND_FELIN].spriteLargeur = 55;
    dofus->tabSortsEca[BOND_FELIN].spriteSorts[SPRITE_BOND_FELIN].spriteHauteur = 55;
    dofus->tabSortsEca[BOND_FELIN].spriteSorts[SPRITE_BOND_FELIN].screenXFixe = 680;
    dofus->tabSortsEca[BOND_FELIN].spriteSorts[SPRITE_BOND_FELIN].screenYFixe = 630;

    dofus->tabSortsEca[ODORAT].spriteSorts[SPRITE_ODORAT].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsEca[ODORAT].spriteSorts[SPRITE_ODORAT].spriteX = 786;
    dofus->tabSortsEca[ODORAT].spriteSorts[SPRITE_ODORAT].spriteY = 283;
    dofus->tabSortsEca[ODORAT].spriteSorts[SPRITE_ODORAT].spriteLargeur = 55;
    dofus->tabSortsEca[ODORAT].spriteSorts[SPRITE_ODORAT].spriteHauteur = 55;
    dofus->tabSortsEca[ODORAT].spriteSorts[SPRITE_ODORAT].screenXFixe = 740;
    dofus->tabSortsEca[ODORAT].spriteSorts[SPRITE_ODORAT].screenYFixe = 630;

    dofus->tabSortsEca[CONTRECOUP].spriteSorts[SPRITE_CONTRECOUP].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsEca[CONTRECOUP].spriteSorts[SPRITE_CONTRECOUP].spriteX = 856;
    dofus->tabSortsEca[CONTRECOUP].spriteSorts[SPRITE_CONTRECOUP].spriteY = 283;
    dofus->tabSortsEca[CONTRECOUP].spriteSorts[SPRITE_CONTRECOUP].spriteLargeur = 55;
    dofus->tabSortsEca[CONTRECOUP].spriteSorts[SPRITE_CONTRECOUP].spriteHauteur = 55;
    dofus->tabSortsEca[CONTRECOUP].spriteSorts[SPRITE_CONTRECOUP].screenXFixe = 800;
    dofus->tabSortsEca[CONTRECOUP].spriteSorts[SPRITE_CONTRECOUP].screenYFixe = 630;
}
void initPositionSortMouvEca(Dofus* dofus){
    dofus->tabSortsEca[TOPKAJ].spriteSorts[SPRITE_TOPKAJ].screenX = 500;
    dofus->tabSortsEca[TOPKAJ].spriteSorts[SPRITE_TOPKAJ].screenY = 630;

    dofus->tabSortsEca[COUSSINET].spriteSorts[SPRITE_COUSSINET].screenX = 560;
    dofus->tabSortsEca[COUSSINET].spriteSorts[SPRITE_COUSSINET].screenY = 630;

    dofus->tabSortsEca[LANGUE].spriteSorts[SPRITE_LANGUE].screenX = 620;
    dofus->tabSortsEca[LANGUE].spriteSorts[SPRITE_LANGUE].screenY = 630;

    dofus->tabSortsEca[BOND_FELIN].spriteSorts[SPRITE_BOND_FELIN].screenX = 680;
    dofus->tabSortsEca[BOND_FELIN].spriteSorts[SPRITE_BOND_FELIN].screenY = 630;

    dofus->tabSortsEca[ODORAT].spriteSorts[SPRITE_ODORAT].screenX = 740;
    dofus->tabSortsEca[ODORAT].spriteSorts[SPRITE_ODORAT].screenY = 630;

    dofus->tabSortsEca[CONTRECOUP].spriteSorts[SPRITE_CONTRECOUP].screenX = 800;
    dofus->tabSortsEca[CONTRECOUP].spriteSorts[SPRITE_CONTRECOUP].screenY = 630;

}
void initBitmapSortOsa(Dofus* dofus){
    dofus->tabSortsOsa[DEVORANTE].spriteSorts[SPRITE_DEVORANTE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsOsa[DEVORANTE].spriteSorts[SPRITE_DEVORANTE].spriteX = 37;
    dofus->tabSortsOsa[DEVORANTE].spriteSorts[SPRITE_DEVORANTE].spriteY = 291;
    dofus->tabSortsOsa[DEVORANTE].spriteSorts[SPRITE_DEVORANTE].spriteLargeur = 55;
    dofus->tabSortsOsa[DEVORANTE].spriteSorts[SPRITE_DEVORANTE].spriteHauteur = 55;
    dofus->tabSortsOsa[DEVORANTE].spriteSorts[SPRITE_DEVORANTE].screenXFixe = 500;
    dofus->tabSortsOsa[DEVORANTE].spriteSorts[SPRITE_DEVORANTE].screenYFixe = 630;

    dofus->tabSortsOsa[MAGIQUE].spriteSorts[SPRITE_MAGIQUE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsOsa[MAGIQUE].spriteSorts[SPRITE_MAGIQUE].spriteX = 107;
    dofus->tabSortsOsa[MAGIQUE].spriteSorts[SPRITE_MAGIQUE].spriteY = 291;
    dofus->tabSortsOsa[MAGIQUE].spriteSorts[SPRITE_MAGIQUE].spriteLargeur = 55;
    dofus->tabSortsOsa[MAGIQUE].spriteSorts[SPRITE_MAGIQUE].spriteHauteur = 55;
    dofus->tabSortsOsa[MAGIQUE].spriteSorts[SPRITE_MAGIQUE].screenXFixe = 560;
    dofus->tabSortsOsa[MAGIQUE].spriteSorts[SPRITE_MAGIQUE].screenYFixe = 630;

    dofus->tabSortsOsa[RECUL].spriteSorts[SPRITE_RECUL].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsOsa[RECUL].spriteSorts[SPRITE_RECUL].spriteX = 177;
    dofus->tabSortsOsa[RECUL].spriteSorts[SPRITE_RECUL].spriteY = 291;
    dofus->tabSortsOsa[RECUL].spriteSorts[SPRITE_RECUL].spriteLargeur = 55;
    dofus->tabSortsOsa[RECUL].spriteSorts[SPRITE_RECUL].spriteHauteur = 55;
    dofus->tabSortsOsa[RECUL].spriteSorts[SPRITE_RECUL].screenXFixe = 620;
    dofus->tabSortsOsa[RECUL].spriteSorts[SPRITE_RECUL].screenYFixe = 630;

    dofus->tabSortsOsa[HARCELANTE].spriteSorts[SPRITE_HARCELANTE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsOsa[HARCELANTE].spriteSorts[SPRITE_HARCELANTE].spriteX = 247;
    dofus->tabSortsOsa[HARCELANTE].spriteSorts[SPRITE_HARCELANTE].spriteY = 291;
    dofus->tabSortsOsa[HARCELANTE].spriteSorts[SPRITE_HARCELANTE].spriteLargeur = 55;
    dofus->tabSortsOsa[HARCELANTE].spriteSorts[SPRITE_HARCELANTE].spriteHauteur = 55;
    dofus->tabSortsOsa[HARCELANTE].spriteSorts[SPRITE_HARCELANTE].screenXFixe = 680;
    dofus->tabSortsOsa[HARCELANTE].spriteSorts[SPRITE_HARCELANTE].screenYFixe = 630;

    dofus->tabSortsOsa[DISPE].spriteSorts[SPRITE_DISPE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsOsa[DISPE].spriteSorts[SPRITE_DISPE].spriteX = 317;
    dofus->tabSortsOsa[DISPE].spriteSorts[SPRITE_DISPE].spriteY = 291;
    dofus->tabSortsOsa[DISPE].spriteSorts[SPRITE_DISPE].spriteLargeur = 55;
    dofus->tabSortsOsa[DISPE].spriteSorts[SPRITE_DISPE].spriteHauteur = 55;
    dofus->tabSortsOsa[DISPE].spriteSorts[SPRITE_DISPE].screenXFixe = 740;
    dofus->tabSortsOsa[DISPE].spriteSorts[SPRITE_DISPE].screenYFixe = 630;

    dofus->tabSortsOsa[CINGLANTE].spriteSorts[SPRITE_CINGLANTE].image = &dofus->tabBitmap[BITMAP_SORTS];
    dofus->tabSortsOsa[CINGLANTE].spriteSorts[SPRITE_CINGLANTE].spriteX = 387;
    dofus->tabSortsOsa[CINGLANTE].spriteSorts[SPRITE_CINGLANTE].spriteY = 291;
    dofus->tabSortsOsa[CINGLANTE].spriteSorts[SPRITE_CINGLANTE].spriteLargeur = 55;
    dofus->tabSortsOsa[CINGLANTE].spriteSorts[SPRITE_CINGLANTE].spriteHauteur = 55;
    dofus->tabSortsOsa[CINGLANTE].spriteSorts[SPRITE_CINGLANTE].screenXFixe = 800;
    dofus->tabSortsOsa[CINGLANTE].spriteSorts[SPRITE_CINGLANTE].screenYFixe = 630;
}
void initPositionSortMouvOsa(Dofus* dofus){
    dofus->tabSortsOsa[DEVORANTE].spriteSorts[SPRITE_DEVORANTE].screenX = 500;
    dofus->tabSortsOsa[DEVORANTE].spriteSorts[SPRITE_DEVORANTE].screenY = 630;

    dofus->tabSortsOsa[MAGIQUE].spriteSorts[SPRITE_MAGIQUE].screenX = 560;
    dofus->tabSortsOsa[MAGIQUE].spriteSorts[SPRITE_MAGIQUE].screenY = 630;

    dofus->tabSortsOsa[RECUL].spriteSorts[SPRITE_RECUL].screenX = 620;
    dofus->tabSortsOsa[RECUL].spriteSorts[SPRITE_RECUL].screenY = 630;

    dofus->tabSortsOsa[HARCELANTE].spriteSorts[SPRITE_HARCELANTE].screenX = 680;
    dofus->tabSortsOsa[HARCELANTE].spriteSorts[SPRITE_HARCELANTE].screenY = 630;

    dofus->tabSortsOsa[DISPE].spriteSorts[SPRITE_DISPE].screenX = 740;
    dofus->tabSortsOsa[DISPE].spriteSorts[SPRITE_DISPE].screenY = 630;

    dofus->tabSortsOsa[CINGLANTE].spriteSorts[SPRITE_CINGLANTE].screenX = 800;
    dofus->tabSortsOsa[CINGLANTE].spriteSorts[SPRITE_CINGLANTE].screenY = 630;
}


void initBitmapSorts(Dofus* dofus){

    initBitmapSortIop(dofus);
    initPositionSortMouvIop(dofus);

    initBitmapSortFeca(dofus);
    initPositionSortMouvFeca(dofus);

    initBitmapSortEca(dofus);
    initPositionSortMouvEca(dofus);

    initBitmapSortOsa(dofus);
    initPositionSortMouvOsa(dofus);

}


void initSortIop(Dofus* dofus){

    strcpy(dofus->tabSortsIop[PRESSION].strNomSort, "PRESSION");
    strcpy(dofus->tabSortsIop[CONCENTRATION].strNomSort, "CONCENTRATION");
    strcpy(dofus->tabSortsIop[EPEE].strNomSort, "EPEE DE IOP");
    strcpy(dofus->tabSortsIop[INTIMIDATION].strNomSort, "INTIMIDATION");
    strcpy(dofus->tabSortsIop[SOUFFLE].strNomSort, "SOUFFLE");
    strcpy(dofus->tabSortsIop[BOND].strNomSort, "BOND");

    dofus->tabSortsIop[PRESSION].nbPA = 3;
    dofus->tabSortsIop[CONCENTRATION].nbPA = 2;
    dofus->tabSortsIop[EPEE].nbPA = 3;
    dofus->tabSortsIop[INTIMIDATION].nbPA = 2;
    dofus->tabSortsIop[SOUFFLE].nbPA = 1;
    dofus->tabSortsIop[BOND].nbPA = 2;

    dofus->tabSortsIop[PRESSION].nbDMG = 100;
    dofus->tabSortsIop[CONCENTRATION].nbDMG = 150;
    dofus->tabSortsIop[EPEE].nbDMG = 75;
    dofus->tabSortsIop[INTIMIDATION].nbDMG = 50;
    dofus->tabSortsIop[SOUFFLE].nbDMG = 0;
    dofus->tabSortsIop[BOND].nbDMG = 0;

    dofus->tabSortsIop[PRESSION].porteeMin = 1;
    dofus->tabSortsIop[CONCENTRATION].porteeMin = 1;
    dofus->tabSortsIop[EPEE].porteeMin = 1;
    dofus->tabSortsIop[INTIMIDATION].porteeMin = 1;
    dofus->tabSortsIop[SOUFFLE].porteeMin = 1;
    dofus->tabSortsIop[BOND].porteeMin = 1;

    dofus->tabSortsIop[PRESSION].porteeMax = 3;
    dofus->tabSortsIop[CONCENTRATION].porteeMax = 1;
    dofus->tabSortsIop[EPEE].porteeMax = 4;
    dofus->tabSortsIop[INTIMIDATION].porteeMax = 2;
    dofus->tabSortsIop[SOUFFLE].porteeMax = 5;
    dofus->tabSortsIop[BOND].porteeMax = 4;

    dofus->tabSortsIop[PRESSION].echecCritique = 10;
    dofus->tabSortsIop[CONCENTRATION].echecCritique = 10;
    dofus->tabSortsIop[EPEE].echecCritique = 25;
    dofus->tabSortsIop[INTIMIDATION].echecCritique = 10;
    dofus->tabSortsIop[SOUFFLE].echecCritique = 5;
    dofus->tabSortsIop[BOND].echecCritique = 5;

    for (int i = 0; i < NB_SORTS_IOP; ++i) {
        dofus->tabSortsIop[i].sortSelectionne = false;
        dofus->tabSortsIop[i].sortLance = false;
    }

}
void initSortFeca(Dofus* dofus){

    strcpy(dofus->tabSortsFeca[GLYPHE].strNomSort, "GLYPHE");
    strcpy(dofus->tabSortsFeca[TENSION].strNomSort, "TENSION");
    strcpy(dofus->tabSortsFeca[BULLE].strNomSort, "BULLE");
    strcpy(dofus->tabSortsFeca[NUAGE].strNomSort, "NUAGE");
    strcpy(dofus->tabSortsFeca[AVEUGLEMENT].strNomSort, "AVEUGLEMENT");
    strcpy(dofus->tabSortsFeca[BASTION].strNomSort, "BASTION");

    dofus->tabSortsFeca[GLYPHE].nbPA = 2;
    dofus->tabSortsFeca[TENSION].nbPA = 2;
    dofus->tabSortsFeca[BULLE].nbPA = 3;
    dofus->tabSortsFeca[NUAGE].nbPA = 3;
    dofus->tabSortsFeca[AVEUGLEMENT].nbPA = 2;
    dofus->tabSortsFeca[BASTION].nbPA = 1;

    dofus->tabSortsFeca[GLYPHE].nbDMG = 90;
    dofus->tabSortsFeca[TENSION].nbDMG = 90;
    dofus->tabSortsFeca[BULLE].nbDMG = 100;
    dofus->tabSortsFeca[NUAGE].nbDMG = 70;
    dofus->tabSortsFeca[AVEUGLEMENT].nbDMG = 40;
    dofus->tabSortsFeca[BASTION].nbDMG = 0;

    dofus->tabSortsFeca[GLYPHE].porteeMin = 1;
    dofus->tabSortsFeca[TENSION].porteeMin = 1;
    dofus->tabSortsFeca[BULLE].porteeMin = 3;
    dofus->tabSortsFeca[NUAGE].porteeMin = 1;
    dofus->tabSortsFeca[AVEUGLEMENT].porteeMin = 3;
    dofus->tabSortsFeca[BASTION].porteeMin = 0;

    dofus->tabSortsFeca[GLYPHE].porteeMax = 5;
    dofus->tabSortsFeca[TENSION].porteeMax = 5;
    dofus->tabSortsFeca[BULLE].porteeMax = 6;
    dofus->tabSortsFeca[NUAGE].porteeMax = 5;
    dofus->tabSortsFeca[AVEUGLEMENT].porteeMax = 5;
    dofus->tabSortsFeca[BASTION].porteeMax = 0;

    dofus->tabSortsFeca[GLYPHE].echecCritique = 10;
    dofus->tabSortsFeca[TENSION].echecCritique = 10;
    dofus->tabSortsFeca[BULLE].echecCritique = 10;
    dofus->tabSortsFeca[NUAGE].echecCritique = 10;
    dofus->tabSortsFeca[AVEUGLEMENT].echecCritique = 10;
    dofus->tabSortsFeca[BASTION].echecCritique = 5;

    for (int i = 0; i < NB_SORTS_FECA; ++i) {
        dofus->tabSortsFeca[i].sortSelectionne = false;
        dofus->tabSortsFeca[i].sortLance = false;
    }

}
void initSortEca(Dofus* dofus){

    strcpy(dofus->tabSortsEca[TOPKAJ].strNomSort, "TOPKAJ");
    strcpy(dofus->tabSortsEca[COUSSINET].strNomSort, "COUSSINET");
    strcpy(dofus->tabSortsEca[LANGUE].strNomSort, "LANGUE");
    strcpy(dofus->tabSortsEca[BOND_FELIN].strNomSort, "BOND FELIN");
    strcpy(dofus->tabSortsEca[ODORAT].strNomSort, "ODORAT");
    strcpy(dofus->tabSortsEca[CONTRECOUP].strNomSort, "CONTRECOUP");

    dofus->tabSortsEca[TOPKAJ].nbPA = 2;
    dofus->tabSortsEca[COUSSINET].nbPA = 2;
    dofus->tabSortsEca[LANGUE].nbPA = 2;
    dofus->tabSortsEca[BOND_FELIN].nbPA = 1;
    dofus->tabSortsEca[ODORAT].nbPA = 3;
    dofus->tabSortsEca[CONTRECOUP].nbPA = 2;

    dofus->tabSortsEca[TOPKAJ].nbDMG = 125;
    dofus->tabSortsEca[COUSSINET].nbDMG = 75;
    dofus->tabSortsEca[LANGUE].nbDMG = 100;
    dofus->tabSortsEca[BOND_FELIN].nbDMG = 0;
    dofus->tabSortsEca[ODORAT].nbDMG = 0;
    dofus->tabSortsEca[CONTRECOUP].nbDMG = 0;

    dofus->tabSortsEca[TOPKAJ].porteeMin = 1;
    dofus->tabSortsEca[COUSSINET].porteeMin = 1;
    dofus->tabSortsEca[LANGUE].porteeMin = 3;
    dofus->tabSortsEca[BOND_FELIN].porteeMin = 1;
    dofus->tabSortsEca[ODORAT].porteeMin = 0;
    dofus->tabSortsEca[CONTRECOUP].porteeMin = 0;

    dofus->tabSortsEca[TOPKAJ].porteeMax = 5;
    dofus->tabSortsEca[COUSSINET].porteeMax = 5;
    dofus->tabSortsEca[LANGUE].porteeMax = 6;
    dofus->tabSortsEca[BOND_FELIN].porteeMax = 1;
    dofus->tabSortsEca[ODORAT].porteeMax = 0;
    dofus->tabSortsEca[CONTRECOUP].porteeMax = 0;

    dofus->tabSortsEca[TOPKAJ].echecCritique = 15;
    dofus->tabSortsEca[COUSSINET].echecCritique = 25;
    dofus->tabSortsEca[LANGUE].echecCritique = 15;
    dofus->tabSortsEca[BOND_FELIN].echecCritique = 5;
    dofus->tabSortsEca[ODORAT].echecCritique = 5;
    dofus->tabSortsEca[CONTRECOUP].echecCritique = 5;

    for (int i = 0; i < NB_SORTS_ECA; ++i) {
        dofus->tabSortsEca[i].sortSelectionne = false;
        dofus->tabSortsEca[i].sortLance = false;
    }
}
void initSortOsa(Dofus* dofus){

    strcpy(dofus->tabSortsOsa[DEVORANTE].strNomSort, "DEVORANTE");
    strcpy(dofus->tabSortsOsa[MAGIQUE].strNomSort, "MAGIQUE");
    strcpy(dofus->tabSortsOsa[RECUL].strNomSort, "RECUL");
    strcpy(dofus->tabSortsOsa[HARCELANTE].strNomSort, "HARCELANTE");
    strcpy(dofus->tabSortsOsa[DISPE].strNomSort, "DISPERSION");
    strcpy(dofus->tabSortsOsa[CINGLANTE].strNomSort, "CONGLANTE");

    dofus->tabSortsOsa[DEVORANTE].nbPA = 3;
    dofus->tabSortsOsa[MAGIQUE].nbPA = 2;
    dofus->tabSortsOsa[RECUL].nbPA = 3;
    dofus->tabSortsOsa[HARCELANTE].nbPA = 2;
    dofus->tabSortsOsa[DISPE].nbPA = 2;
    dofus->tabSortsOsa[CINGLANTE].nbPA = 2;

    dofus->tabSortsOsa[DEVORANTE].nbDMG = 75;
    dofus->tabSortsOsa[MAGIQUE].nbDMG = 100;
    dofus->tabSortsOsa[RECUL].nbDMG = 100;
    dofus->tabSortsOsa[HARCELANTE].nbDMG = 50;
    dofus->tabSortsOsa[DISPE].nbDMG = 0;
    dofus->tabSortsOsa[CINGLANTE].nbDMG = 0;

    dofus->tabSortsOsa[DEVORANTE].porteeMin = 1;
    dofus->tabSortsOsa[MAGIQUE].porteeMin = 1;
    dofus->tabSortsOsa[RECUL].porteeMin = 1;
    dofus->tabSortsOsa[HARCELANTE].porteeMin = 1;
    dofus->tabSortsOsa[DISPE].porteeMin = 0;
    dofus->tabSortsOsa[CINGLANTE].porteeMin = 1;

    dofus->tabSortsOsa[DEVORANTE].porteeMax = 5;
    dofus->tabSortsOsa[MAGIQUE].porteeMax = 7;
    dofus->tabSortsOsa[RECUL].porteeMax = 6;
    dofus->tabSortsOsa[HARCELANTE].porteeMax = 5;
    dofus->tabSortsOsa[DISPE].porteeMax = 0;
    dofus->tabSortsOsa[CINGLANTE].porteeMax = 6;

    dofus->tabSortsOsa[DEVORANTE].echecCritique = 20;
    dofus->tabSortsOsa[MAGIQUE].echecCritique = 10;
    dofus->tabSortsOsa[RECUL].echecCritique = 20;
    dofus->tabSortsOsa[HARCELANTE].echecCritique = 20;
    dofus->tabSortsOsa[DISPE].echecCritique = 5;
    dofus->tabSortsOsa[CINGLANTE].echecCritique = 5;

    for (int i = 0; i < NB_SORTS_OSA; ++i) {
        dofus->tabSortsOsa[i].sortSelectionne = false;
        dofus->tabSortsOsa[i].sortLance = false;
    }
}

void initSorts(Dofus* dofus){

    initSortIop(dofus);
    initSortFeca(dofus);
    initSortEca(dofus);
    initSortOsa(dofus);

}

void initCaseLancerSort(Dofus* dofus){
    for (int i = 0; i < NBCELLULEX; ++i) {
        for (int j = 0; j < NBCELLULEY; ++j) {
            dofus->map.mapTile[j][i].lancerLeSort = false;
        }
    }
}

void afficherSortIop(Dofus* dofus){
    for (int i = 0; i < NB_SORTS_IOP; ++i) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_SORTS],dofus->tabSortsIop[i].spriteSorts[i].spriteX,dofus->tabSortsIop[i].spriteSorts[i].spriteY,dofus->tabSortsIop[i].spriteSorts[i].spriteLargeur,dofus->tabSortsIop[i].spriteSorts[i].spriteHauteur,dofus->tabSortsIop[i].spriteSorts[i].screenXFixe,dofus->tabSortsIop[i].spriteSorts[i].screenYFixe,0);
        if (dofus->tabSortsIop[i].sortSelectionne == true){
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_SORTS],dofus->tabSortsIop[i].spriteSorts[i].spriteX,dofus->tabSortsIop[i].spriteSorts[i].spriteY,dofus->tabSortsIop[i].spriteSorts[i].spriteLargeur,dofus->tabSortsIop[i].spriteSorts[i].spriteHauteur,dofus->tabSortsIop[i].spriteSorts[i].screenX,dofus->tabSortsIop[i].spriteSorts[i].screenY,0);

        }
    }
}
void afficherSortFeca(Dofus* dofus){
    int j = 6;
    for (int i = 0; i < NB_SORTS_FECA; ++i) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_SORTS],dofus->tabSortsFeca[i].spriteSorts[j].spriteX,dofus->tabSortsFeca[i].spriteSorts[j].spriteY,dofus->tabSortsFeca[i].spriteSorts[j].spriteLargeur,dofus->tabSortsFeca[i].spriteSorts[j].spriteHauteur,dofus->tabSortsFeca[i].spriteSorts[j].screenXFixe,dofus->tabSortsFeca[i].spriteSorts[j].screenYFixe,0);
        if (dofus->tabSortsFeca[i].sortSelectionne == true){
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_SORTS],dofus->tabSortsFeca[i].spriteSorts[j].spriteX,dofus->tabSortsFeca[i].spriteSorts[j].spriteY,dofus->tabSortsFeca[i].spriteSorts[j].spriteLargeur,dofus->tabSortsFeca[i].spriteSorts[j].spriteHauteur,dofus->tabSortsFeca[i].spriteSorts[j].screenX,dofus->tabSortsFeca[i].spriteSorts[j].screenY,0);
        }
        j++;
    }
}
void afficherSortOsa(Dofus* dofus){
    int j = 12;
    for (int i = 0; i < NB_SORTS_OSA; ++i) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_SORTS],dofus->tabSortsOsa[i].spriteSorts[j].spriteX,dofus->tabSortsOsa[i].spriteSorts[j].spriteY,dofus->tabSortsOsa[i].spriteSorts[j].spriteLargeur,dofus->tabSortsOsa[i].spriteSorts[j].spriteHauteur,dofus->tabSortsOsa[i].spriteSorts[j].screenXFixe,dofus->tabSortsOsa[i].spriteSorts[j].screenYFixe,0);
        if (dofus->tabSortsOsa[i].sortSelectionne == true){
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_SORTS],dofus->tabSortsOsa[i].spriteSorts[j].spriteX,dofus->tabSortsOsa[i].spriteSorts[j].spriteY,dofus->tabSortsOsa[i].spriteSorts[j].spriteLargeur,dofus->tabSortsOsa[i].spriteSorts[j].spriteHauteur,dofus->tabSortsOsa[i].spriteSorts[j].screenX,dofus->tabSortsOsa[i].spriteSorts[j].screenY,0);
        }
        j++;
    }
}
void afficherSortEca(Dofus* dofus){
    int j = 18;
    for (int i = 0; i < NB_SORTS_ECA; ++i) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_SORTS],dofus->tabSortsEca[i].spriteSorts[j].spriteX,dofus->tabSortsEca[i].spriteSorts[j].spriteY,dofus->tabSortsEca[i].spriteSorts[j].spriteLargeur,dofus->tabSortsEca[i].spriteSorts[j].spriteHauteur,dofus->tabSortsEca[i].spriteSorts[j].screenXFixe,dofus->tabSortsEca[i].spriteSorts[j].screenYFixe,0);
        if (dofus->tabSortsEca[i].sortSelectionne == true){
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_SORTS],dofus->tabSortsEca[i].spriteSorts[j].spriteX,dofus->tabSortsEca[i].spriteSorts[j].spriteY,dofus->tabSortsEca[i].spriteSorts[j].spriteLargeur,dofus->tabSortsEca[i].spriteSorts[j].spriteHauteur,dofus->tabSortsEca[i].spriteSorts[j].screenX,dofus->tabSortsEca[i].spriteSorts[j].screenY,0);
        }
        j++;
    }
}

void zoneSortIop(Dofus* dofus, int j, int i){
    if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleX == i && dofus->interactionExterieure.mouse.celluleIso.celluleY == j){
        if (!dofus->map.mapTile[j][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i - 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 2].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 2].coordsXY.screenY, 0);
        }
    }else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && dofus->interactionExterieure.mouse.celluleIso.celluleX == i && dofus->interactionExterieure.mouse.celluleIso.celluleY == j) {
        if (!dofus->map.mapTile[j - 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 2][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 2][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i].coordsXY.screenY, 0);
        }
    }
}
bool ennemieDansZoneSortIop(Dofus* dofus,Joueurs* temp){
    if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && temp->celluleActuelle.celluleX >= dofus->interactionExterieure.mouse.celluleIso.celluleX - 2 && temp->celluleActuelle.celluleX <= dofus->interactionExterieure.mouse.celluleIso.celluleX + 2){
        return true;
    }
    else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && temp->celluleActuelle.celluleY >= dofus->interactionExterieure.mouse.celluleIso.celluleY - 2 && temp->celluleActuelle.celluleY <= dofus->interactionExterieure.mouse.celluleIso.celluleY + 2){
        return true;
    } else{
        return false;
    }
}
void zoneSortOsa(Dofus* dofus, int j, int i){
    if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleX == i && dofus->interactionExterieure.mouse.celluleIso.celluleY == j){
        if (!dofus->map.mapTile[j][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i].coordsXY.screenX,
                           dofus->map.mapTile[j][i].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i - 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 2].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 2].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j - 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 2][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 2][i].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j + 1][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 1][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 1][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i + 1].coordsXY.screenY, 0);
        }

    }else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && dofus->interactionExterieure.mouse.celluleIso.celluleX == i && dofus->interactionExterieure.mouse.celluleIso.celluleY == j) {
        if (!dofus->map.mapTile[j][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i].coordsXY.screenX,
                           dofus->map.mapTile[j][i].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i - 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 2].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 2].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j - 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 2][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 2][i].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j + 1][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 1][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 1][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i + 1].coordsXY.screenY, 0);
        }
    }
}
bool ennemieDansZoneSortOsa(Dofus* dofus,Joueurs* temp){
    if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX ){
        if (temp->celluleActuelle.celluleX >= dofus->interactionExterieure.mouse.celluleIso.celluleX - 2 && temp->celluleActuelle.celluleX <= dofus->interactionExterieure.mouse.celluleIso.celluleX + 2 && temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY){
            return true;
        }
        else if (temp->celluleActuelle.celluleX  >= dofus->interactionExterieure.mouse.celluleIso.celluleX - 1 && temp->celluleActuelle.celluleX <= dofus->interactionExterieure.mouse.celluleIso.celluleX + 1 && (temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY - 1 || temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY + 1)){
            return true;
        }else if (temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && (temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY + 2 || temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY - 2)){
            return true;
        }else{
            return false;
        }
    }else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY ){
        if (temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && temp->celluleActuelle.celluleY >= dofus->interactionExterieure.mouse.celluleIso.celluleY - 2 && temp->celluleActuelle.celluleY <= dofus->interactionExterieure.mouse.celluleIso.celluleY + 2){
            return true;
        }else if (temp->celluleActuelle.celluleY  >= dofus->interactionExterieure.mouse.celluleIso.celluleY - 1 && temp->celluleActuelle.celluleY <= dofus->interactionExterieure.mouse.celluleIso.celluleY + 1 && (temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX - 1 || temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX + 1)){
            return true;
        }else if (temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && (temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX + 2 || temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX - 2)){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}
void zoneSortEca(Dofus* dofus, int j, int i){
    if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleX == i && dofus->interactionExterieure.mouse.celluleIso.celluleY == j){
        if (!dofus->map.mapTile[j][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i - 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 2].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 2].coordsXY.screenY, 0);
        }
    }else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && dofus->interactionExterieure.mouse.celluleIso.celluleX == i && dofus->interactionExterieure.mouse.celluleIso.celluleY == j) {
        if (!dofus->map.mapTile[j - 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 2][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 2][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i].coordsXY.screenY, 0);
        }
    }
}
bool ennemieDansZoneSortEca(Dofus* dofus,Joueurs* temp){
    if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && temp->celluleActuelle.celluleX >= dofus->interactionExterieure.mouse.celluleIso.celluleX - 2 && temp->celluleActuelle.celluleX <= dofus->interactionExterieure.mouse.celluleIso.celluleX + 2){
        return true;
    }
    else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && temp->celluleActuelle.celluleY >= dofus->interactionExterieure.mouse.celluleIso.celluleY - 2 && temp->celluleActuelle.celluleY <= dofus->interactionExterieure.mouse.celluleIso.celluleY + 2){
        return true;
    } else{
        return false;
    }
}
void zoneSortFeca(Dofus* dofus, int j, int i){
    if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleX == i && dofus->interactionExterieure.mouse.celluleIso.celluleY == j){
        if (!dofus->map.mapTile[j][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i].coordsXY.screenX,
                           dofus->map.mapTile[j][i].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i - 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 2].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 2].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j - 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 2][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 2][i].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j + 1][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 1][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 1][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i + 1].coordsXY.screenY, 0);
        }

    }else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && dofus->interactionExterieure.mouse.celluleIso.celluleX == i && dofus->interactionExterieure.mouse.celluleIso.celluleY == j) {
        if (!dofus->map.mapTile[j][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i].coordsXY.screenX,
                           dofus->map.mapTile[j][i].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i - 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i - 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i - 2].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j][i + 2].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j][i + 2].coordsXY.screenX,
                           dofus->map.mapTile[j][i + 2].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j - 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j + 2][i].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 2][i].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 2][i].coordsXY.screenX,
                           dofus->map.mapTile[j - 2][i].coordsXY.screenY, 0);
        }

        if (!dofus->map.mapTile[j + 1][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i + 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 1][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j + 1][i - 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j + 1][i - 1].coordsXY.screenX,
                           dofus->map.mapTile[j + 1][i - 1].coordsXY.screenY, 0);
        }
        if (!dofus->map.mapTile[j - 1][i + 1].blocPlein) {
            al_draw_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT], dofus->map.mapTile[j - 1][i + 1].coordsXY.screenX,
                           dofus->map.mapTile[j - 1][i + 1].coordsXY.screenY, 0);
        }
    }
}
bool ennemieDansZoneSortFeca(Dofus* dofus,Joueurs* temp){
    if (dofus->joueurActif->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX ){
        if (temp->celluleActuelle.celluleX >= dofus->interactionExterieure.mouse.celluleIso.celluleX - 2 && temp->celluleActuelle.celluleX <= dofus->interactionExterieure.mouse.celluleIso.celluleX + 2 && temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY){
            return true;
        }
        else if (temp->celluleActuelle.celluleX  >= dofus->interactionExterieure.mouse.celluleIso.celluleX - 1 && temp->celluleActuelle.celluleX <= dofus->interactionExterieure.mouse.celluleIso.celluleX + 1 && (temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY - 1 || temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY + 1)){
            return true;
        }else if (temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && (temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY + 2 || temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY - 2)){
            return true;
        }else{
            return false;
        }
    }else if (dofus->joueurActif->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY ){
        if (temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX && temp->celluleActuelle.celluleY >= dofus->interactionExterieure.mouse.celluleIso.celluleY - 2 && temp->celluleActuelle.celluleY <= dofus->interactionExterieure.mouse.celluleIso.celluleY + 2){
            return true;
        }else if (temp->celluleActuelle.celluleY  >= dofus->interactionExterieure.mouse.celluleIso.celluleY - 1 && temp->celluleActuelle.celluleY <= dofus->interactionExterieure.mouse.celluleIso.celluleY + 1 && (temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX - 1 || temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX + 1)){
            return true;
        }else if (temp->celluleActuelle.celluleY == dofus->interactionExterieure.mouse.celluleIso.celluleY && (temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX + 2 || temp->celluleActuelle.celluleX == dofus->interactionExterieure.mouse.celluleIso.celluleX - 2)){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

void afficherPorteeSortIop(Dofus* dofus){
    if (dofus->sortEnMain == true){
        for (int k = 0; k < NB_SORTS_IOP; ++k) {
            if (dofus->tabSortsIop[k].sortSelectionne == true){
                for (int i = 0; i < NBCELLULEX ; ++i) {
                    for (int j = 0; j < NBCELLULEY; ++j) {
                        if (dofus->map.mapTile[j][i].blocPlein != true){
                            if (k == EPEE){
                                if (dofus->tabSortsIop[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsIop[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && (j == dofus->joueurActif->celluleActuelle.celluleY || i == dofus->joueurActif->celluleActuelle.celluleX)){
                                    al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                    dofus->map.mapTile[j][i].lancerLeSort = true;
                                    zoneSortIop(dofus, j, i);
                                }
                            } else if (k == INTIMIDATION){
                                if (dofus->tabSortsIop[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsIop[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && (j == dofus->joueurActif->celluleActuelle.celluleY || i == dofus->joueurActif->celluleActuelle.celluleX)){
                                    al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                    dofus->map.mapTile[j][i].lancerLeSort = true;
                                }
                            }else if (k == SOUFFLE){
                                if (dofus->tabSortsIop[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsIop[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && (j == dofus->joueurActif->celluleActuelle.celluleY || i == dofus->joueurActif->celluleActuelle.celluleX)){
                                    al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                    dofus->map.mapTile[j][i].lancerLeSort = true;
                                }
                            } else if (dofus->tabSortsIop[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsIop[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j))){
                                al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                dofus->map.mapTile[j][i].lancerLeSort = true;
                            }
                        }
                    }
                }
            }
        }
    }
}
void afficherPorteeSortFeca(Dofus* dofus){
    if (dofus->sortEnMain == true){
        for (int k = 0; k < NB_SORTS_FECA; ++k) {
            if (dofus->tabSortsFeca[k].sortSelectionne == true){
                for (int i = 0; i < NBCELLULEX ; ++i) {
                    for (int j = 0; j < NBCELLULEY; ++j) {
                        if (dofus->map.mapTile[j][i].blocPlein != true){
                            if (k == NUAGE){
                                if (dofus->tabSortsFeca[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsFeca[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && (j == dofus->joueurActif->celluleActuelle.celluleY || i == dofus->joueurActif->celluleActuelle.celluleX)){
                                    al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                    dofus->map.mapTile[j][i].lancerLeSort = true;
                                    zoneSortFeca(dofus,j,i);
                                }
                            }else if (dofus->tabSortsFeca[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsFeca[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) ){
                                al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                dofus->map.mapTile[j][i].lancerLeSort = true;
                            }
                        }
                    }
                }
            }
        }
    }
}
void afficherPorteeSortEca(Dofus* dofus){
    if (dofus->sortEnMain == true){
        for (int k = 0; k < NB_SORTS_ECA; ++k) {
            if (dofus->tabSortsEca[k].sortSelectionne == true){
                for (int i = 0; i < NBCELLULEX ; ++i) {
                    for (int j = 0; j < NBCELLULEY; ++j) {
                        if (k == COUSSINET){
                            if (dofus->tabSortsEca[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsEca[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && (j == dofus->joueurActif->celluleActuelle.celluleY || i == dofus->joueurActif->celluleActuelle.celluleX)){
                                al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                dofus->map.mapTile[j][i].lancerLeSort = true;
                                zoneSortEca(dofus,j,i);
                            }
                        }else if (dofus->map.mapTile[j][i].blocPlein != true){
                            if (dofus->tabSortsEca[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsEca[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) ){
                                al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                dofus->map.mapTile[j][i].lancerLeSort = true;
                            }
                        }
                    }
                }
            }
        }
    }
}
void afficherPorteeSortOsa(Dofus* dofus){
    if (dofus->sortEnMain == true){
        for (int k = 0; k < NB_SORTS_OSA; ++k) {
            if (dofus->tabSortsOsa[k].sortSelectionne == true){
                for (int i = 0; i < NBCELLULEX ; ++i) {
                    for (int j = 0; j < NBCELLULEY; ++j) {
                        if (dofus->map.mapTile[j][i].blocPlein != true){
                            if (k == RECUL){
                                if (dofus->tabSortsOsa[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsOsa[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && (j == dofus->joueurActif->celluleActuelle.celluleY || i == dofus->joueurActif->celluleActuelle.celluleX)){
                                    al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                    dofus->map.mapTile[j][i].lancerLeSort = true;
                                }
                            }else if (k == DEVORANTE){
                                if (dofus->tabSortsOsa[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsOsa[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && (j == dofus->joueurActif->celluleActuelle.celluleY || i == dofus->joueurActif->celluleActuelle.celluleX)){
                                    al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                    dofus->map.mapTile[j][i].lancerLeSort = true;
                                    zoneSortOsa(dofus,j,i);
                                }
                            }else if (k == CINGLANTE){
                                if (dofus->tabSortsOsa[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsOsa[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && (j == dofus->joueurActif->celluleActuelle.celluleY || i == dofus->joueurActif->celluleActuelle.celluleX)){
                                    al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                    dofus->map.mapTile[j][i].lancerLeSort = true;
                                }
                            }else if (dofus->tabSortsOsa[k].porteeMin <= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) && dofus->tabSortsOsa[k].porteeMax >= (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - i) + valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - j)) ){
                                al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[j][i].coordsXY.screenX, dofus->map.mapTile[j][i].coordsXY.screenY, 0);
                                dofus->map.mapTile[j][i].lancerLeSort = true;
                            }
                        }
                    }
                }
            }
        }
    }
}

void afficherSortSelonClasse(Dofus* dofus){
    initCaseLancerSort(dofus);
    if (dofus->joueurActif->ptrClasse == &dofus->classes[IOP]) {
        afficherSortIop(dofus);
        afficherPorteeSortIop(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[FECA]) {
        afficherSortFeca(dofus);
        afficherPorteeSortFeca(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[ECA]) {
        afficherSortEca(dofus);
        afficherPorteeSortEca(dofus);

    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[OSA]) {
        afficherSortOsa(dofus);
        afficherPorteeSortOsa(dofus);
    }
}

void afficherSortMouvIop(Dofus* dofus){
    for (int i = 0; i < NB_SORTS_IOP; ++i) {
        if (dofus->tabSortsIop[i].sortSelectionne == true) {
            dofus->tabSortsIop[i].spriteSorts[i].screenX = dofus->allegro.event.mouse.x - dofus->tabSortsIop[i].offSetX;
            dofus->tabSortsIop[i].spriteSorts[i].screenY = dofus->allegro.event.mouse.y - dofus->tabSortsIop[i].offSetY;
        }
    }
}
void afficherSortMouvFeca(Dofus* dofus){
    int j = 6;
    for (int i = 0; i < NB_SORTS_FECA; ++i) {
        if (dofus->tabSortsFeca[i].sortSelectionne == true) {
            dofus->tabSortsFeca[i].spriteSorts[j].screenX = dofus->allegro.event.mouse.x - dofus->tabSortsFeca[j].offSetX;
            dofus->tabSortsFeca[i].spriteSorts[j].screenY = dofus->allegro.event.mouse.y - dofus->tabSortsFeca[j].offSetY;
        }
        j++;
    }
}
void afficherSortMouvEca(Dofus* dofus){
    int j = 18;
    for (int i = 0; i < NB_SORTS_ECA; ++i) {
        if (dofus->tabSortsEca[i].sortSelectionne == true) {
            dofus->tabSortsEca[i].spriteSorts[j].screenX = dofus->allegro.event.mouse.x - dofus->tabSortsEca[j].offSetX;
            dofus->tabSortsEca[i].spriteSorts[j].screenY = dofus->allegro.event.mouse.y - dofus->tabSortsEca[j].offSetY;
        }
        j++;
    }
}
void afficherSortMouvOsa(Dofus* dofus){
    int j = 12;
    for (int i = 0; i < NB_SORTS_OSA; ++i) {
        if (dofus->tabSortsOsa[i].sortSelectionne == true) {
            dofus->tabSortsOsa[i].spriteSorts[j].screenX = dofus->allegro.event.mouse.x - dofus->tabSortsOsa[j].offSetX;
            dofus->tabSortsOsa[i].spriteSorts[j].screenY = dofus->allegro.event.mouse.y - dofus->tabSortsOsa[j].offSetY;
        }
        j++;
    }
}
void afficherSortMouvSelonClasse(Dofus* dofus){
    if (dofus->joueurActif->ptrClasse == &dofus->classes[IOP]){
        afficherSortMouvIop(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[FECA]){
        afficherSortMouvFeca(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[ECA]){
        afficherSortMouvEca(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[OSA]){
        afficherSortMouvOsa(dofus);
    }
}


void retirerPAsortIop(Dofus* dofus){
    for (int i = 0; i < NB_SORTS_IOP; ++i) {
        if (dofus->tabSortsIop[i].sortLance == true && dofus->sortlance == true && dofus->joueurActif->nbPA >= dofus->tabSortsIop[i].nbPA && isLancerSort(dofus) == true) {
            dofus->joueurActif->nbPA -= dofus->tabSortsIop[i].nbPA;
            dofus->joueurActif->paUtilises += dofus->tabSortsIop[i].nbPA;
            dofus->sortlance = false;
            dofus->tabSortsIop[i].sortLance = false;
        }
    }
}
void retirerPAsortFeca(Dofus* dofus){
    for (int i = 0; i < NB_SORTS_FECA; ++i) {
        if (dofus->tabSortsFeca[i].sortLance == true && dofus->sortlance == true && dofus->joueurActif->nbPA >= dofus->tabSortsFeca[i].nbPA && isLancerSort(dofus) == true) {
            dofus->joueurActif->nbPA -= dofus->tabSortsFeca->nbPA;
            dofus->joueurActif->paUtilises += dofus->tabSortsFeca->nbPA;
            dofus->sortlance = false;
            dofus->tabSortsFeca[i].sortLance = false;

        }
    }
}
void retirerPAsortOsa(Dofus* dofus){
    for (int i = 0; i < NB_SORTS_OSA; ++i) {
        if (dofus->tabSortsOsa[i].sortLance == true && dofus->sortlance == true && dofus->joueurActif->nbPA >= dofus->tabSortsOsa[i].nbPA && isLancerSort(dofus) == true) {
            dofus->joueurActif->nbPA -= dofus->tabSortsOsa[i].nbPA;
            dofus->joueurActif->paUtilises += dofus->tabSortsOsa[i].nbPA;
            dofus->sortlance = false;
            dofus->tabSortsOsa[i].sortLance = false;
        }
    }
}
void retirerPAsortEca(Dofus* dofus){
    for (int i = 0; i < NB_SORTS_ECA; ++i) {
        if (dofus->tabSortsEca[i].sortLance == true && dofus->sortlance == true && dofus->joueurActif->nbPA >= dofus->tabSortsEca[i].nbPA && isLancerSort(dofus) == true) {
            dofus->joueurActif->nbPA -= dofus->tabSortsEca->nbPA;
            dofus->joueurActif->paUtilises += dofus->tabSortsEca->nbPA;
            dofus->sortlance = false;
            dofus->tabSortsEca[i].sortLance = false;
        }
    }
}
void retirerPASelonClasse(Dofus* dofus){
    if (dofus->joueurActif->ptrClasse == &dofus->classes[IOP]){
        retirerPAsortIop(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[FECA]){
        retirerPAsortFeca(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[ECA]){
        retirerPAsortEca(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[OSA]){
        retirerPAsortOsa(dofus);
    }
}

void retirerPVsortIop(Dofus* dofus){
    int temp2 = rand() % 21;
    int temp3 = rand() % 2;
    Joueurs* temp = dofus->joueurActif;
    for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
        if (temp != dofus->joueurActif){
            for (int j = 0; j < NB_SORTS_IOP; ++j) {
                if (dofus->tabSortsIop[j].sortSelectionne == true && j == EPEE &&
                ennemieDansZoneSortIop(dofus, temp) == true && dofus->joueurActif->nbPA >= dofus->tabSortsIop[j].nbPA) {
                    if (temp3 == 1){
                        temp->pvRestants -= dofus->tabSortsIop[j].nbDMG + temp2;
                        temp->nbDegatSubi += dofus->tabSortsIop[j].nbDMG + temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsIop[j].nbDMG + temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsIop[j].nbDMG + temp2;
                    } else{
                        temp->pvRestants -= dofus->tabSortsIop[j].nbDMG - temp2;
                        temp->nbDegatSubi += dofus->tabSortsIop[j].nbDMG - temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsIop[j].nbDMG - temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsIop[j].nbDMG - temp2;
                    }
                    dofus->pages.pageJeu.animSortIop = true;
                    dofus->pages.pageJeu.degatSubi = true;
                    dofus->pages.pageJeu.animSorts.celluleX = temp->celluleActuelle.celluleX;
                    dofus->pages.pageJeu.animSorts.celluleY = temp->celluleActuelle.celluleY;
                    dofus->joueur = temp;
                    al_play_sample(dofus->allegro.music[SON_DAMAGE],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                } else if (j == EPEE && ennemieDansZoneSortIop(dofus, temp) == false) {
                    dofus->joueurActif->degatSubiAffichage = 0;
                }else if (dofus->joueurActif->nbPA >= dofus->tabSortsIop[j].nbPA && dofus->tabSortsIop[j].sortSelectionne == true && dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY && dofus->tabSortsIop[j].nbDMG > 0) {
                    if (temp3 == 1){
                        temp->pvRestants -= dofus->tabSortsIop[j].nbDMG + temp2;
                        temp->nbDegatSubi += dofus->tabSortsIop[j].nbDMG + temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsIop[j].nbDMG + temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsIop[j].nbDMG + temp2;
                    } else{
                        temp->pvRestants -= dofus->tabSortsIop[j].nbDMG - temp2;
                        temp->nbDegatSubi += dofus->tabSortsIop[j].nbDMG - temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsIop[j].nbDMG - temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsIop[j].nbDMG - temp2;
                    }
                    dofus->pages.pageJeu.animSortIop = true;
                    dofus->pages.pageJeu.degatSubi = true;
                    dofus->pages.pageJeu.animSorts.celluleX = temp->celluleActuelle.celluleX;
                    dofus->pages.pageJeu.animSorts.celluleY = temp->celluleActuelle.celluleY;
                    dofus->joueur = temp;
                    al_play_sample(dofus->allegro.music[SON_DAMAGE],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                    al_play_sample(dofus->allegro.music[FLASHBANG],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                }
            }
        }
        temp = temp->next;
    }
}
void retirerPVsortFeca(Dofus* dofus){
    int temp2 = rand() % 21;
    int temp3 = rand() % 2;
    Joueurs* temp = dofus->joueurActif;
    for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
        if (temp != dofus->joueurActif){
            for (int j = 0; j < NB_SORTS_FECA; ++j) {
                if (j == NUAGE && dofus->joueurActif->nbPA >= dofus->tabSortsFeca[j].nbPA && dofus->tabSortsFeca[j].sortSelectionne == true && ennemieDansZoneSortFeca(dofus,temp) == true){
                    if (temp3 == 1){
                        temp->pvRestants -= dofus->tabSortsFeca[j].nbDMG + temp2;
                        temp->nbDegatSubi += dofus->tabSortsFeca[j].nbDMG + temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsFeca[j].nbDMG + temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsFeca[j].nbDMG + temp2;

                    } else{
                        temp->pvRestants -= dofus->tabSortsFeca[j].nbDMG - temp2;
                        temp->nbDegatSubi += dofus->tabSortsFeca[j].nbDMG - temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsFeca[j].nbDMG - temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsFeca[j].nbDMG - temp2;
                    }
                    dofus->pages.pageJeu.animSortFeca = true;
                    dofus->pages.pageJeu.degatSubi = true;
                    dofus->pages.pageJeu.animSorts.celluleX = temp->celluleActuelle.celluleX;
                    dofus->pages.pageJeu.animSorts.celluleY = temp->celluleActuelle.celluleY;
                    dofus->joueur = temp;
                    al_play_sample(dofus->allegro.music[SON_DAMAGE],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                }else if(dofus->tabSortsFeca[j].sortSelectionne == true && j == NUAGE && ennemieDansZoneSortFeca(dofus,temp) == false){
                    dofus->joueurActif->degatSubiAffichage = 0;
                }else if (dofus->joueurActif->nbPA >= dofus->tabSortsFeca[j].nbPA && dofus->tabSortsFeca[j].sortSelectionne == true && dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY && dofus->tabSortsFeca[j].nbDMG > 0){
                    if (temp3 == 1){
                        temp->pvRestants -= dofus->tabSortsFeca[j].nbDMG + temp2;
                        temp->nbDegatSubi += dofus->tabSortsFeca[j].nbDMG + temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsFeca[j].nbDMG + temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsFeca[j].nbDMG + temp2;

                    } else{
                        temp->pvRestants -= dofus->tabSortsFeca[j].nbDMG - temp2;
                        temp->nbDegatSubi += dofus->tabSortsFeca[j].nbDMG - temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsFeca[j].nbDMG - temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsFeca[j].nbDMG - temp2;
                    }
                    dofus->pages.pageJeu.animSortFeca = true;
                    dofus->pages.pageJeu.degatSubi = true;
                    dofus->pages.pageJeu.animSorts.celluleX = temp->celluleActuelle.celluleX;
                    dofus->pages.pageJeu.animSorts.celluleY = temp->celluleActuelle.celluleY;
                    dofus->joueur = temp;
                    al_play_sample(dofus->allegro.music[SON_DAMAGE],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                    al_play_sample(dofus->allegro.music[WATER],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                }
            }
        }
        temp = temp->next;
    }
}
void retirerPVsortEca(Dofus* dofus){
    int temp2 = rand() % 21;
    int temp3 = rand() % 2;
    Joueurs* temp = dofus->joueurActif;
    for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
        if (temp != dofus->joueurActif){
            for (int j = 0; j < NB_SORTS_ECA; ++j) {
                if (dofus->joueurActif->nbPA >= dofus->tabSortsEca[j].nbPA && j == COUSSINET && dofus->tabSortsEca[j].sortSelectionne == true  && ennemieDansZoneSortEca(dofus,temp) == true){
                    if (temp3 == 1){
                        temp->pvRestants -= dofus->tabSortsEca[j].nbDMG + temp2;
                        temp->nbDegatSubi += dofus->tabSortsEca[j].nbDMG + temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsEca[j].nbDMG + temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsEca[j].nbDMG + temp2;
                    } else{
                        temp->pvRestants -= dofus->tabSortsEca[j].nbDMG - temp2;
                        temp->nbDegatSubi += dofus->tabSortsEca[j].nbDMG - temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsEca[j].nbDMG - temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsEca[j].nbDMG - temp2;
                    }
                    dofus->pages.pageJeu.animSortEca = true;
                    dofus->pages.pageJeu.degatSubi = true;
                    dofus->pages.pageJeu.animSorts.celluleX = temp->celluleActuelle.celluleX;
                    dofus->pages.pageJeu.animSorts.celluleY = temp->celluleActuelle.celluleY;
                    dofus->joueur = temp;
                    al_play_sample(dofus->allegro.music[SON_DAMAGE],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                }else if(j == COUSSINET && dofus->tabSortsEca[j].sortSelectionne == true && ennemieDansZoneSortEca(dofus,temp) == false){
                    dofus->joueurActif->degatSubiAffichage = 0;

                }else if (dofus->joueurActif->nbPA >= dofus->tabSortsEca[j].nbPA && dofus->tabSortsEca[j].sortSelectionne == true && dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY && dofus->tabSortsEca[j].nbDMG > 0){
                    if (temp3 == 1){
                        temp->pvRestants -= dofus->tabSortsEca[j].nbDMG + temp2;
                        temp->nbDegatSubi += dofus->tabSortsEca[j].nbDMG + temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsEca[j].nbDMG + temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsEca[j].nbDMG + temp2;
                    } else{
                        temp->pvRestants -= dofus->tabSortsEca[j].nbDMG - temp2;
                        temp->nbDegatSubi += dofus->tabSortsEca[j].nbDMG - temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsEca[j].nbDMG - temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsEca[j].nbDMG - temp2;

                    }
                    dofus->pages.pageJeu.animSortEca = true;
                    dofus->pages.pageJeu.degatSubi = true;
                    dofus->pages.pageJeu.animSorts.celluleX = temp->celluleActuelle.celluleX;
                    dofus->pages.pageJeu.animSorts.celluleY = temp->celluleActuelle.celluleY;
                    dofus->joueur = temp;
                    al_play_sample(dofus->allegro.music[SON_DAMAGE],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                    al_play_sample(dofus->allegro.music[FIRE],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);

                }
            }
        }
        temp = temp->next;
    }
}
void retirerPVsortOsa(Dofus* dofus){
    int temp2 = rand() % 21;
    int temp3 = rand() % 2;
    Joueurs* temp = dofus->joueurActif;
    for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
        if (temp != dofus->joueurActif){
            for (int j = 0; j < NB_SORTS_OSA; ++j) {
                if (dofus->joueurActif->nbPA >= dofus->tabSortsOsa[j].nbPA && dofus->tabSortsOsa[j].sortSelectionne == true && j == DEVORANTE && ennemieDansZoneSortOsa(dofus,temp) == true){
                    if (temp3 == 1){
                        temp->pvRestants -= dofus->tabSortsOsa[j].nbDMG + temp2;
                        temp->nbDegatSubi += dofus->tabSortsOsa[j].nbDMG + temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsOsa[j].nbDMG + temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsOsa[j].nbDMG + temp2;
                    } else{
                        temp->pvRestants -= dofus->tabSortsOsa[j].nbDMG - temp2;
                        temp->nbDegatSubi += dofus->tabSortsOsa[j].nbDMG - temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsOsa[j].nbDMG - temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsOsa[j].nbDMG - temp2;
                    }
                    dofus->pages.pageJeu.animSortOsa = true;
                    dofus->pages.pageJeu.degatSubi = true;
                    dofus->pages.pageJeu.animSorts.celluleX = temp->celluleActuelle.celluleX;
                    dofus->pages.pageJeu.animSorts.celluleY = temp->celluleActuelle.celluleY;
                    dofus->joueur = temp;
                    al_play_sample(dofus->allegro.music[SON_DAMAGE],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                }else if(j == DEVORANTE && ennemieDansZoneSortOsa(dofus,temp) == false){
                    dofus->joueurActif->degatSubiAffichage = 0;
                }else if (dofus->joueurActif->nbPA >= dofus->tabSortsOsa[j].nbPA && dofus->tabSortsOsa[j].sortSelectionne == true && dofus->allegro.event.mouse.button == 1 && dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY && dofus->tabSortsOsa[j].nbDMG > 0){
                    if (temp3 == 1){
                        temp->pvRestants -= dofus->tabSortsOsa[j].nbDMG + temp2;
                        temp->nbDegatSubi += dofus->tabSortsOsa[j].nbDMG + temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsOsa[j].nbDMG + temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsOsa[j].nbDMG + temp2;
                    } else{
                        temp->pvRestants -= dofus->tabSortsOsa[j].nbDMG - temp2;
                        temp->nbDegatSubi += dofus->tabSortsOsa[j].nbDMG - temp2;
                        dofus->joueurActif->degatSubiAffichage = dofus->tabSortsOsa[j].nbDMG - temp2;
                        dofus->joueurActif->nbDegatInflige += dofus->tabSortsOsa[j].nbDMG - temp2;
                    }
                    dofus->pages.pageJeu.animSortOsa = true;
                    dofus->pages.pageJeu.degatSubi = true;
                    dofus->pages.pageJeu.animSorts.celluleX = temp->celluleActuelle.celluleX;
                    dofus->pages.pageJeu.animSorts.celluleY = temp->celluleActuelle.celluleY;
                    dofus->joueur = temp;
                    al_play_sample(dofus->allegro.music[SON_DAMAGE],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                    al_play_sample(dofus->allegro.music[SOVA],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);

                }
            }
        }
        temp = temp->next;
    }
}

void retirerPVselonClasse(Dofus* dofus){
    if (dofus->joueurActif->ptrClasse == &dofus->classes[IOP]) {
        retirerPVsortIop(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[FECA]) {
        retirerPVsortFeca(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[ECA]) {
        retirerPVsortEca(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[OSA]) {
        retirerPVsortOsa(dofus);
    }
}

void cliqueSortIop(Dofus* dofus){
    for (int i = 0; i < NB_SORTS_IOP; ++i) {
        if (dofus->tabSortsIop[i].sortSelectionne == true){
            dofus->tabSortsIop[i].sortSelectionne = false;
            dofus->sortEnMain = false;
            dofus->sortlance = true;
            dofus->tabSortsIop[i].sortLance = true;
            initPositionSortMouvIop(dofus);
            break; // permet de lancer le sort
        }
        if (dofus->sortEnMain == false) {
            if (dofus->tabSortsIop[i].sortSelectionne != true && dofus->allegro.event.mouse.x <= dofus->tabSortsIop[i].spriteSorts[i].screenXFixe + dofus->tabSortsIop[i].spriteSorts[i].spriteLargeur && dofus->allegro.event.mouse.x >= dofus->tabSortsIop[i].spriteSorts[i].screenXFixe && dofus->allegro.event.mouse.y <= dofus->tabSortsIop[i].spriteSorts[i].screenYFixe + dofus->tabSortsIop[i].spriteSorts[i].spriteHauteur && dofus->allegro.event.mouse.y >= dofus->tabSortsIop[i].spriteSorts[i].screenYFixe) {
                dofus->tabSortsIop[i].sortSelectionne = true;
                dofus->sortEnMain = true;
                dofus->tabSortsIop[i].offSetX = dofus->allegro.event.mouse.x - dofus->tabSortsIop[i].spriteSorts[i].screenX;
                dofus->tabSortsIop[i].offSetY = dofus->allegro.event.mouse.y - dofus->tabSortsIop[i].spriteSorts[i].screenY;
                break; // selectionne le sort cliquer et suit la souris
            }
        }
    }
}
void cliqueSortFeca(Dofus* dofus){
    int j = 6;
    for (int i = 0; i < NB_SORTS_FECA; ++i) {
        if (dofus->tabSortsFeca[i].sortSelectionne == true){
            dofus->tabSortsFeca[i].sortSelectionne = false;
            dofus->sortEnMain = false;
            dofus->sortlance = true;
            dofus->tabSortsFeca[i].sortLance = true;
            initPositionSortMouvFeca(dofus);
            break;
        }
        if (dofus->sortEnMain == false) {
            if (dofus->tabSortsFeca[i].sortSelectionne != true && dofus->allegro.event.mouse.x <= dofus->tabSortsFeca[i].spriteSorts[j].screenXFixe + dofus->tabSortsFeca[i].spriteSorts[j].spriteLargeur && dofus->allegro.event.mouse.x >= dofus->tabSortsFeca[i].spriteSorts[j].screenXFixe && dofus->allegro.event.mouse.y <= dofus->tabSortsFeca[i].spriteSorts[j].screenYFixe + dofus->tabSortsFeca[i].spriteSorts[j].spriteHauteur && dofus->allegro.event.mouse.y >= dofus->tabSortsFeca[i].spriteSorts[j].screenYFixe) {
                dofus->tabSortsFeca[i].sortSelectionne = true;
                dofus->sortEnMain = true;
                dofus->tabSortsFeca[i].offSetX = dofus->allegro.event.mouse.x - dofus->tabSortsFeca[i].spriteSorts[j].screenX;
                dofus->tabSortsFeca[i].offSetY = dofus->allegro.event.mouse.y - dofus->tabSortsFeca[i].spriteSorts[j].screenY;
                break;
            }
        }
        j++;
    }
}
void cliqueSortEca(Dofus* dofus){
    int j = 18;
    for (int i = 0; i < NB_SORTS_FECA; ++i) {
        if (dofus->tabSortsEca[i].sortSelectionne == true){
            dofus->tabSortsEca[i].sortSelectionne = false;
            dofus->sortEnMain = false;
            dofus->sortlance = true;
            dofus->tabSortsEca[i].sortLance = true;
            initPositionSortMouvEca(dofus);
            break;
        }
        if (dofus->sortEnMain == false) {
            if (dofus->tabSortsEca[i].sortSelectionne != true && dofus->allegro.event.mouse.x <= dofus->tabSortsEca[i].spriteSorts[j].screenXFixe + dofus->tabSortsEca[i].spriteSorts[j].spriteLargeur && dofus->allegro.event.mouse.x >= dofus->tabSortsEca[i].spriteSorts[j].screenXFixe && dofus->allegro.event.mouse.y <= dofus->tabSortsEca[i].spriteSorts[j].screenYFixe + dofus->tabSortsEca[i].spriteSorts[j].spriteHauteur && dofus->allegro.event.mouse.y >= dofus->tabSortsEca[i].spriteSorts[j].screenYFixe) {
                dofus->tabSortsEca[i].sortSelectionne = true;
                dofus->sortEnMain = true;
                dofus->tabSortsEca[i].offSetX = dofus->allegro.event.mouse.x - dofus->tabSortsEca[i].spriteSorts[j].screenX;
                dofus->tabSortsEca[i].offSetY = dofus->allegro.event.mouse.y - dofus->tabSortsEca[i].spriteSorts[j].screenY;
                break;
            }
        }
        j++;
    }
}
void cliqueSortOsa(Dofus* dofus){
    int j = 12;
    for (int i = 0; i < NB_SORTS_OSA; ++i) {
        if (dofus->tabSortsOsa[i].sortSelectionne == true){
            dofus->tabSortsOsa[i].sortSelectionne = false;
            dofus->sortEnMain = false;
            dofus->sortlance = true;
            dofus->tabSortsOsa[i].sortLance = true;
            initPositionSortMouvOsa(dofus);
            break;
        }
        if (dofus->sortEnMain == false) {
            if (dofus->tabSortsOsa[i].sortSelectionne != true && dofus->allegro.event.mouse.x <= dofus->tabSortsOsa[i].spriteSorts[j].screenXFixe + dofus->tabSortsOsa[i].spriteSorts[j].spriteLargeur && dofus->allegro.event.mouse.x >= dofus->tabSortsOsa[i].spriteSorts[j].screenXFixe && dofus->allegro.event.mouse.y <= dofus->tabSortsOsa[i].spriteSorts[j].screenYFixe + dofus->tabSortsOsa[i].spriteSorts[j].spriteHauteur && dofus->allegro.event.mouse.y >= dofus->tabSortsOsa[i].spriteSorts[j].screenYFixe) {
                dofus->tabSortsOsa[i].sortSelectionne = true;
                dofus->sortEnMain = true;
                dofus->tabSortsOsa[i].offSetX = dofus->allegro.event.mouse.x - dofus->tabSortsOsa[i].spriteSorts[j].screenX;
                dofus->tabSortsOsa[i].offSetY = dofus->allegro.event.mouse.y - dofus->tabSortsOsa[i].spriteSorts[j].screenY;
                break;
            }
        }
        j++;
    }
}
void cliqueSortSelonClasse(Dofus* dofus){

    if (dofus->joueurActif->ptrClasse == &dofus->classes[IOP]){
        cliqueSortIop(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[FECA]){
        cliqueSortFeca(dofus);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[ECA]){
        cliqueSortEca(dofus);

    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[OSA]){
        cliqueSortOsa(dofus);
    }
}

void sortSpecialIop(Dofus* dofus){
    if (dofus->tabSortsIop[BOND].sortSelectionne == true &&  dofus->joueurActif->nbPA >= dofus->tabSortsIop[BOND].nbPA && isLancerSort(dofus) == true){
        Joueurs* temp = dofus->joueurActif;
        for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
            if (temp != dofus->joueurActif){
                if (dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY){
                    dofus->joueurActif->nbPA += dofus->tabSortsIop[BOND].nbPA;
                } else{
                    dofus->joueurActif->celluleActuelle.celluleX = dofus->interactionExterieure.mouse.celluleIso.celluleX;
                    dofus->joueurActif->celluleActuelle.celluleY = dofus->interactionExterieure.mouse.celluleIso.celluleY;
                }
            }
            temp = temp->next;
        }
    } else if (dofus->tabSortsIop[INTIMIDATION].sortSelectionne == true &&dofus->joueurActif->nbPA >= dofus->tabSortsIop[INTIMIDATION].nbPA && isLancerSort(dofus) == true){
        Joueurs* temp = dofus->joueurActif;
        for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
            if (temp != dofus->joueurActif){
                if (dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY){
                    if (dofus->joueurActif->celluleActuelle.celluleX == temp->celluleActuelle.celluleX && dofus->joueurActif->celluleActuelle.celluleY > temp->celluleActuelle.celluleY){
                        if (dofus->map.mapTile[temp->celluleActuelle.celluleY - 1][temp->celluleActuelle.celluleX].blocPlein == true){
                            temp->pvRestants -= 100;
                            dofus->joueurActif->degatSubiAffichage += 100;
                        }else if (dofus->map.mapTile[temp->celluleActuelle.celluleY - 2][temp->celluleActuelle.celluleX].blocPlein == true){
                            temp->celluleActuelle.celluleY -= 1;
                            temp->pvRestants -= 50;
                            dofus->joueurActif->degatSubiAffichage += 50;
                        }
                        else{
                            temp->celluleActuelle.celluleY -= 2;
                        }
                    }else if (dofus->joueurActif->celluleActuelle.celluleX == temp->celluleActuelle.celluleX && dofus->joueurActif->celluleActuelle.celluleY < temp->celluleActuelle.celluleY){
                        if (dofus->map.mapTile[temp->celluleActuelle.celluleY + 1][temp->celluleActuelle.celluleX].blocPlein == true){
                            temp->pvRestants -= 100;
                            dofus->joueurActif->degatSubiAffichage += 100;
                        }else if (dofus->map.mapTile[temp->celluleActuelle.celluleY + 2][temp->celluleActuelle.celluleX].blocPlein == true){
                            temp->celluleActuelle.celluleY += 1;
                            temp->pvRestants -= 50;
                            dofus->joueurActif->degatSubiAffichage += 50;
                        }
                        else{
                            temp->celluleActuelle.celluleY += 2;
                        }
                    }else if (dofus->joueurActif->celluleActuelle.celluleY == temp->celluleActuelle.celluleY && dofus->joueurActif->celluleActuelle.celluleX > temp->celluleActuelle.celluleX){
                        if (dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX - 1].blocPlein == true){
                            temp->pvRestants -= 100;
                            dofus->joueurActif->degatSubiAffichage += 100;
                        }else if (dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX - 2].blocPlein == true){
                            temp->celluleActuelle.celluleX -= 1;
                            temp->pvRestants -= 50;
                            dofus->joueurActif->degatSubiAffichage += 50;
                        }
                        else{
                            temp->celluleActuelle.celluleX -= 2;
                        }
                    }else if (dofus->joueurActif->celluleActuelle.celluleY == temp->celluleActuelle.celluleY && dofus->joueurActif->celluleActuelle.celluleX < temp->celluleActuelle.celluleX){
                        if (dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX + 1].blocPlein == true){
                            temp->pvRestants -= 100;
                            dofus->joueurActif->degatSubiAffichage += 100;
                        }else if (dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX + 2].blocPlein == true){
                            temp->celluleActuelle.celluleX += 1;
                            temp->pvRestants -= 50;
                            dofus->joueurActif->degatSubiAffichage += 50;
                        }
                        else{
                            temp->celluleActuelle.celluleX += 2;
                        }
                    }
                    dofus->joueur = temp;
                }
            }
            temp = temp->next;
        }
    }else if (dofus->tabSortsIop[SOUFFLE].sortSelectionne == true && dofus->joueurActif->nbPA >= dofus->tabSortsIop[INTIMIDATION].nbPA && isLancerSort(dofus) == true){
        Joueurs* temp = dofus->joueurActif;
        for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
            if (temp != dofus->joueurActif){
                if (dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY){
                    if (dofus->joueurActif->celluleActuelle.celluleX == temp->celluleActuelle.celluleX && dofus->joueurActif->celluleActuelle.celluleY > temp->celluleActuelle.celluleY + 2){
                        temp->celluleActuelle.celluleY += 2;
                    }else if (dofus->joueurActif->celluleActuelle.celluleX == temp->celluleActuelle.celluleX && dofus->joueurActif->celluleActuelle.celluleY > temp->celluleActuelle.celluleY + 1){
                        temp->celluleActuelle.celluleY += 1;
                    }else if (dofus->joueurActif->celluleActuelle.celluleX == temp->celluleActuelle.celluleX && dofus->joueurActif->celluleActuelle.celluleY < temp->celluleActuelle.celluleY - 2){
                        temp->celluleActuelle.celluleY -= 2;
                    }else if (dofus->joueurActif->celluleActuelle.celluleX == temp->celluleActuelle.celluleX && dofus->joueurActif->celluleActuelle.celluleY < temp->celluleActuelle.celluleY - 1){
                        temp->celluleActuelle.celluleY -= 1;
                    }else if (dofus->joueurActif->celluleActuelle.celluleY == temp->celluleActuelle.celluleY && dofus->joueurActif->celluleActuelle.celluleX < temp->celluleActuelle.celluleX - 2){
                        temp->celluleActuelle.celluleX -= 2;
                    }else if (dofus->joueurActif->celluleActuelle.celluleY == temp->celluleActuelle.celluleY && dofus->joueurActif->celluleActuelle.celluleX < temp->celluleActuelle.celluleX - 1){
                        temp->celluleActuelle.celluleX -= 1;
                    }else if (dofus->joueurActif->celluleActuelle.celluleY == temp->celluleActuelle.celluleY && dofus->joueurActif->celluleActuelle.celluleX > temp->celluleActuelle.celluleX + 2){
                        temp->celluleActuelle.celluleX += 2;
                    }else if (dofus->joueurActif->celluleActuelle.celluleY == temp->celluleActuelle.celluleY && dofus->joueurActif->celluleActuelle.celluleX > temp->celluleActuelle.celluleX + 1){
                        temp->celluleActuelle.celluleX += 1;
                    }
                    dofus->joueur = temp;
                }
            }
            temp = temp->next;
        }
    }
}
void sortSpecialFeca(Dofus* dofus){
    if (dofus->tabSortsFeca[AVEUGLEMENT].sortSelectionne == true &&  dofus->joueurActif->nbPA >= dofus->tabSortsFeca[AVEUGLEMENT].nbPA && isLancerSort(dofus) == true){
        Joueurs* temp = dofus->joueurActif;
        for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
            if (temp != dofus->joueurActif){
                if (dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY){
                    temp->nbPA -= 2;
                    dofus->joueur = temp;
                }
            }
            temp = temp->next;
        }
    }else if (dofus->tabSortsFeca[BASTION].sortSelectionne == true &&  dofus->joueurActif->nbPA >= dofus->tabSortsFeca[BASTION].nbPA && isLancerSort(dofus) == true){
        if (dofus->joueurActif->pvRestants < 1000 && dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY){
            dofus->joueurActif->pvRestants += 150;
        }else{
            dofus->joueurActif->nbPA += dofus->tabSortsEca[BASTION].nbPA;
        }

    }
}
void sortSpecialOsa(Dofus* dofus){
    if (dofus->tabSortsOsa[RECUL].sortSelectionne == true &&  dofus->joueurActif->nbPA >= dofus->tabSortsOsa[RECUL].nbPA && isLancerSort(dofus) == true){
        Joueurs* temp = dofus->joueurActif;
        for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
            if (temp != dofus->joueurActif){
                if (dofus->joueurActif->celluleActuelle.celluleX == temp->celluleActuelle.celluleX && dofus->joueurActif->celluleActuelle.celluleY > temp->celluleActuelle.celluleY){
                    if (dofus->map.mapTile[temp->celluleActuelle.celluleY - 1][temp->celluleActuelle.celluleX].blocPlein == true){
                        temp->pvRestants -= 100;
                        dofus->joueurActif->degatSubiAffichage += 100;
                        break;
                    }else if (dofus->map.mapTile[temp->celluleActuelle.celluleY - 2][temp->celluleActuelle.celluleX].blocPlein == true){
                        temp->celluleActuelle.celluleY -= 1;
                        temp->pvRestants -= 50;
                        dofus->joueurActif->degatSubiAffichage += 50;
                        break;
                    }
                    else{
                        temp->celluleActuelle.celluleY -= 2;
                        break;
                    }
                }else if (dofus->joueurActif->celluleActuelle.celluleX == temp->celluleActuelle.celluleX && dofus->joueurActif->celluleActuelle.celluleY < temp->celluleActuelle.celluleY){
                    if (dofus->map.mapTile[temp->celluleActuelle.celluleY + 1][temp->celluleActuelle.celluleX].blocPlein == true){
                        temp->pvRestants -= 100;
                        dofus->joueurActif->degatSubiAffichage += 100;
                        break;
                    }else if (dofus->map.mapTile[temp->celluleActuelle.celluleY + 2][temp->celluleActuelle.celluleX].blocPlein == true){
                        temp->celluleActuelle.celluleY += 1;
                        temp->pvRestants -= 50;
                        dofus->joueurActif->degatSubiAffichage += 50;
                        break;
                    }
                    else{
                        temp->celluleActuelle.celluleY += 2;
                        break;
                    }
                }else if (dofus->joueurActif->celluleActuelle.celluleY == temp->celluleActuelle.celluleY && dofus->joueurActif->celluleActuelle.celluleX > temp->celluleActuelle.celluleX){
                    if (dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX - 1].blocPlein == true){
                        temp->pvRestants -= 100;
                        dofus->joueurActif->degatSubiAffichage += 100;
                        break;
                    }else if (dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX - 2].blocPlein == true){
                        temp->celluleActuelle.celluleX -= 1;
                        temp->pvRestants -= 50;
                        dofus->joueurActif->degatSubiAffichage += 50;
                        break;
                    }
                    else{
                        temp->celluleActuelle.celluleX -= 2;
                        break;
                    }
                }else if (dofus->joueurActif->celluleActuelle.celluleY == temp->celluleActuelle.celluleY && dofus->joueurActif->celluleActuelle.celluleX < temp->celluleActuelle.celluleX){
                    if (dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX + 1].blocPlein == true){
                        temp->pvRestants -= 100;
                        dofus->joueurActif->degatSubiAffichage += 100;
                        break;
                    }else if (dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX + 2].blocPlein == true){
                        temp->celluleActuelle.celluleX += 1;
                        temp->pvRestants -= 50;
                        dofus->joueurActif->degatSubiAffichage += 50;
                        break;
                    }
                    else{
                        temp->celluleActuelle.celluleX += 2;
                        break;
                    }
                }
                dofus->joueur = temp;
            }
            temp = temp->next;
        }
    }else if (dofus->tabSortsOsa[CINGLANTE].sortSelectionne == true &&  dofus->joueurActif->nbPA >= dofus->tabSortsOsa[CINGLANTE].nbPA && isLancerSort(dofus) == true){
        Joueurs* temp = dofus->joueurActif;
        for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
            if (temp != dofus->joueurActif){
                if (dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY){
                    temp->nbPmActuels -= 1;
                    dofus->joueur = temp;
                }
            }
            temp = temp->next;
        }
    }else if (dofus->tabSortsOsa[DISPE].sortSelectionne == true &&  dofus->joueurActif->nbPA >= dofus->tabSortsOsa[DISPE].nbPA && isLancerSort(dofus) == true){
        if (dofus->joueurActif->pvRestants < 1000 && dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY){
            dofus->joueurActif->pvRestants += 50;
        }else{
            dofus->joueurActif->nbPA += dofus->tabSortsOsa[DISPE].nbPA;
        }
    }
}
void sortSpecialEca(Dofus* dofus){
    if (dofus->tabSortsEca[BOND_FELIN].sortSelectionne == true &&  dofus->joueurActif->nbPA >= dofus->tabSortsEca[BOND_FELIN].nbPA && isLancerSort(dofus) == true){
        Joueurs* temp = dofus->joueurActif;
        for (int i = 0; i < dofus->nbJoueursEnVie ; ++i) {
            if (temp != dofus->joueurActif){
                if (dofus->interactionExterieure.mouse.celluleIso.celluleX == temp->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == temp->celluleActuelle.celluleY){
                    dofus->joueurActif->nbPA += dofus->tabSortsEca[BOND_FELIN].nbPA;
                } else{
                    dofus->joueurActif->celluleActuelle.celluleX = dofus->interactionExterieure.mouse.celluleIso.celluleX;
                    dofus->joueurActif->celluleActuelle.celluleY = dofus->interactionExterieure.mouse.celluleIso.celluleY;
                }
            }
            temp = temp->next;
        }
    }else if (dofus->tabSortsEca[CONTRECOUP].sortSelectionne == true &&  dofus->joueurActif->nbPA >= dofus->tabSortsEca[CONTRECOUP].nbPA && isLancerSort(dofus) == true){
        if (dofus->joueurActif->pvRestants < 1000 && dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY){
            dofus->joueurActif->pvRestants += 200;
        }else if (dofus->joueurActif->pvRestants == 1000){
            dofus->joueurActif->nbPA += dofus->tabSortsEca[CONTRECOUP].nbPA;
        }
        if (dofus->joueurActif->pvRestants > 1000){
            dofus->joueurActif->pvRestants = 1000;
        }
    }else if (dofus->tabSortsEca[ODORAT].sortSelectionne == true &&  dofus->joueurActif->nbPA >= dofus->tabSortsEca[ODORAT].nbPA && isLancerSort(dofus) == true){
        if (dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX && dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY){
            dofus->joueurActif->pvRestants -= 300;
            dofus->joueurActif->nbPA += 6;
        }
    }
}

void sortTour(Dofus* dofus){
    if (dofus->joueurActif->joueurEnDeplacement != true){
        if (isLancerSort(dofus) == true && echecCritique(dofus) != true) {
            retirerPVselonClasse(dofus);
            sortSpecialIop(dofus);
            sortSpecialFeca(dofus);
            sortSpecialOsa(dofus);
            sortSpecialEca(dofus);
        }
        cliqueSortSelonClasse(dofus);
        retirerPASelonClasse(dofus);
    }
}



void boucleCombat(Dofus* dofus){
    dofus->joueurActif = dofus->joueur;

    affichageGeneralCombat(dofus);


    while (!dofus->pages.pageJeu.boolPageJeu) {

        if (dofus->interactionExterieure.mouse.boolCliqueDeplacement) {
            actualisationCoordsIsoJoueurLorsDuClicChemin(dofus);
        }

        if (dofus->interactionExterieure.mouse.boolChangementDeCelluleIso) {
            calculDeplacementPMsurXetYAvecTabChemin(dofus);
        }

        al_wait_for_event(dofus->allegro.queue, &dofus->allegro.event);


        switch (dofus->allegro.event.type) {
            case ALLEGRO_EVENT_KEY_DOWN: {
                switch (dofus->allegro.event.keyboard.keycode) {
                    case ALLEGRO_KEY_TAB:{
                        dofus->interactionExterieure.keyboard.tab = true;
                        break;
                    }
                }
                break;
            }
            case ALLEGRO_EVENT_KEY_UP:{
                switch (dofus->allegro.event.keyboard.keycode) {
                    case ALLEGRO_KEY_TAB:{
                        dofus->interactionExterieure.keyboard.tab = false;
                        break;
                    }
                }
                break;
            }
            case ALLEGRO_EVENT_DISPLAY_CLOSE:{
                al_stop_samples();
                dofus->endGame = true;
                dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
                dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
                dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
                dofus->pages.pageJeu.boolPageJeu = true;
                dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
                exit(1);
                break;
            }
            case ALLEGRO_EVENT_MOUSE_AXES:{
                dofus->allegro.coordonneesSourisX = dofus->allegro.event.mouse.x;
                dofus->allegro.coordonneesSourisY = dofus->allegro.event.mouse.y;
                actualiserPositionSourisJoueur(dofus);
                calculHoverLogos(dofus);
                afficherSortMouvSelonClasse(dofus);
                dofus->dessin = true;
                break;
            }
            case ALLEGRO_EVENT_MOUSE_BUTTON_DOWN:{
                switch (dofus->allegro.event.mouse.button) {
                    case 1:{
                        calculClicLogo(dofus);
                        if (!dofus->sortEnMain && !dofus->interactionExterieure.mouse.outOfMapBorders) {
                            dofus->interactionExterieure.mouse.boolCliqueDeplacement = true;
                        } else if (dofus->sortEnMain || dofus->interactionExterieure.mouse.outOfMapBorders){
                            dofus->interactionExterieure.mouse.boolCliqueDeplacement = false;
                        }
                        calculClicSurPersoPourTousChemin(dofus);
                        sortTour(dofus);
                        detecterMortJoueur(dofus);


                        dofus->dessin = true;
                        break;
                    }
                }
                break;
            }
            case ALLEGRO_EVENT_MOUSE_BUTTON_UP:{
                if(dofus->pages.pageJeu.logoTerminerTourClic){
                    passageJoueurSuivant(dofus);
                    dofus->pages.pageJeu.logoTerminerTourClic = false;
                    al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                }
                dofus->dessin = true;
                break;
            }
            case ALLEGRO_EVENT_TIMER:{

                timerFunc(dofus);
                detecterGagnant(dofus);


                dofus->dessin = true;

                if (dofus->dessin) {
                    affichageGeneralCombat(dofus);
                    dofus->dessin = false;
                }
                break;
            }
        }
    }
}


void timerFunc(Dofus* dofus){
    dofus->interactionExterieure.compteurTimer = (dofus->interactionExterieure.compteurTimer + 1) % 60;

    if ((al_get_timer_count(dofus->allegro.chrono) % 60 == 1)) {
        dofus->pages.pageJeu.animSortEca = false;
        dofus->pages.pageJeu.animSortIop = false;
        dofus->pages.pageJeu.animSortOsa = false;
        dofus->pages.pageJeu.animSortFeca = false;
    }

    if(dofus->interactionExterieure.chronoTour == 0){
        passageJoueurSuivant(dofus);
    }

    if ((al_get_timer_count(dofus->allegro.chrono) % 60 == 1)) {
        dofus->interactionExterieure.chronoTour -= 1;
    }

    if (al_get_timer_count(dofus->allegro.chrono) % 120 == 1) {
        dofus->pages.pageJeu.echecCritique = false;
        dofus->pages.pageJeu.degatSubi = false;
    }

    if (dofus->joueurActif->nbPmActuels != dofus->joueurActif->nbPm) {
        if (al_get_timer_count(dofus->allegro.timer) % 60 == 1) {
            dofus->interactionExterieure.nbSecondes = (dofus->interactionExterieure.nbSecondes + 1) %
                                                      (dofus->joueurActif->nbPm -
                                                       (dofus->joueurActif->nbPmActuels));
        }
    } else {
        if ((al_get_timer_count(dofus->allegro.timer) % 60 == 1)) {
            dofus->interactionExterieure.nbSecondes = (dofus->interactionExterieure.nbSecondes + 1) % 3;
            Joueurs* temp = dofus->joueur;
            for (int i = 0; i < dofus->nbJoueurs; i++) {
                if (!temp->mort) {
                    temp->tempsEnVie++;
                }
                temp = temp->next;
            }
        }
    }
    if (dofus->joueurActif->nbPmActuels == 0) {
        if (al_get_timer_count(dofus->allegro.timer) % 180 == 1) {
            dofus->joueurActif->joueurEnDeplacement = false;
        }
    } else if (dofus->joueurActif->nbPmActuels == 1){
        if (al_get_timer_count(dofus->allegro.timer) % 120 == 1) {
            dofus->joueurActif->joueurEnDeplacement = false;
        }
    } else if(dofus->joueurActif->nbPmActuels == 2){
        if (al_get_timer_count(dofus->allegro.timer) % 60 == 1) {
            dofus->joueurActif->joueurEnDeplacement = false;
        }
    } else if (dofus->joueurActif->nbPmActuels == 3){
        dofus->joueurActif->joueurEnDeplacement = false;
    }
}

void passageJoueurSiMort(Dofus* dofus){
    do {
        dofus->joueurActif = dofus->joueurActif->next;
    } while (dofus->joueurActif->mort == true);
}

void passageJoueurSuivant(Dofus* dofus){
    dofus->joueurActif->nbPmActuels = 3;
    dofus->joueurActif->nbPA = 7;
    dofus->joueurActif->nbDeplacementDansLeTour = 0;
    dofus->joueurActif->joueurEnDeplacement = 0;
    dofus->joueurActif->isPlaying = true;
    dofus->interactionExterieure.chronoTour = 30;
    passageJoueurSiMort(dofus);
    al_set_mouse_xy(dofus->allegro.display, dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenX, dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenY);

    dofus->sortEnMain = false;
    dofus->sortlance = false;
    for (int i = 0; i < NB_SORTS_IOP; ++i) {
        dofus->tabSortsIop[i].sortSelectionne = false;
        dofus->tabSortsIop[i].sortLance = false;
        dofus->tabSortsOsa[i].sortSelectionne = false;
        dofus->tabSortsOsa[i].sortLance = false;
        dofus->tabSortsEca[i].sortSelectionne = false;
        dofus->tabSortsEca[i].sortLance = false;
        dofus->tabSortsFeca[i].sortSelectionne = false;
        dofus->tabSortsFeca[i].sortLance = false;
    }
}

#include "../Animations/animations.h"


void affichageGeneralCombat(Dofus *dofus) {
    al_clear_to_color(BLANC);
    al_draw_bitmap(dofus->tabBitmap[LAVA_BG], 0, 0, 0);
    afficherFondMap(dofus);
    afficherContourTile(dofus);
    dessinerCheminLorsDeplacementSouris(dofus);
    dessinerTousCheminsClicSurPerso(dofus);
    affichageHover(dofus);
    afficherDecor(dofus);
    affichageGeneralHUD(dofus);
    affichageTexteDebug(dofus);
    afficherJoueurActif(dofus);

    afficherSortSelonClasse(dofus);
    affichageBannerASonTourDeJoueur(dofus);
    affichageEchecCritique(dofus);
    affichageDMG(dofus);
    afficherInfosTab(dofus);
    affichageGifFire(dofus, 0,0);
    affichageGifSword(dofus);
    affichageGifWater(dofus);
    affichageGifBow(dofus);
    //ligneDeVueTest(dofus);

    al_flip_display();
}