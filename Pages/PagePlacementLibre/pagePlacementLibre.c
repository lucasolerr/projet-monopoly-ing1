#include "pagePlacementLibre.h"
#include "../../Map/map.h"

void afficherCarreDispo(Dofus* dofus){
    if(dofus->joueurActif == dofus->joueur){
        for (int y = 0; y < NBCELLULEY; y++) {
            for (int x = 0; x < NBCELLULEX; x++) {
                if ((x != 11 || y != 11) && (x != 10 || y != 11) && (x != 9 || y != 11) && (x != 11 || y != 10) && (x != 11 || y != 9) && (x != 10 || y != 10)) {
                    al_draw_bitmap(dofus->tabBitmap[IMG_HOVER_BLOC_PLEIN], dofus->map.mapTile[y][x].coordsXY.screenX,
                                   dofus->map.mapTile[y][x].coordsXY.screenY, 0);
                }
            }

        }
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[11][11].coordsXY.screenX,
                      dofus->map.mapTile[11][11].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[11][10].coordsXY.screenX,
                      dofus->map.mapTile[11][10].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[11][9].coordsXY.screenX,
                       dofus->map.mapTile[11][9].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[9][11].coordsXY.screenX,
                       dofus->map.mapTile[9][11].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[10][11].coordsXY.screenX,
                       dofus->map.mapTile[10][11].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[10][10].coordsXY.screenX,
                       dofus->map.mapTile[10][10].coordsXY.screenY, 0);
    } else if(dofus->joueurActif == dofus->joueur->next){
        for (int y = 0; y < NBCELLULEY; y++) {
            for (int x = 0; x < NBCELLULEX; x++) {
                if ((x != 1 || y != 1) && (x != 1 || y != 2) && (x != 1 || y != 3) && (x != 2 || y != 1) && (x != 3 || y != 1) && (x != 10 || y != 10)) {
                    al_draw_bitmap(dofus->tabBitmap[IMG_HOVER_BLOC_PLEIN], dofus->map.mapTile[y][x].coordsXY.screenX,
                                   dofus->map.mapTile[y][x].coordsXY.screenY, 0);
                }
            }

        }
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[1][1].coordsXY.screenX,
                       dofus->map.mapTile[1][1].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[2][1].coordsXY.screenX,
                       dofus->map.mapTile[2][1].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[3][1].coordsXY.screenX,
                       dofus->map.mapTile[3][1].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[1][2].coordsXY.screenX,
                       dofus->map.mapTile[1][2].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[1][3].coordsXY.screenX,
                       dofus->map.mapTile[1][3].coordsXY.screenY, 0);
    } else if (dofus->joueurActif == dofus->joueur->next->next && dofus->nbJoueurs > 2){
        for (int y = 0; y < NBCELLULEY; y++) {
            for (int x = 0; x < NBCELLULEX; x++) {
                if ((x != 9 || y != 1) && (x != 11 || y != 2) && (x != 11 || y != 3) && (x != 10 || y != 2) && (x != 9 || y != 1) && (x != 10 || y != 1)) {
                    al_draw_bitmap(dofus->tabBitmap[IMG_HOVER_BLOC_PLEIN], dofus->map.mapTile[y][x].coordsXY.screenX,
                                   dofus->map.mapTile[y][x].coordsXY.screenY, 0);
                }
            }

        }
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[1][9].coordsXY.screenX,
                       dofus->map.mapTile[1][9].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[2][11].coordsXY.screenX,
                       dofus->map.mapTile[2][11].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[3][11].coordsXY.screenX,
                       dofus->map.mapTile[3][11].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[2][10].coordsXY.screenX,
                       dofus->map.mapTile[2][10].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[1][9].coordsXY.screenX,
                       dofus->map.mapTile[1][9].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[1][10].coordsXY.screenX,
                       dofus->map.mapTile[1][10].coordsXY.screenY, 0);
    } else if (dofus->joueurActif == dofus->joueur->next->next->next && dofus->nbJoueurs > 2){
        for (int y = 0; y < NBCELLULEY; y++) {
            for (int x = 0; x < NBCELLULEX; x++) {
                if ((x != 1 || y != 11) && (x != 1 || y != 10) && (x != 1 || y != 9) && (x != 2 || y != 10) && (x != 3 || y != 11) && (x != 2 || y != 11)) {
                    al_draw_bitmap(dofus->tabBitmap[IMG_HOVER_BLOC_PLEIN], dofus->map.mapTile[y][x].coordsXY.screenX,
                                   dofus->map.mapTile[y][x].coordsXY.screenY, 0);
                }
            }

        }
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[11][1].coordsXY.screenX,
                       dofus->map.mapTile[1][11].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[10][1].coordsXY.screenX,
                       dofus->map.mapTile[10][1].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[9][1].coordsXY.screenX,
                       dofus->map.mapTile[9][1].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[10][2].coordsXY.screenX,
                       dofus->map.mapTile[10][2].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[11][3].coordsXY.screenX,
                       dofus->map.mapTile[11][3].coordsXY.screenY, 0);
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[11][2].coordsXY.screenX,
                       dofus->map.mapTile[11][2].coordsXY.screenY, 0);
    }
}

void affichageGeneralPlacementLibre(Dofus *dofus) {
    al_clear_to_color(BLANC);
    al_draw_bitmap(dofus->tabBitmap[LAVA_BG], 0, 0, 0);
    afficherFondMap(dofus);
    afficherContourTile(dofus);
    affichageHover(dofus);
    afficherCarreDispo(dofus);
    //affichageTexteDebug(dofus);
    afficherDecor(dofus);
    afficherJoueur(dofus);
    al_flip_display();
}

void afficherJoueur(Dofus* dofus){
    Joueurs* temp = dofus->joueur;
    for (int i = 0; i < dofus->nbJoueurs; i ++) {
        if (temp == dofus->joueurActif) {
            if (temp->ptrClasse == &dofus->classes[IOP]) {
                al_draw_bitmap_region(
                        *(dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                        dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                        dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                        dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                        dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                        dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].coordsXY.screenX +
                        10,
                        dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].coordsXY.screenY -
                        78, 0);
            } else if (temp->ptrClasse == &dofus->classes[FECA]) {
                al_draw_bitmap_region(
                        *(dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                        dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                        dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                        dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                        dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                        dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].coordsXY.screenX +
                        10,
                        dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].coordsXY.screenY -
                        78, 0);
            } else if (temp->ptrClasse == &dofus->classes[ECA]) {
                al_draw_bitmap_region(
                        *(dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                        dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                        dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                        dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                        dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                        dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].coordsXY.screenX +
                        10,
                        dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].coordsXY.screenY -
                        78, 0);

            } else if (temp->ptrClasse == &dofus->classes[OSA]) {
                al_draw_bitmap_region(
                        *(dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                        dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                        dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                        dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                        dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                        dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].coordsXY.screenX +
                        10,
                        dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].coordsXY.screenY -
                        78, 0);
            }
        } else {
            if (temp->ptrClasse == &dofus->classes[IOP]) {
                al_draw_bitmap_region(
                        *(dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                        dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                        dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                        dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                        dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                        dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenX +
                        10,
                        dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenY -
                        78, 0);
            } else if (temp->ptrClasse == &dofus->classes[FECA]) {
                al_draw_bitmap_region(
                        *(dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                        dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                        dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                        dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                        dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                        dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenX +
                        10,
                        dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenY -
                        78, 0);
            } else if (temp->ptrClasse == &dofus->classes[ECA]) {
                al_draw_bitmap_region(
                        *(dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                        dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                        dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                        dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                        dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                        dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenX +
                        10,
                        dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenY -
                        78, 0);

            } else if (temp->ptrClasse == &dofus->classes[OSA]) {
                al_draw_bitmap_region(
                        *(dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                        dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                        dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                        dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                        dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                        dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenX +
                        10,
                        dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenY -
                        78, 0);
            }
        }
        temp = temp->next;
    }
}

bool placementLibreCoinEnHautGauche(Dofus* dofus){
    if (dofus->allegro.event.mouse.button == 1 && (dofus->interactionExterieure.mouse.celluleIso.celluleX == 1 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 1)||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 2 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 1) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 3 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 1) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 1 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 2) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 1 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 3) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 1 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 2)) {
        return true;
    }
    return false;
}

bool placementLibreCoinEnBasDroite(Dofus* dofus){
    if (dofus->allegro.event.mouse.button == 1 && (dofus->interactionExterieure.mouse.celluleIso.celluleX == 11 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 11) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 10 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 11) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 9 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 11) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 10 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 10) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 11 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 9) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 11 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 10) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 11 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 11)) {
        return true;
    }
    return false;

}

bool placementLibreCoinEnHautDroite(Dofus* dofus){
    if (dofus->allegro.event.mouse.button == 1 && (dofus->interactionExterieure.mouse.celluleIso.celluleX == 9 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 1) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 10 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 1) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 11 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 1) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 11 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 2) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 11 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 3) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 10 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 2)) {
        return true;
    }
    return false;

}

bool placementLibreCoinEnBasGauche(Dofus* dofus){
    if (dofus->allegro.event.mouse.button == 1 && (dofus->interactionExterieure.mouse.celluleXY.celluleX == 1 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 11) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 1 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 10) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 1 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 9) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 2 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 11) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 2 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 10) ||
        (dofus->interactionExterieure.mouse.celluleIso.celluleX == 3 && dofus->interactionExterieure.mouse.celluleIso.celluleY == 11)) {
        return true;
    }
    return false;
}



void bouclePlacementLibre(Dofus *dofus) {
    int compteur = 0;
    dofus->joueurActif = dofus->joueur;


    initalisationDataMap(dofus);

    affichageGeneralPlacementLibre(dofus);

    al_set_mouse_xy(dofus->allegro.display, dofus->map.mapTile[11][11].coordsXY.screenX, dofus->map.mapTile[11][11].coordsXY.screenY);

    al_play_sample(dofus->allegro.music[SON_COMBAT],1, 0, 1, ALLEGRO_PLAYMODE_LOOP, 0);

    while (!dofus->pages.pagePlacementLibre.boolPagePlacementLibre) {

        if(dofus->interactionExterieure.mouse.boolChangementDeCelluleIso){
            dofus->dessin = true;
        }


        al_wait_for_event(dofus->allegro.queue, &dofus->allegro.event);

        if(compteur == dofus->nbJoueurs){
            dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
            dofus->pages.pageJeu.boolPageJeu = false;
            al_clear_to_color(NOIR);
            al_flip_display();
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            dofus->endGame = true;
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
            dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
            dofus->pages.pageJeu.boolPageJeu = true;
            dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
            exit(1);
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_AXES) {
            actualiserPositionSourisJoueur(dofus);
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {

            if(dofus->allegro.event.mouse.button == 1){
                if (!dofus->interactionExterieure.mouse.outOfMapBorders){
                    if(dofus->joueurActif == dofus->joueur){
                        if (placementLibreCoinEnBasDroite(dofus)) {
                            dofus->joueurActif->celluleActuelle.celluleX = dofus->interactionExterieure.mouse.celluleIso.celluleX;
                            dofus->joueurActif->celluleActuelle.celluleY = dofus->interactionExterieure.mouse.celluleIso.celluleY;
                            compteur += 1;
                            dofus->joueurActif = dofus->joueurActif->next;
                            al_set_mouse_xy(dofus->allegro.display, dofus->map.mapTile[1][3].coordsXY.screenX, dofus->map.mapTile[1][3].coordsXY.screenY);
                            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                        }
                    } else if (dofus->joueurActif == dofus->joueur->next) {
                        if(placementLibreCoinEnHautGauche(dofus)){
                            dofus->joueurActif->celluleActuelle.celluleX = dofus->interactionExterieure.mouse.celluleIso.celluleX;
                            dofus->joueurActif->celluleActuelle.celluleY = dofus->interactionExterieure.mouse.celluleIso.celluleY;
                            compteur += 1;
                            dofus->joueurActif = dofus->joueurActif->next;
                            al_set_mouse_xy(dofus->allegro.display, dofus->map.mapTile[1][3].coordsXY.screenX, dofus->map.mapTile[1][3].coordsXY.screenY);
                            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                        }
                    } else if (dofus->joueurActif == dofus->joueur->next->next){
                        if(placementLibreCoinEnHautDroite(dofus)){
                            dofus->joueurActif->celluleActuelle.celluleX = dofus->interactionExterieure.mouse.celluleIso.celluleX;
                            dofus->joueurActif->celluleActuelle.celluleY = dofus->interactionExterieure.mouse.celluleIso.celluleY;
                            compteur += 1;
                            dofus->joueurActif = dofus->joueurActif->next;
                            al_set_mouse_xy(dofus->allegro.display, dofus->map.mapTile[1][3].coordsXY.screenX, dofus->map.mapTile[1][3].coordsXY.screenY);
                            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                        }
                    } else if (dofus->joueurActif == dofus->joueur->next->next->next){
                        if(placementLibreCoinEnBasGauche(dofus)){
                            dofus->joueurActif->celluleActuelle.celluleX = dofus->interactionExterieure.mouse.celluleIso.celluleX;
                            dofus->joueurActif->celluleActuelle.celluleY = dofus->interactionExterieure.mouse.celluleIso.celluleY;
                            compteur += 1;
                            dofus->joueurActif = dofus->joueurActif->next;
                            al_set_mouse_xy(dofus->allegro.display, dofus->map.mapTile[1][3].coordsXY.screenX, dofus->map.mapTile[1][3].coordsXY.screenY);
                            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                        }
                    }
                }
            }
        }


        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP) {
            dofus->allegro.etatBoutonSouris = dofus->allegro.event.mouse.button;
            dofus->dessin = true;
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_TIMER) {
            if (dofus->dessin) {
                affichageGeneralPlacementLibre(dofus);
                dofus->dessin = false;
            }
        }
    }
}
