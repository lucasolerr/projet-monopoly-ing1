#include "animations.h"


void initAllAnimations(Dofus* dofus){
    initFire(dofus);
    initSword(dofus);
    initWater(dofus);
    initBow(dofus);
}

void initFire(Dofus* dofus){
    for (int i = 0; i < NBSPRITEFIRE; i++) {
        dofus->pages.pageJeu.spriteGifFire[i].image = &dofus->tabBitmap[GIF_FIRE];
        dofus->pages.pageJeu.spriteGifFire[i].spriteLargeur = 98;
        dofus->pages.pageJeu.spriteGifFire[i].spriteHauteur = 200;
        dofus->pages.pageJeu.spriteGifFire[i].spriteX = 0 + i*dofus->pages.pageJeu.spriteGifFire[i].spriteLargeur;
        dofus->pages.pageJeu.spriteGifFire[i].spriteY = 0;
        dofus->pages.pageJeu.spriteGifFire[i].decalageXDecor = -15;
        dofus->pages.pageJeu.spriteGifFire[i].decalageYDecor = -160;
    }

}

void initBow(Dofus* dofus){
    for (int i = 0; i < NBSPRITEBOW; i++) {
        dofus->pages.pageJeu.spriteGifBow[i].image = &dofus->tabBitmap[GIF_BOW];
        dofus->pages.pageJeu.spriteGifBow[i].spriteLargeur = 260;
        dofus->pages.pageJeu.spriteGifBow[i].spriteHauteur = 200;
        dofus->pages.pageJeu.spriteGifBow[i].spriteX = 0 + i*dofus->pages.pageJeu.spriteGifBow[i].spriteLargeur;
        dofus->pages.pageJeu.spriteGifBow[i].spriteY = 0;
        dofus->pages.pageJeu.spriteGifBow[i].decalageXDecor = -25;
        dofus->pages.pageJeu.spriteGifBow[i].decalageYDecor = -130;
    }

}

void initWater(Dofus* dofus){
    for (int i = 0; i < NBSPRITEWATER; i++) {
        dofus->pages.pageJeu.spriteGifWater[i].image = &dofus->tabBitmap[GIF_WATER];
        dofus->pages.pageJeu.spriteGifWater[i].spriteLargeur = 140;
        dofus->pages.pageJeu.spriteGifWater[i].spriteHauteur = 200;
        dofus->pages.pageJeu.spriteGifWater[i].spriteX = 0 + i*dofus->pages.pageJeu.spriteGifWater[i].spriteLargeur;
        dofus->pages.pageJeu.spriteGifWater[i].spriteY = 0;
        dofus->pages.pageJeu.spriteGifWater[i].decalageXDecor = -27;
        dofus->pages.pageJeu.spriteGifWater[i].decalageYDecor = -155;
    }

}

void initSword(Dofus* dofus){
    dofus->pages.pageJeu.spriteGifSword[0].image = &dofus->tabBitmap[GIF_SWORD];
    dofus->pages.pageJeu.spriteGifSword[0].spriteLargeur = 251;
    dofus->pages.pageJeu.spriteGifSword[0].spriteHauteur = 150;
    dofus->pages.pageJeu.spriteGifSword[0].spriteX = 137;
    dofus->pages.pageJeu.spriteGifSword[0].spriteY = 0;
    dofus->pages.pageJeu.spriteGifSword[0].decalageXDecor = -30;
    dofus->pages.pageJeu.spriteGifSword[0].decalageYDecor = -62;

    dofus->pages.pageJeu.spriteGifSword[1].image = &dofus->tabBitmap[GIF_SWORD];
    dofus->pages.pageJeu.spriteGifSword[1].spriteLargeur = 155;
    dofus->pages.pageJeu.spriteGifSword[1].spriteHauteur = 150;
    dofus->pages.pageJeu.spriteGifSword[1].spriteX = 388;
    dofus->pages.pageJeu.spriteGifSword[1].spriteY = 0;
    dofus->pages.pageJeu.spriteGifSword[1].decalageXDecor = -30;
    dofus->pages.pageJeu.spriteGifSword[1].decalageYDecor = -70;

    dofus->pages.pageJeu.spriteGifSword[2].image = &dofus->tabBitmap[GIF_SWORD];
    dofus->pages.pageJeu.spriteGifSword[2].spriteLargeur = 251;
    dofus->pages.pageJeu.spriteGifSword[2].spriteHauteur = 150;
    dofus->pages.pageJeu.spriteGifSword[2].spriteX = 543;
    dofus->pages.pageJeu.spriteGifSword[2].spriteY = 0;
    dofus->pages.pageJeu.spriteGifSword[2].decalageXDecor = -30;
    dofus->pages.pageJeu.spriteGifSword[2].decalageYDecor = -70;

    dofus->pages.pageJeu.spriteGifSword[3].image = &dofus->tabBitmap[GIF_SWORD];
    dofus->pages.pageJeu.spriteGifSword[3].spriteLargeur = 251;
    dofus->pages.pageJeu.spriteGifSword[3].spriteHauteur = 150;
    dofus->pages.pageJeu.spriteGifSword[3].spriteX = 794;
    dofus->pages.pageJeu.spriteGifSword[3].spriteY = 0;
    dofus->pages.pageJeu.spriteGifSword[3].decalageXDecor = -30;
    dofus->pages.pageJeu.spriteGifSword[3].decalageYDecor = -70;

    dofus->pages.pageJeu.spriteGifSword[4].image = &dofus->tabBitmap[GIF_SWORD];
    dofus->pages.pageJeu.spriteGifSword[4].spriteLargeur = 251;
    dofus->pages.pageJeu.spriteGifSword[4].spriteHauteur = 150;
    dofus->pages.pageJeu.spriteGifSword[4].spriteX = 1044;
    dofus->pages.pageJeu.spriteGifSword[4].spriteY = 0;
    dofus->pages.pageJeu.spriteGifSword[4].decalageXDecor = -55;
    dofus->pages.pageJeu.spriteGifSword[4].decalageYDecor = -80;

    dofus->pages.pageJeu.spriteGifSword[5].image = &dofus->tabBitmap[GIF_SWORD];
    dofus->pages.pageJeu.spriteGifSword[5].spriteLargeur = 250;
    dofus->pages.pageJeu.spriteGifSword[5].spriteHauteur = 150;
    dofus->pages.pageJeu.spriteGifSword[5].spriteX = 1295;
    dofus->pages.pageJeu.spriteGifSword[5].spriteY = 0;
    dofus->pages.pageJeu.spriteGifSword[5].decalageXDecor = -70;
    dofus->pages.pageJeu.spriteGifSword[5].decalageYDecor = -80;

    dofus->pages.pageJeu.spriteGifSword[6].image = &dofus->tabBitmap[GIF_SWORD];
    dofus->pages.pageJeu.spriteGifSword[6].spriteLargeur = 251;
    dofus->pages.pageJeu.spriteGifSword[6].spriteHauteur = 150;
    dofus->pages.pageJeu.spriteGifSword[6].spriteX = 1640;
    dofus->pages.pageJeu.spriteGifSword[6].spriteY = 0;
    dofus->pages.pageJeu.spriteGifSword[6].decalageXDecor = 0;
    dofus->pages.pageJeu.spriteGifSword[6].decalageYDecor = -70;

    dofus->pages.pageJeu.spriteGifSword[7].image = &dofus->tabBitmap[GIF_SWORD];
    dofus->pages.pageJeu.spriteGifSword[7].spriteLargeur = 250;
    dofus->pages.pageJeu.spriteGifSword[7].spriteHauteur = 151;
    dofus->pages.pageJeu.spriteGifSword[7].spriteX = 1891;
    dofus->pages.pageJeu.spriteGifSword[7].spriteY = 0;
    dofus->pages.pageJeu.spriteGifSword[7].decalageXDecor = -30;
    dofus->pages.pageJeu.spriteGifSword[7].decalageYDecor = -70;

}

void affichageGifWater(Dofus* dofus){
    if (dofus->pages.pageJeu.animSortFeca && dofus->joueurActif->nbPA > 0) {
        if (dofus->interactionExterieure.compteurTimer <= 4) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[0].image,
                                  dofus->pages.pageJeu.spriteGifWater[0].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[0].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[0].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[0].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[0].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[0].decalageYDecor, 0);

        } else if (dofus->interactionExterieure.compteurTimer <= 8) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[1].image,
                                  dofus->pages.pageJeu.spriteGifWater[1].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[1].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[1].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[1].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[1].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[1].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 12) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[2].image,
                                  dofus->pages.pageJeu.spriteGifWater[2].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[2].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[2].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[2].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[2].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[2].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 16) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[3].image,
                                  dofus->pages.pageJeu.spriteGifWater[3].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[3].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[3].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[3].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[3].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[3].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 19) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[4].image,
                                  dofus->pages.pageJeu.spriteGifWater[4].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[4].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[4].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[4].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[4].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[4].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 23) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[5].image,
                                  dofus->pages.pageJeu.spriteGifWater[5].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[5].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[5].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[5].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[5].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[5].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 27) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[6].image,
                                  dofus->pages.pageJeu.spriteGifWater[6].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[6].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[6].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[6].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[6].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[6].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 30) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[7].image,
                                  dofus->pages.pageJeu.spriteGifWater[7].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[7].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[7].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[7].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[7].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[7].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 33) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[8].image,
                                  dofus->pages.pageJeu.spriteGifWater[8].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[8].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[8].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[8].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[8].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[8].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 36) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[9].image,
                                  dofus->pages.pageJeu.spriteGifWater[9].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[9].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[9].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[9].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[9].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[9].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 39) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[10].image,
                                  dofus->pages.pageJeu.spriteGifWater[10].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[10].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[10].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[10].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[10].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[10].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 42) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[11].image,
                                  dofus->pages.pageJeu.spriteGifWater[11].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[11].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[11].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[11].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[11].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[11].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 45) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[12].image,
                                  dofus->pages.pageJeu.spriteGifWater[12].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[12].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[12].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[12].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[12].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[12].decalageYDecor, 0);

        } else if (dofus->interactionExterieure.compteurTimer <= 48) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[13].image,
                                  dofus->pages.pageJeu.spriteGifWater[13].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[13].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[13].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[13].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[13].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[13].decalageYDecor, 0);

        }
        else if (dofus->interactionExterieure.compteurTimer <= 51) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[14].image,
                                  dofus->pages.pageJeu.spriteGifWater[14].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[14].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[14].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[14].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[14].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[14].decalageYDecor, 0);

        }else if (dofus->interactionExterieure.compteurTimer <= 54) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[15].image,
                                  dofus->pages.pageJeu.spriteGifWater[15].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[15].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[15].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[15].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[15].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[15].decalageYDecor, 0);

        }else if (dofus->interactionExterieure.compteurTimer <= 57) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[16].image,
                                  dofus->pages.pageJeu.spriteGifWater[16].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[16].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[16].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[16].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[16].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[16].decalageYDecor, 0);

        }else if (dofus->interactionExterieure.compteurTimer <= 60) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifWater[17].image,
                                  dofus->pages.pageJeu.spriteGifWater[17].spriteX,
                                  dofus->pages.pageJeu.spriteGifWater[17].spriteY,
                                  dofus->pages.pageJeu.spriteGifWater[17].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifWater[17].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifWater[17].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifWater[17].decalageYDecor, 0);

        }
    }
}

void affichageGifFire(Dofus* dofus, int celluleX, int celluleY){
    if (dofus->pages.pageJeu.animSortEca && dofus->joueurActif->nbPA > 0) {
        if (dofus->interactionExterieure.compteurTimer <= 4) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[0].image,
                                  dofus->pages.pageJeu.spriteGifFire[0].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[0].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[0].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[0].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[0].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[0].decalageYDecor, 0);

        } else if (dofus->interactionExterieure.compteurTimer <= 9) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[1].image,
                                  dofus->pages.pageJeu.spriteGifFire[1].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[1].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[1].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[1].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[1].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[1].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 13) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[2].image,
                                  dofus->pages.pageJeu.spriteGifFire[2].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[2].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[2].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[2].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[2].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[2].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 18) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[3].image,
                                  dofus->pages.pageJeu.spriteGifFire[3].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[3].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[3].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[3].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[3].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[3].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 22) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[4].image,
                                  dofus->pages.pageJeu.spriteGifFire[4].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[4].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[4].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[4].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[4].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[4].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 27) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[5].image,
                                  dofus->pages.pageJeu.spriteGifFire[5].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[5].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[5].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[5].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[5].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[5].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 31) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[6].image,
                                  dofus->pages.pageJeu.spriteGifFire[6].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[6].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[6].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[6].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[6].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[6].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 36) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[7].image,
                                  dofus->pages.pageJeu.spriteGifFire[7].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[7].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[7].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[7].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[7].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[7].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 40) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[8].image,
                                  dofus->pages.pageJeu.spriteGifFire[8].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[8].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[8].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[8].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[8].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[8].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 44) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[9].image,
                                  dofus->pages.pageJeu.spriteGifFire[9].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[9].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[9].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[9].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[9].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[9].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 49) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[10].image,
                                  dofus->pages.pageJeu.spriteGifFire[10].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[10].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[10].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[10].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[10].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[10].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 54) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[11].image,
                                  dofus->pages.pageJeu.spriteGifFire[11].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[11].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[11].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[11].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[11].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[11].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 60) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifFire[12].image,
                                  dofus->pages.pageJeu.spriteGifFire[12].spriteX,
                                  dofus->pages.pageJeu.spriteGifFire[12].spriteY,
                                  dofus->pages.pageJeu.spriteGifFire[12].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifFire[12].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifFire[12].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifFire[12].decalageYDecor, 0);


        }
    }
}

void affichageGifBow(Dofus* dofus){
    if (dofus->pages.pageJeu.animSortOsa && dofus->joueurActif->nbPA > 0) {
        if (dofus->interactionExterieure.compteurTimer <= 4) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[0].image,
                                  dofus->pages.pageJeu.spriteGifBow[0].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[0].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[0].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[0].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[0].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[0].decalageYDecor, 0);

        } else if (dofus->interactionExterieure.compteurTimer <= 8) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[1].image,
                                  dofus->pages.pageJeu.spriteGifBow[1].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[1].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[1].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[1].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[1].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[1].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 12) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[2].image,
                                  dofus->pages.pageJeu.spriteGifBow[2].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[2].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[2].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[2].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[2].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[2].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 16) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[3].image,
                                  dofus->pages.pageJeu.spriteGifBow[3].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[3].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[3].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[3].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[3].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[3].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 19) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[4].image,
                                  dofus->pages.pageJeu.spriteGifBow[4].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[4].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[4].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[4].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[4].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[4].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 23) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[5].image,
                                  dofus->pages.pageJeu.spriteGifBow[5].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[5].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[5].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[5].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[5].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[5].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 27) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[6].image,
                                  dofus->pages.pageJeu.spriteGifBow[6].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[6].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[6].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[6].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[6].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[6].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 30) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[7].image,
                                  dofus->pages.pageJeu.spriteGifBow[7].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[7].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[7].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[7].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[7].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[7].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 33) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[8].image,
                                  dofus->pages.pageJeu.spriteGifBow[8].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[8].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[8].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[8].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[8].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[8].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 36) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[9].image,
                                  dofus->pages.pageJeu.spriteGifBow[9].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[9].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[9].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[9].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[9].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[9].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 39) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[10].image,
                                  dofus->pages.pageJeu.spriteGifBow[10].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[10].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[10].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[10].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[10].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[10].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 43) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[11].image,
                                  dofus->pages.pageJeu.spriteGifBow[11].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[11].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[11].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[11].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[11].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[11].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 47) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[12].image,
                                  dofus->pages.pageJeu.spriteGifBow[12].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[12].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[12].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[12].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[12].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[12].decalageYDecor, 0);

        } else if (dofus->interactionExterieure.compteurTimer <= 52) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[13].image,
                                  dofus->pages.pageJeu.spriteGifBow[13].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[13].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[13].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[13].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[13].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[13].decalageYDecor, 0);

        }
        else if (dofus->interactionExterieure.compteurTimer <= 56) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[14].image,
                                  dofus->pages.pageJeu.spriteGifBow[14].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[14].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[14].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[14].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[14].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[14].decalageYDecor, 0);

        }else if (dofus->interactionExterieure.compteurTimer <= 60) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifBow[15].image,
                                  dofus->pages.pageJeu.spriteGifBow[15].spriteX,
                                  dofus->pages.pageJeu.spriteGifBow[15].spriteY,
                                  dofus->pages.pageJeu.spriteGifBow[15].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifBow[15].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifBow[15].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifBow[15].decalageYDecor, 0);

        }
    }
}

void affichageGifSword(Dofus* dofus) {
    if (dofus->pages.pageJeu.animSortIop && dofus->joueurActif->nbPA > 0) {
        if (dofus->interactionExterieure.compteurTimer <= 8) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifSword[0].image,
                                  dofus->pages.pageJeu.spriteGifSword[0].spriteX,
                                  dofus->pages.pageJeu.spriteGifSword[0].spriteY,
                                  dofus->pages.pageJeu.spriteGifSword[0].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifSword[0].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifSword[0].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifSword[0].decalageYDecor, 0);

        } else if (dofus->interactionExterieure.compteurTimer <= 16) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifSword[1].image,
                                  dofus->pages.pageJeu.spriteGifSword[1].spriteX,
                                  dofus->pages.pageJeu.spriteGifSword[1].spriteY,
                                  dofus->pages.pageJeu.spriteGifSword[1].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifSword[1].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifSword[1].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifSword[1].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 24) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifSword[2].image,
                                  dofus->pages.pageJeu.spriteGifSword[2].spriteX,
                                  dofus->pages.pageJeu.spriteGifSword[2].spriteY,
                                  dofus->pages.pageJeu.spriteGifSword[2].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifSword[2].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifSword[2].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifSword[2].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 32) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifSword[3].image,
                                  dofus->pages.pageJeu.spriteGifSword[3].spriteX,
                                  dofus->pages.pageJeu.spriteGifSword[3].spriteY,
                                  dofus->pages.pageJeu.spriteGifSword[3].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifSword[3].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifSword[3].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifSword[3].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 40) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifSword[4].image,
                                  dofus->pages.pageJeu.spriteGifSword[4].spriteX,
                                  dofus->pages.pageJeu.spriteGifSword[4].spriteY,
                                  dofus->pages.pageJeu.spriteGifSword[4].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifSword[4].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifSword[4].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifSword[4].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 48) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifSword[5].image,
                                  dofus->pages.pageJeu.spriteGifSword[5].spriteX,
                                  dofus->pages.pageJeu.spriteGifSword[5].spriteY,
                                  dofus->pages.pageJeu.spriteGifSword[5].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifSword[5].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifSword[5].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifSword[5].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 56) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifSword[6].image,
                                  dofus->pages.pageJeu.spriteGifSword[6].spriteX,
                                  dofus->pages.pageJeu.spriteGifSword[6].spriteY,
                                  dofus->pages.pageJeu.spriteGifSword[6].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifSword[6].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifSword[6].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifSword[6].decalageYDecor, 0);


        } else if (dofus->interactionExterieure.compteurTimer <= 60) {
            al_draw_bitmap_region(*dofus->pages.pageJeu.spriteGifSword[7].image,
                                  dofus->pages.pageJeu.spriteGifSword[7].spriteX,
                                  dofus->pages.pageJeu.spriteGifSword[7].spriteY,
                                  dofus->pages.pageJeu.spriteGifSword[7].spriteLargeur,
                                  dofus->pages.pageJeu.spriteGifSword[7].spriteHauteur,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenX +
                                  dofus->pages.pageJeu.spriteGifSword[7].decalageXDecor,
                                  dofus->map.mapTile[dofus->pages.pageJeu.animSorts.celluleY][dofus->pages.pageJeu.animSorts.celluleX].coordsXY.screenY +
                                  dofus->pages.pageJeu.spriteGifSword[7].decalageYDecor, 0);


        }
    }
}