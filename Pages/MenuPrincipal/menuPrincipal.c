#include "menuPrincipal.h"

void initDataMenuPrincipal(Dofus* dofus){
    dofus->pages.menuPrincipal.tabSpriteMenu[BG].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[BG].spriteX = 0;
    dofus->pages.menuPrincipal.tabSpriteMenu[BG].spriteY = 0;
    dofus->pages.menuPrincipal.tabSpriteMenu[BG].spriteLargeur = 1280;
    dofus->pages.menuPrincipal.tabSpriteMenu[BG].spriteHauteur = 720;

    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].spriteX = 0;
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].spriteY = 751;
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].spriteLargeur = 500;
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].spriteHauteur = 150;

    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].spriteX = 0;
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].spriteY = 911;
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].spriteLargeur = 500;
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].spriteHauteur = 160;

    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].spriteX = 0;
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].spriteY = 1081;
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].spriteLargeur = 500;
    dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].spriteHauteur = 160;

    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteX = 574;
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteY = 751;
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteLargeur = 500;
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteHauteur = 150;

    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].spriteX = 574;
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].spriteY = 911;
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].spriteLargeur = 500;
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].spriteHauteur = 160;

    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].spriteX = 574;
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].spriteY = 1081;
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].spriteLargeur = 500;
    dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].spriteHauteur = 160;

    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].spriteX = 1117;
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].spriteY = 751;
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].spriteLargeur = 500;
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].spriteHauteur = 150;

    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].spriteX = 1117;
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].spriteY = 911;
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].spriteLargeur = 500;
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].spriteHauteur = 160;

    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].image = &dofus->tabBitmap[MENU_PRINCIPAL];
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].spriteX = 1117;
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].spriteY = 1081;
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].spriteLargeur = 500;
    dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].spriteHauteur = 160;
}

void calculHover(Dofus* dofus){
    if(dofus->allegro.event.mouse.x >= 390 && dofus->allegro.event.mouse.x <= 390 + dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteLargeur && dofus->allegro.event.mouse.y >= 85 && dofus->allegro.event.mouse.y <= 85 + dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteHauteur){
        dofus->pages.menuPrincipal.partieHover = true;
    } else if(dofus->allegro.event.mouse.x >= 390 && dofus->allegro.event.mouse.x <= 390 + dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteLargeur && dofus->allegro.event.mouse.y >= 285 && dofus->allegro.event.mouse.y <= 285 + dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteHauteur){
        dofus->pages.menuPrincipal.aideHover = true;
    } else if(dofus->allegro.event.mouse.x >= 390 && dofus->allegro.event.mouse.x <= 390 + dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteLargeur && dofus->allegro.event.mouse.y >= 485 && dofus->allegro.event.mouse.y <= 485 + dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteHauteur){
        dofus->pages.menuPrincipal.quitterHover = true;
    } else {
        dofus->pages.menuPrincipal.partieHover = false;
        dofus->pages.menuPrincipal.aideHover = false;
        dofus->pages.menuPrincipal.quitterHover = false;
    }
}

void calculClic(Dofus* dofus){
    if (dofus->allegro.event.mouse.button == 1) {
        if (dofus->allegro.event.mouse.x >= 390 &&
            dofus->allegro.event.mouse.x <= 390 + dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteLargeur &&
            dofus->allegro.event.mouse.y >= 85 &&
            dofus->allegro.event.mouse.y <= 85 + dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteHauteur) {
            dofus->pages.menuPrincipal.partieClique = true;
        } else if (dofus->allegro.event.mouse.x >= 390 && dofus->allegro.event.mouse.x <= 390 +
                                                                                          dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteLargeur &&
                   dofus->allegro.event.mouse.y >= 285 && dofus->allegro.event.mouse.y <= 285 +
                                                                                          dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteHauteur) {
            dofus->pages.menuPrincipal.aideClique = true;
        } else if (dofus->allegro.event.mouse.x >= 390 && dofus->allegro.event.mouse.x <= 390 +
                                                                                          dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteLargeur &&
                   dofus->allegro.event.mouse.y >= 485 && dofus->allegro.event.mouse.y <= 485 +
                                                                                          dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteHauteur) {
            dofus->pages.menuPrincipal.quitterClique = true;
            dofus->endGame = true;
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
            dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
            dofus->pages.pageChoixClasses.boolCliqueClasseFeca = true;
            dofus->pages.pageJeu.boolPageJeu = true;
            dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
            dofus->dessin = true;
            exit(1);
        } else {
            dofus->pages.menuPrincipal.partieClique = false;
            dofus->pages.menuPrincipal.aideClique = false;
            dofus->pages.menuPrincipal.quitterClique = false;
        }
    } else {
        dofus->pages.menuPrincipal.partieClique = false;
        dofus->pages.menuPrincipal.aideClique = false;
        dofus->pages.menuPrincipal.quitterClique = false;
        dofus->dessin = true;
    }
}

void affichageMenuPrincipal(Dofus* dofus){
    al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[BG].image),
                          dofus->pages.menuPrincipal.tabSpriteMenu[BG].spriteX,
                          dofus->pages.menuPrincipal.tabSpriteMenu[BG].spriteY,
                          dofus->pages.menuPrincipal.tabSpriteMenu[BG].spriteLargeur,
                          dofus->pages.menuPrincipal.tabSpriteMenu[BG].spriteHauteur,
                          0,
                          0,
                          0);

    al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].image),
                          dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteX,
                          dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteY,
                          dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteLargeur,
                          dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE].spriteHauteur,
                          390,
                          85,
                          0);

    al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].image),
                          dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].spriteX,
                          dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].spriteY,
                          dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].spriteLargeur,
                          dofus->pages.menuPrincipal.tabSpriteMenu[AIDE].spriteHauteur,
                          390,
                          285,
                          0);

    al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].image),
                          dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].spriteX,
                          dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].spriteY,
                          dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].spriteLargeur,
                          dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER].spriteHauteur,
                          390,
                          485,
                          0);

    if(dofus->pages.menuPrincipal.partieHover){
        al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].image),
                              dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].spriteX,
                              dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].spriteY,
                              dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].spriteLargeur,
                              dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_HOVER].spriteHauteur,
                              390,
                              85,
                              0);
    }
    if(dofus->pages.menuPrincipal.aideHover){
        al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].image),
                              dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].spriteX,
                              dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].spriteY,
                              dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].spriteLargeur,
                              dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_HOVER].spriteHauteur,
                              390,
                              285,
                              0);
    }

    if(dofus->pages.menuPrincipal.quitterHover){
        al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].image),
                              dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].spriteX,
                              dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].spriteY,
                              dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].spriteLargeur,
                              dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_HOVER].spriteHauteur,
                              390,
                              485,
                              0);
    }

    if(dofus->pages.menuPrincipal.partieClique){
        al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].image),
                              dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].spriteX,
                              dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].spriteY,
                              dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].spriteLargeur,
                              dofus->pages.menuPrincipal.tabSpriteMenu[PARTIE_CLIQUE].spriteHauteur,
                              390,
                              85,
                              0);
    }
    if(dofus->pages.menuPrincipal.aideClique){
        al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].image),
                              dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].spriteX,
                              dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].spriteY,
                              dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].spriteLargeur,
                              dofus->pages.menuPrincipal.tabSpriteMenu[AIDE_CLIQUE].spriteHauteur,
                              390,
                              285,
                              0);
    }

    if(dofus->pages.menuPrincipal.quitterClique){
        al_draw_bitmap_region(*(dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].image),
                              dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].spriteX,
                              dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].spriteY,
                              dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].spriteLargeur,
                              dofus->pages.menuPrincipal.tabSpriteMenu[QUITTER_CLIQUE].spriteHauteur,
                              390,
                              485,
                              0);
    }

    al_flip_display();

}

void boucleMenuPrincipal(Dofus *dofus) {

    initDataMenuPrincipal(dofus);

    affichageMenuPrincipal(dofus);

    al_play_sample(dofus->allegro.music[SON_MENU_PRINCIPAL],1,0,1,ALLEGRO_PLAYMODE_LOOP,0);

    while (!dofus->pages.menuPrincipal.boolMenuPrincipal) {

        al_wait_for_event(dofus->allegro.queue, &dofus->allegro.event);

        if (dofus->allegro.event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            al_stop_samples();
            dofus->pages.menuPrincipal.boolMenuPrincipal = true;
            dofus->endGame = true;
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
            dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
            dofus->pages.pageJeu.boolPageJeu = true;
            dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
            exit(1);
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_AXES) {
            dofus->interactionExterieure.mouse.celluleXY.screenX = dofus->allegro.event.mouse.x;
            dofus->interactionExterieure.mouse.celluleXY.screenY = dofus->allegro.event.mouse.y;
            calculHover(dofus);
            dofus->dessin = true;
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
            calculClic(dofus);
            dofus->dessin = true;

        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP) {
            if (dofus->pages.menuPrincipal.partieClique) {
                al_stop_samples();
                al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = false;
                dofus->pages.menuPrincipal.partieClique = false;
                dofus->pages.menuPrincipal.boolMenuPrincipal = true;
            }else if(dofus->pages.menuPrincipal.quitterClique){
                dofus->endGame = true;
                dofus->pages.menuPrincipal.boolMenuPrincipal = true;
            }else if (dofus->pages.menuPrincipal.aideClique){
                al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                dofus->pages.menuPrincipal.aideClique = false;
                bouclePageAide(dofus);
                // afficherAide();         ### A CODER  ###
            }

            dofus->dessin = true;
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_TIMER) {
            if(dofus->dessin){
                affichageMenuPrincipal(dofus);
                dofus->dessin = false;
            }

        }
    }
}


