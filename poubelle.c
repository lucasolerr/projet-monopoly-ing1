#include "Structures/structures.h"
#include "Map/map.h"

void testerTousCheminsPossible(Dofus* dofus){
    bool conditionSurY = false;
    bool conditionSurX = false;
    bool conditionObstacle = false;
    dofus->map.compteurChemins = 0;
    for (int y = dofus->joueurActif->celluleActuelle.celluleY - 3; y < dofus->joueurActif->celluleActuelle.celluleY + 3; y++) {
        for (int x = dofus->joueurActif->celluleActuelle.celluleX - 3; x < dofus->joueurActif->celluleActuelle.celluleY + 3; x++) {
            if (!dofus->map.mapTile[y][x].blocPlein) {
                if (valeurAbsolue(
                        x -
                        dofus->joueurActif->celluleActuelle.celluleX) <
                    valeurAbsolue(y -
                                  dofus->joueurActif->celluleActuelle.celluleY)) {
                    conditionSurY = true;
                }

                if ((((y >
                       dofus->joueurActif->celluleActuelle.celluleY) &&
                      dofus->map.mapTile[y -
                                         2][x].blocPlein == 1 &&
                      (x ==
                       dofus->joueurActif->celluleActuelle.celluleX) && (valeurAbsolue(
                        dofus->joueurActif->celluleActuelle.celluleY -
                        y) != 1)) ||
                     (y <
                      dofus->joueurActif->celluleActuelle.celluleY &&
                      dofus->map.mapTile[y +
                                         2][x].blocPlein == 1 &&
                      (x ==
                       dofus->joueurActif->celluleActuelle.celluleX) && (dofus->joueurActif->celluleActuelle.celluleY -
                                                                         y !=
                                                                         1)) ||
                     (x >
                      dofus->joueurActif->celluleActuelle.celluleX &&
                      dofus->map.mapTile[y][
                              x - 2].blocPlein == 1 &&
                      (y ==
                       dofus->joueurActif->celluleActuelle.celluleY) && (valeurAbsolue(
                             dofus->joueurActif->celluleActuelle.celluleX -
                             x) != 1)) ||
                     (x <
                      dofus->joueurActif->celluleActuelle.celluleX &&
                      dofus->map.mapTile[y][
                              x + 2].blocPlein == 1 &&
                      (y ==
                       dofus->joueurActif->celluleActuelle.celluleY) && (valeurAbsolue(
                             dofus->joueurActif->celluleActuelle.celluleX -
                             x) != 1)))
                    || ((y >
                         dofus->joueurActif->celluleActuelle.celluleY) &&
                        dofus->map.mapTile[y -
                                           1][x].blocPlein == 1 &&
                        (x ==
                         dofus->joueurActif->celluleActuelle.celluleX)) ||
                    (y <
                     dofus->joueurActif->celluleActuelle.celluleY &&
                     dofus->map.mapTile[y +
                                        1][x].blocPlein == 1 &&
                     (x ==
                      dofus->joueurActif->celluleActuelle.celluleX)) ||
                    (x >
                     dofus->joueurActif->celluleActuelle.celluleX &&
                     dofus->map.mapTile[y][
                             x - 1].blocPlein == 1 &&
                     (y ==
                      dofus->joueurActif->celluleActuelle.celluleY)) ||
                    (x <
                     dofus->joueurActif->celluleActuelle.celluleX &&
                     dofus->map.mapTile[y][
                             x + 1].blocPlein == 1 &&
                     (y ==
                      dofus->joueurActif->celluleActuelle.celluleY)) &&
                    (x ==
                     dofus->joueurActif->celluleActuelle.celluleX ||
                     y ==
                     dofus->joueurActif->celluleActuelle.celluleY)) {
                    conditionObstacle = true;
                }

                if (valeurAbsolue(
                        x -
                        dofus->joueurActif->celluleActuelle.celluleX) >=
                    valeurAbsolue(y -
                                  dofus->joueurActif->celluleActuelle.celluleY)) {
                    conditionSurX = true;
                }
                int temp = valeurAbsolue(
                        y -
                        dofus->joueurActif->celluleActuelle.celluleY) +
                           valeurAbsolue(x -
                                         dofus->joueurActif->celluleActuelle.celluleX);
                if (!conditionObstacle) {
                    if (temp <= dofus->joueurActif->nbPmActuels) {
                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->joueurActif->celluleActuelle.celluleX;
                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->joueurActif->celluleActuelle.celluleY;

                        for (int i = 0; i < temp; i++) {

                            if (conditionSurY) {
                                if (!dofus->map.mapTile[
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins -
                                                1].celluleY +
                                        1][dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins -
                                        1].celluleX].blocPlein &&
                                    y >
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                               1].celluleY) {
                                    if (dofus->map.compteurChemins != 0) {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                                dofus->map.tabCheminDessin[
                                                        dofus->map.compteurChemins - 1].celluleY + 1;
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleX;
                                    } else {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY += 1;
                                    }
                                } else if (!dofus->map.mapTile[
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins -
                                                1].celluleY - 1]
                                [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                            1].celluleX].blocPlein &&
                                           y <
                                           dofus->map.tabCheminDessin[
                                                   dofus->map.compteurChemins -
                                                   1].celluleY) {
                                    if (dofus->map.compteurChemins != 0) {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                                dofus->map.tabCheminDessin[
                                                        dofus->map.compteurChemins - 1].celluleY - 1;
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleX;
                                    } else {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY -= 1;
                                    }
                                } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleY]
                                [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                            1].celluleX + 1].blocPlein &&
                                           x >
                                           dofus->map.tabCheminDessin[
                                                   dofus->map.compteurChemins -
                                                   1].celluleX) {
                                    if (dofus->map.compteurChemins != 0) {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                                dofus->map.tabCheminDessin[
                                                        dofus->map.compteurChemins - 1].celluleX + 1;
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleY;
                                    } else {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX += 1;
                                    }
                                } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleY]
                                [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                            1].celluleX - 1].blocPlein &&
                                           x <
                                           dofus->map.tabCheminDessin[
                                                   dofus->map.compteurChemins -
                                                   1].celluleX) {
                                    if (dofus->map.compteurChemins != 0) {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                                dofus->map.tabCheminDessin[
                                                        dofus->map.compteurChemins - 1].celluleX - 1;
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleY;
                                    } else {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX -= 1;
                                    }
                                }
                            } else if (conditionSurX) {
                                if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleY]
                                [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                            1].celluleX - 1].blocPlein &&
                                    x <
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                               1].celluleX) {
                                    if (dofus->map.compteurChemins != 0) {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                                dofus->map.tabCheminDessin[
                                                        dofus->map.compteurChemins - 1].celluleX - 1;
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleY;
                                    } else {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX -= 1;
                                    }
                                } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleY]
                                [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                            1].celluleX + 1].blocPlein &&
                                           x >
                                           dofus->map.tabCheminDessin[
                                                   dofus->map.compteurChemins -
                                                   1].celluleX) {
                                    if (dofus->map.compteurChemins != 0) {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                                dofus->map.tabCheminDessin[
                                                        dofus->map.compteurChemins - 1].celluleX + 1;
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleY;
                                    } else {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX += 1;
                                    }
                                } else if (!dofus->map.mapTile[
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins -
                                                1].celluleY + 1]
                                [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                            1].celluleX].blocPlein &&
                                           y >
                                           dofus->map.tabCheminDessin[
                                                   dofus->map.compteurChemins -
                                                   1].celluleY) {
                                    if (dofus->map.compteurChemins != 0) {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                                dofus->map.tabCheminDessin[
                                                        dofus->map.compteurChemins - 1].celluleY + 1;
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleX;
                                    } else {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY += 1;
                                    }
                                } else if (!dofus->map.mapTile[
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins -
                                                1].celluleY - 1]
                                [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                            1].celluleX].blocPlein &&
                                           y <
                                           dofus->map.tabCheminDessin[
                                                   dofus->map.compteurChemins -
                                                   1].celluleY) {
                                    if (dofus->map.compteurChemins != 0) {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                                dofus->map.tabCheminDessin[
                                                        dofus->map.compteurChemins - 1].celluleY - 1;
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleX;
                                    } else {
                                        dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY -= 1;
                                    }
                                }
                            } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                    dofus->map.compteurChemins - 1].celluleY]
                            [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                        1].celluleX +
                             1].blocPlein &&
                                       x >
                                       dofus->map.tabCheminDessin[
                                               dofus->map.compteurChemins -
                                               1].celluleX) {
                                if (dofus->map.compteurChemins != 0) {
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                            dofus->map.tabCheminDessin[
                                                    dofus->map.compteurChemins -
                                                    1].celluleX + 1;
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                            dofus->map.compteurChemins - 1].celluleY;
                                } else {
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX += 1;
                                }
                            } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                    dofus->map.compteurChemins - 1].celluleY]
                            [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                        1].celluleX -
                             1].blocPlein &&
                                       x <
                                       dofus->map.tabCheminDessin[
                                               dofus->map.compteurChemins -
                                               1].celluleX) {
                                if (dofus->map.compteurChemins != 0) {
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                            dofus->map.tabCheminDessin[
                                                    dofus->map.compteurChemins -
                                                    1].celluleX - 1;
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                            dofus->map.compteurChemins - 1].celluleY;
                                } else {
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX -= 1;
                                }
                            } else if (!dofus->map.mapTile[
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                               1].celluleY + 1]
                            [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                        1].celluleX].blocPlein &&
                                       y >
                                       dofus->map.tabCheminDessin[
                                               dofus->map.compteurChemins -
                                               1].celluleY) {
                                if (dofus->map.compteurChemins != 0) {
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                            dofus->map.tabCheminDessin[
                                                    dofus->map.compteurChemins -
                                                    1].celluleY + 1;
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                            dofus->map.compteurChemins - 1].celluleX;
                                } else {
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY += 1;
                                }
                            } else if (!dofus->map.mapTile[
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                               1].celluleY - 1]
                            [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                        1].celluleX].blocPlein &&
                                       y <
                                       dofus->map.tabCheminDessin[
                                               dofus->map.compteurChemins -
                                               1].celluleY) {
                                if (dofus->map.compteurChemins != 0) {
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                            dofus->map.tabCheminDessin[
                                                    dofus->map.compteurChemins -
                                                    1].celluleY - 1;
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                            dofus->map.compteurChemins - 1].celluleX;
                                } else {
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY -= 1;
                                }
                            }
                            dofus->map.compteurChemins++;
                        }
                    }
                }
            }
        }
    }
}

void dessinerTabChemin(Dofus* dofus){
    testerTousCheminsPossible(dofus);
    for (int i = 0; i < dofus->map.compteurChemins; i++) {
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[dofus->map.tabCheminDessin[i].celluleY][dofus->map.tabCheminDessin[i].celluleX].coordsXY.screenX, dofus->map.mapTile[dofus->map.tabCheminDessin[i].celluleY][dofus->map.tabCheminDessin[i].celluleX].coordsXY.screenY, 0);
    }
}

void dessinerTabCheminHover(Dofus* dofus){
    dofus->map.compteurChemins = 0;
    bool conditionSurY = false;
    bool conditionSurX = false;
    bool conditionObstacle = false;
    if (!dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein) {
        if (valeurAbsolue(
                dofus->interactionExterieure.mouse.celluleIso.celluleX - dofus->joueurActif->celluleActuelle.celluleX) <
            valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleY -
                          dofus->joueurActif->celluleActuelle.celluleY)) {
            conditionSurY = true;
        }

        if((((dofus->interactionExterieure.mouse.celluleIso.celluleY > dofus->joueurActif->celluleActuelle.celluleY) && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY - 2][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein == 1  && (dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX) && (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - dofus->interactionExterieure.mouse.celluleIso.celluleY) != 1)) || (dofus->interactionExterieure.mouse.celluleIso.celluleY < dofus->joueurActif->celluleActuelle.celluleY && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY + 2][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein == 1  && (dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX) && (dofus->joueurActif->celluleActuelle.celluleY - dofus->interactionExterieure.mouse.celluleIso.celluleY != 1)) || (dofus->interactionExterieure.mouse.celluleIso.celluleX > dofus->joueurActif->celluleActuelle.celluleX && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX - 2].blocPlein == 1  && (dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY) && (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - dofus->interactionExterieure.mouse.celluleIso.celluleX) != 1)) || (dofus->interactionExterieure.mouse.celluleIso.celluleX < dofus->joueurActif->celluleActuelle.celluleX && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX + 2].blocPlein == 1 && (dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY) && (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - dofus->interactionExterieure.mouse.celluleIso.celluleX) != 1)))
           ||   ((dofus->interactionExterieure.mouse.celluleIso.celluleY > dofus->joueurActif->celluleActuelle.celluleY) && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY - 1][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein == 1  && (dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX)) || (dofus->interactionExterieure.mouse.celluleIso.celluleY < dofus->joueurActif->celluleActuelle.celluleY && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY + 1][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein == 1  && (dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX)) || (dofus->interactionExterieure.mouse.celluleIso.celluleX > dofus->joueurActif->celluleActuelle.celluleX && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX - 1].blocPlein == 1  && (dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY)) || (dofus->interactionExterieure.mouse.celluleIso.celluleX < dofus->joueurActif->celluleActuelle.celluleX && dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX + 1].blocPlein == 1 && (dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY)) && (dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX || dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY)){
            conditionObstacle = true;
        }

        if (valeurAbsolue(
                dofus->interactionExterieure.mouse.celluleIso.celluleX -
                dofus->joueurActif->celluleActuelle.celluleX) >=
            valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleY -
                          dofus->joueurActif->celluleActuelle.celluleY)) {
            conditionSurX = true;
        }
        int temp = valeurAbsolue(
                dofus->interactionExterieure.mouse.celluleIso.celluleY - dofus->joueurActif->celluleActuelle.celluleY) +
                   valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleX -
                                 dofus->joueurActif->celluleActuelle.celluleX);
        if (!conditionObstacle) {
            if (temp <= dofus->joueurActif->nbPmActuels) {
                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->joueurActif->celluleActuelle.celluleX;
                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->joueurActif->celluleActuelle.celluleY;

                for (int i = 0; i < temp; i++) {

                    if (conditionSurY) {
                        if (!dofus->map.mapTile[
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                           1].celluleY +
                                1][dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                              1].celluleX].blocPlein &&
                            dofus->interactionExterieure.mouse.celluleIso.celluleY >
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                       1].celluleY) {
                            if (dofus->map.compteurChemins != 0) {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleY + 1;
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleX;
                            } else {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY += 1;
                            }
                        } else if (!dofus->map.mapTile[
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                           1].celluleY - 1]
                        [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                    1].celluleX].blocPlein &&
                                   dofus->interactionExterieure.mouse.celluleIso.celluleY <
                                   dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                              1].celluleY) {
                            if (dofus->map.compteurChemins != 0) {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleY - 1;
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleX;
                            } else {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY -= 1;
                            }
                        } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                dofus->map.compteurChemins - 1].celluleY]
                        [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                    1].celluleX + 1].blocPlein &&
                                   dofus->interactionExterieure.mouse.celluleIso.celluleX >
                                   dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                              1].celluleX) {
                            if (dofus->map.compteurChemins != 0) {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleX + 1;
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleY;
                            } else {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX += 1;
                            }
                        } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                dofus->map.compteurChemins - 1].celluleY]
                        [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                    1].celluleX - 1].blocPlein &&
                                   dofus->interactionExterieure.mouse.celluleIso.celluleX <
                                   dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                              1].celluleX) {
                            if (dofus->map.compteurChemins != 0) {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleX - 1;
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleY;
                            } else {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX -= 1;
                            }
                        }
                    } else if (conditionSurX) {
                        if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                dofus->map.compteurChemins - 1].celluleY]
                        [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                    1].celluleX - 1].blocPlein &&
                            dofus->interactionExterieure.mouse.celluleIso.celluleX <
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                       1].celluleX) {
                            if (dofus->map.compteurChemins != 0) {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleX - 1;
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleY;
                            } else {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX -= 1;
                            }
                        } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                                dofus->map.compteurChemins - 1].celluleY]
                        [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                    1].celluleX + 1].blocPlein &&
                                   dofus->interactionExterieure.mouse.celluleIso.celluleX >
                                   dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                              1].celluleX) {
                            if (dofus->map.compteurChemins != 0) {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleX + 1;
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleY;
                            } else {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX += 1;
                            }
                        } else if (!dofus->map.mapTile[
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                           1].celluleY + 1]
                        [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                    1].celluleX].blocPlein &&
                                   dofus->interactionExterieure.mouse.celluleIso.celluleY >
                                   dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                              1].celluleY) {
                            if (dofus->map.compteurChemins != 0) {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleY + 1;
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleX;
                            } else {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY += 1;
                            }
                        } else if (!dofus->map.mapTile[
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                           1].celluleY - 1]
                        [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                    1].celluleX].blocPlein &&
                                   dofus->interactionExterieure.mouse.celluleIso.celluleY <
                                   dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                              1].celluleY) {
                            if (dofus->map.compteurChemins != 0) {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                        dofus->map.tabCheminDessin[
                                                dofus->map.compteurChemins - 1].celluleY - 1;
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                        dofus->map.compteurChemins - 1].celluleX;
                            } else {
                                dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY -= 1;
                            }
                        }
                    } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                            dofus->map.compteurChemins - 1].celluleY]
                    [dofus->map.tabCheminDessin[dofus->map.compteurChemins - 1].celluleX +
                     1].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleX >
                               dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                          1].celluleX) {
                        if (dofus->map.compteurChemins != 0) {
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                               1].celluleX + 1;
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                    dofus->map.compteurChemins - 1].celluleY;
                        } else {
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX += 1;
                        }
                    } else if (!dofus->map.mapTile[dofus->map.tabCheminDessin[
                            dofus->map.compteurChemins - 1].celluleY]
                    [dofus->map.tabCheminDessin[dofus->map.compteurChemins - 1].celluleX -
                     1].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleX <
                               dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                          1].celluleX) {
                        if (dofus->map.compteurChemins != 0) {
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX =
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                               1].celluleX - 1;
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY = dofus->map.tabCheminDessin[
                                    dofus->map.compteurChemins - 1].celluleY;
                        } else {
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX -= 1;
                        }
                    } else if (!dofus->map.mapTile[
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                       1].celluleY + 1]
                    [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                1].celluleX].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleY >
                               dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                          1].celluleY) {
                        if (dofus->map.compteurChemins != 0) {
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                               1].celluleY + 1;
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                    dofus->map.compteurChemins - 1].celluleX;
                        } else {
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY += 1;
                        }
                    } else if (!dofus->map.mapTile[
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                       1].celluleY - 1]
                    [dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                1].celluleX].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleY <
                               dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                          1].celluleY) {
                        if (dofus->map.compteurChemins != 0) {
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY =
                                    dofus->map.tabCheminDessin[dofus->map.compteurChemins -
                                                               1].celluleY - 1;
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleX = dofus->map.tabCheminDessin[
                                    dofus->map.compteurChemins - 1].celluleX;
                        } else {
                            dofus->map.tabCheminDessin[dofus->map.compteurChemins].celluleY -= 1;
                        }
                    }
                    dofus->map.compteurChemins++;
                }
            }
        }
    }
    for (int i = 0; i < dofus->map.compteurChemins; i++) {
        al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[dofus->map.tabCheminDessin[i].celluleY][dofus->map.tabCheminDessin[i].celluleX].coordsXY.screenX, dofus->map.mapTile[dofus->map.tabCheminDessin[i].celluleY][dofus->map.tabCheminDessin[i].celluleX].coordsXY.screenY, 0);
    }
}



void calculDeplacementEnFonctionDesPM(Dofus *dofus) {
    int temp = valeurAbsolue(
            dofus->interactionExterieure.mouse.celluleIso.celluleY - dofus->joueurActif->celluleActuelle.celluleY) +
               valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleX -
                             dofus->joueurActif->celluleActuelle.celluleX);
    if (temp <= dofus->joueurActif->nbPm) {
        actualisationCoordsDeplacementDuJoueurTeleportation(dofus);
    }
}

void calculDeplacementEnFonctionDesPMSelonXetY(Dofus *dofus) {

    if (valeurAbsolue(
            dofus->interactionExterieure.mouse.celluleIso.celluleY - dofus->joueurActif->celluleActuelle.celluleY) +
        valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleX -
                      dofus->joueurActif->celluleActuelle.celluleX) <= dofus->joueurActif->nbPmActuels) {
        dofus->joueurActif->tabCheminCellules[0].celluleX = dofus->joueurActif->celluleActuelle.celluleX;
        dofus->joueurActif->tabCheminCellules[0].celluleY = dofus->joueurActif->celluleActuelle.celluleY;
        for (int i = 1; i <= valeurAbsolue(
                dofus->interactionExterieure.mouse.celluleIso.celluleY - dofus->joueurActif->celluleActuelle.celluleY) +
                             valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleX -
                                           dofus->joueurActif->celluleActuelle.celluleX); i++) {


            if (dofus->interactionExterieure.mouse.celluleIso.celluleX >
                dofus->joueurActif->tabCheminCellules[i - 1].celluleX &&
                !dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[i - 1].celluleY][
                        dofus->joueurActif->tabCheminCellules[i - 1].celluleX + 1].blocPlein) {
                dofus->joueurActif->tabCheminCellules[i].celluleX =
                        dofus->joueurActif->tabCheminCellules[i - 1].celluleX + 1;
                dofus->joueurActif->tabCheminCellules[i].celluleY = dofus->joueurActif->tabCheminCellules[i -
                                                                                                          1].celluleY;
            } else if (dofus->interactionExterieure.mouse.celluleIso.celluleX <
                       dofus->joueurActif->tabCheminCellules[i - 1].celluleX &&
                       !dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[i - 1].celluleY][
                               dofus->joueurActif->tabCheminCellules[i - 1].celluleX - 1].blocPlein) {
                dofus->joueurActif->tabCheminCellules[i].celluleX =
                        dofus->joueurActif->tabCheminCellules[i - 1].celluleX - 1;
                dofus->joueurActif->tabCheminCellules[i].celluleY = dofus->joueurActif->tabCheminCellules[i -
                                                                                                          1].celluleY;
            } else if (dofus->interactionExterieure.mouse.celluleIso.celluleY >
                       dofus->joueurActif->tabCheminCellules[i - 1].celluleY &&
                       !dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[i - 1].celluleY +
                                           1][dofus->joueurActif->tabCheminCellules[i - 1].celluleX].blocPlein) {
                dofus->joueurActif->tabCheminCellules[i].celluleX = dofus->joueurActif->tabCheminCellules[i -
                                                                                                          1].celluleX;
                dofus->joueurActif->tabCheminCellules[i].celluleY =
                        dofus->joueurActif->tabCheminCellules[i - 1].celluleY + 1;
            } else if (dofus->interactionExterieure.mouse.celluleIso.celluleY <
                       dofus->joueurActif->tabCheminCellules[i - 1].celluleY &&
                       !dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[i - 1].celluleY -
                                           1][dofus->joueurActif->tabCheminCellules[i - 1].celluleX].blocPlein) {
                dofus->joueurActif->tabCheminCellules[i].celluleX = dofus->joueurActif->tabCheminCellules[i -
                                                                                                          1].celluleX;
                dofus->joueurActif->tabCheminCellules[i].celluleY =
                        dofus->joueurActif->tabCheminCellules[i - 1].celluleY - 1;
            }
        }
        dofus->interactionExterieure.mouse.boolCliqueDeplacement = true;
    }
}

void testDeplacement2(Dofus *dofus) {
    bool conditionSurY = false;

    if (!dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein) {
        if (valeurAbsolue(
                dofus->interactionExterieure.mouse.celluleIso.celluleX - dofus->joueurActif->celluleActuelle.celluleX) <
            valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleY -
                          dofus->joueurActif->celluleActuelle.celluleY)) {
            conditionSurY = true;
        }
        int temp = valeurAbsolue(
                dofus->interactionExterieure.mouse.celluleIso.celluleY - dofus->joueurActif->celluleActuelle.celluleY) +
                   valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleX -
                                 dofus->joueurActif->celluleActuelle.celluleX);
        if (temp <= dofus->joueurActif->nbPmActuels) {

            for (int i = 0; i < temp; i++) {
                if (conditionSurY) {
                    if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY +
                                            1][dofus->joueurActif->celluleActuelle.celluleX].blocPlein &&
                        dofus->interactionExterieure.mouse.celluleIso.celluleY >
                        dofus->joueurActif->celluleActuelle.celluleY) {
                        dofus->joueurActif->celluleActuelle.celluleY += 1;
                    } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY -
                                                   1][dofus->joueurActif->celluleActuelle.celluleX].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleY <
                               dofus->joueurActif->celluleActuelle.celluleY) {
                        dofus->joueurActif->celluleActuelle.celluleY -= 1;
                    } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][
                            dofus->joueurActif->celluleActuelle.celluleX + 1].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleX >
                               dofus->joueurActif->celluleActuelle.celluleX) {
                        dofus->joueurActif->celluleActuelle.celluleX += 1;
                    } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][
                            dofus->joueurActif->celluleActuelle.celluleX - 1].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleX <
                               dofus->joueurActif->celluleActuelle.celluleX) {
                        dofus->joueurActif->celluleActuelle.celluleX -= 1;
                    }
                } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][
                        dofus->joueurActif->celluleActuelle.celluleX + 1].blocPlein &&
                           dofus->interactionExterieure.mouse.celluleIso.celluleX >
                           dofus->joueurActif->celluleActuelle.celluleX) {
                    dofus->joueurActif->celluleActuelle.celluleX += 1;
                } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][
                        dofus->joueurActif->celluleActuelle.celluleX - 1].blocPlein &&
                           dofus->interactionExterieure.mouse.celluleIso.celluleX <
                           dofus->joueurActif->celluleActuelle.celluleX) {
                    dofus->joueurActif->celluleActuelle.celluleX -= 1;
                } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY +
                                               1][dofus->joueurActif->celluleActuelle.celluleX].blocPlein &&
                           dofus->interactionExterieure.mouse.celluleIso.celluleY >
                           dofus->joueurActif->celluleActuelle.celluleY) {
                    dofus->joueurActif->celluleActuelle.celluleY += 1;
                } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY -
                                               1][dofus->joueurActif->celluleActuelle.celluleX].blocPlein &&
                           dofus->interactionExterieure.mouse.celluleIso.celluleY <
                           dofus->joueurActif->celluleActuelle.celluleY) {
                    dofus->joueurActif->celluleActuelle.celluleY -= 1;
                }
            }


            dofus->interactionExterieure.mouse.boolCliqueDeplacement = true;
        }
    }

}

void testTabChemin(Dofus *dofus) {
    bool conditionSurY = false;

    if (!dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein) {
        if (valeurAbsolue(
                dofus->interactionExterieure.mouse.celluleIso.celluleX - dofus->joueurActif->celluleActuelle.celluleX) <
            valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleY -
                          dofus->joueurActif->celluleActuelle.celluleY)) {
            conditionSurY = true;
        }
        int temp = valeurAbsolue(
                dofus->interactionExterieure.mouse.celluleIso.celluleY - dofus->joueurActif->celluleActuelle.celluleY) +
                   valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleX -
                                 dofus->joueurActif->celluleActuelle.celluleX);
        if (temp <= dofus->joueurActif->nbPmActuels) {

            for (int i = 0; i < temp; i++) {
                if (conditionSurY) {
                    if (!dofus->map.mapTile[
                            dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY +
                            1][dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX].blocPlein &&
                        dofus->interactionExterieure.mouse.celluleIso.celluleY >
                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY) {
                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY += 1;
                    } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY -
                                                   1][dofus->joueurActif->celluleActuelle.celluleX].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleY <
                               dofus->joueurActif->celluleActuelle.celluleY) {
                        dofus->joueurActif->celluleActuelle.celluleY -= 1;
                    } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][
                            dofus->joueurActif->celluleActuelle.celluleX + 1].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleX >
                               dofus->joueurActif->celluleActuelle.celluleX) {
                        dofus->joueurActif->celluleActuelle.celluleX += 1;
                    } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][
                            dofus->joueurActif->celluleActuelle.celluleX - 1].blocPlein &&
                               dofus->interactionExterieure.mouse.celluleIso.celluleX <
                               dofus->joueurActif->celluleActuelle.celluleX) {
                        dofus->joueurActif->celluleActuelle.celluleX -= 1;
                    }
                } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][
                        dofus->joueurActif->celluleActuelle.celluleX + 1].blocPlein &&
                           dofus->interactionExterieure.mouse.celluleIso.celluleX >
                           dofus->joueurActif->celluleActuelle.celluleX) {
                    dofus->joueurActif->celluleActuelle.celluleX += 1;
                } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][
                        dofus->joueurActif->celluleActuelle.celluleX - 1].blocPlein &&
                           dofus->interactionExterieure.mouse.celluleIso.celluleX <
                           dofus->joueurActif->celluleActuelle.celluleX) {
                    dofus->joueurActif->celluleActuelle.celluleX -= 1;
                } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY +
                                               1][dofus->joueurActif->celluleActuelle.celluleX].blocPlein &&
                           dofus->interactionExterieure.mouse.celluleIso.celluleY >
                           dofus->joueurActif->celluleActuelle.celluleY) {
                    dofus->joueurActif->celluleActuelle.celluleY += 1;
                } else if (!dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY -
                                               1][dofus->joueurActif->celluleActuelle.celluleX].blocPlein &&
                           dofus->interactionExterieure.mouse.celluleIso.celluleY <
                           dofus->joueurActif->celluleActuelle.celluleY) {
                    dofus->joueurActif->celluleActuelle.celluleY -= 1;
                }
            }


            dofus->interactionExterieure.mouse.boolCliqueDeplacement = true;
        }
    }

}