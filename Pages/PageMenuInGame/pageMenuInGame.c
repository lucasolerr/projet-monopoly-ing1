#include "pageMenuInGame.h"

void initSpriteHUD(Dofus* dofus){
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteLargeur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteHauteur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteX = 0;
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteY = 0;

    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].spriteLargeur = 42;
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].spriteHauteur = 50;
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].spriteX = 70;
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].spriteY = 0;

    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].spriteLargeur = 42;
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].spriteHauteur = 50;
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].spriteX = 140;
    dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].spriteY = 0;

    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteLargeur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteHauteur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteX = 0;
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteY = 55;

    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].spriteLargeur = 42;
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].spriteHauteur = 50;
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].spriteX = 70;
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].spriteY = 55;

    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].spriteLargeur = 42;
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].spriteHauteur = 50;
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].spriteX = 140;
    dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].spriteY = 55;

    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteLargeur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteHauteur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteX = 0;
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteY = 110;

    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].spriteLargeur = 42;
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].spriteHauteur = 50;
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].spriteX = 70;
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].spriteY = 110;

    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].spriteLargeur = 42;
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].spriteHauteur = 50;
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].spriteX = 140;
    dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].spriteY = 110;

    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteLargeur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteHauteur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteX = 0;
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteY = 165;

    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].spriteLargeur = 42;
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].spriteHauteur = 50;
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].spriteX = 70;
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].spriteY = 165;

    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].spriteLargeur = 42;
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].spriteHauteur = 50;
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].spriteX = 140;
    dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].spriteY = 165;

    dofus->pages.pageJeu.spriteHUD[LOGO_PM].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_PM].spriteLargeur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_PM].spriteHauteur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_PM].spriteX = 227;
    dofus->pages.pageJeu.spriteHUD[LOGO_PM].spriteY = 0;

    dofus->pages.pageJeu.spriteHUD[LOGO_PA].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_PA].spriteLargeur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_PA].spriteHauteur = 40;
    dofus->pages.pageJeu.spriteHUD[LOGO_PA].spriteX = 227;
    dofus->pages.pageJeu.spriteHUD[LOGO_PA].spriteY = 51;

    dofus->pages.pageJeu.spriteHUD[LOGO_PV].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_PV].spriteLargeur = 100;
    dofus->pages.pageJeu.spriteHUD[LOGO_PV].spriteHauteur = 100;
    dofus->pages.pageJeu.spriteHUD[LOGO_PV].spriteX = 227;
    dofus->pages.pageJeu.spriteHUD[LOGO_PV].spriteY = 111;

    dofus->pages.pageJeu.spriteHUD[LOGO_HUD].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_HUD].spriteLargeur = 800;
    dofus->pages.pageJeu.spriteHUD[LOGO_HUD].spriteHauteur = 125;
    dofus->pages.pageJeu.spriteHUD[LOGO_HUD].spriteX = 386;
    dofus->pages.pageJeu.spriteHUD[LOGO_HUD].spriteY = 4;

    dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].spriteLargeur = 100;
    dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].spriteHauteur = 35;
    dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].spriteX = 386;
    dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].spriteY = 147;

    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].spriteLargeur = 110;
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].spriteHauteur = 60;
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].spriteX = 533;
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].spriteY = 148;

    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].spriteLargeur = 110;
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].spriteHauteur = 60;
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].spriteX = 640;
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].spriteY = 148;

    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].image = &dofus->tabBitmap[SPRITE_HUD];
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].spriteLargeur = 110;
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].spriteHauteur = 60;
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].spriteX = 763;
    dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].spriteY = 148;
}

void affichageBarreHUD(Dofus* dofus){
    al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_HUD].image),dofus->pages.pageJeu.spriteHUD[LOGO_HUD].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_HUD].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_HUD].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_HUD].spriteHauteur, 240, 595, 0);
}

void affichagePMLogo(Dofus* dofus){
    al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_PM].image),dofus->pages.pageJeu.spriteHUD[LOGO_PM].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_PM].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_PM].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_PM].spriteHauteur, 286, 610, 0);
    al_draw_textf(dofus->allegro.fonts[AMARANTE_20PX], NOIR, 256, 619, 0, "%d", dofus->joueurActif->nbPmActuels);
}

void affichagePALogo(Dofus* dofus){
    al_draw_textf(dofus->allegro.fonts[AMARANTE_20PX], NOIR, 256, 670, 0, "%d", dofus->joueurActif->nbPA);
    al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_PA].image),dofus->pages.pageJeu.spriteHUD[LOGO_PA].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_PA].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_PA].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_PA].spriteHauteur, 286, 661, 0);
}

void affichagePVLogo(Dofus* dofus){
    int x = 0;
    if (dofus->joueurActif->pvRestants > 0) {
        al_draw_filled_rectangle(361, 704 - (dofus->joueurActif->pvRestants / 10), 461, 704, al_map_rgb(230, 20, 20));
    }
    al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_PV].image),dofus->pages.pageJeu.spriteHUD[LOGO_PV].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_PV].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_PV].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_PV].spriteHauteur, 361, 604, 0);
    if (dofus->joueurActif->pvRestants == 1000) {
        x = 390;
    } else if (dofus->joueurActif->pvRestants >= 100){
        x = 395;
    } else if (dofus->joueurActif->pvRestants >= 10) {
        x = 400;
    } else {
        x = 410;
    }
    al_draw_textf(dofus->allegro.fonts[AMARANTE_20PX], al_map_rgb(0, 0, 0), x, 636, 0, "%d",
                  dofus->joueurActif->pvRestants);

}

void affichageTerminerTourGeneral(Dofus* dofus){
    if(dofus->pages.pageJeu.logoTerminerTourClic){
        affichageTerminerTourLogoClic(dofus);
    } else if(dofus->pages.pageJeu.logoTerminerTourHover){
        affichageTerminerTourLogoHover(dofus);
    } else {
        affichageTerminerTourLogoStatique(dofus);
    }
}

void affichageTerminerTourLogoStatique(Dofus* dofus){
    al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].image),dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_STAT].spriteHauteur, 905, 612, 0);
}

void affichageTerminerTourLogoHover(Dofus* dofus){
    al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].image),dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_HOVER].spriteHauteur, 905 - 8, 612, 0);
}

void affichageTerminerTourLogoClic(Dofus* dofus){
    al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].image),dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_TOUR_CLIC].spriteHauteur, 905, 612, 0);
}

void affichageChronoLogo(Dofus* dofus){
    al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].image),dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_CHRONO].spriteHauteur, 905, 672, 0);
    al_draw_textf(dofus->allegro.fonts[AMARANTE_20PX], al_map_rgb(255, 255, 255), 950, 677, 0, "%d",
                  dofus->interactionExterieure.chronoTour);};

void affichageLogoIop(Dofus* dofus, int x, int y, Joueurs* temp){
    al_draw_rectangle(19 + x,19 + y, 61 + x, 61 + y, al_map_rgb(0,0,0), 2);
    al_draw_filled_rectangle(19,19, 61, 61, al_map_rgb(0,0,0));
    if(dofus->pages.pageJeu.logoIopHover){
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].image), dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_IOP_HOVER].spriteHauteur, 20 + x, 20 + y,0);
    } else if(dofus->pages.pageJeu.logoIopClic) {
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].image), dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_IOP_CLIC].spriteHauteur, 20 + x, 20 + y,0);

    } else {
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].image), dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteHauteur, 20 + x, 20 + y,0);
    }
    if (temp->pvRestants > 0) {
        al_draw_filled_rectangle(20 + x, 57 + y, 20 + x + (temp->pvRestants / 25), 60 + y, ROUGE);
    }
    if(temp->mort){
        al_draw_filled_rectangle(20 + x,20 + y, 60 + x, 60 + y, al_map_rgba(128,128,128, 200));
    }
}

void affichageLogoFeca(Dofus* dofus, int x, int y, Joueurs* temp){
    al_draw_rectangle(19 + x,74 + y, 61 + x, 116 + y, al_map_rgb(0,0,0), 2);
    al_draw_filled_rectangle(19,74, 61, 116, al_map_rgb(0,0,0));
    if(dofus->pages.pageJeu.logoFecaHover){
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].image), dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_FECA_HOVER].spriteHauteur, 20 + x, 75 + y,0);
    } else if(dofus->pages.pageJeu.logoFecaClic){
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].image), dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_FECA_CLIC].spriteHauteur, 20 + x, 75 + y,0);
    } else {
            al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].image), dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteHauteur, 20 + x, 75 + y,0);
    }
    if (temp->pvRestants > 0) {
        al_draw_filled_rectangle(20 + x, 112 + y, 20 + x + (temp->pvRestants / 25), 115 + y, ROUGE);
    }
    if(temp->mort){
        al_draw_filled_rectangle(20 + x,75 + y, 60 + x, 115 + y, al_map_rgba(128,128,128, 200));
    }
}

void affichageLogoOsa(Dofus* dofus,int x, int y, Joueurs* temp){
    al_draw_rectangle(19 + x,129 + y, 61 + x, 171 + y, al_map_rgb(0,0,0), 2);
    al_draw_filled_rectangle(19,129, 61, 171, al_map_rgb(0,0,0));
    if(dofus->pages.pageJeu.logoOsaHover){
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].image), dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_OSA_HOVER].spriteHauteur, 20 + x, 130 + y,0);

    } else if(dofus->pages.pageJeu.logoOsaClic){
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].image), dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_OSA_CLIC].spriteHauteur, 20 + x, 130 + y,0);

    } else {
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].image), dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteHauteur, 20 + x, 130 + y,0);
    }
    if (temp->pvRestants > 0) {
        al_draw_filled_rectangle(20 + x, 167 + y, 20 + x + (temp->pvRestants / 25), 170 + y, ROUGE);
    }
    if(temp->mort){
        al_draw_filled_rectangle(20 + x,130 + y, 60 + x, 170 + y, al_map_rgba(128,128,128, 200));

    }
}

void affichageLogoEca(Dofus* dofus, int x, int y, Joueurs* temp){

    al_draw_rectangle(19 + x,184 + y, 61 + x, 226 + y, al_map_rgb(0,0,0), 2);
    al_draw_filled_rectangle(19,184, 61, 226, al_map_rgb(0,0,0));
    if(dofus->pages.pageJeu.logoEcaHover){
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].image), dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_ECA_HOVER].spriteHauteur, 20 + x, 185 + y,0);
    } else if(dofus->pages.pageJeu.logoEcaClic){
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].image), dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_ECA_CLIC].spriteHauteur, 20 + x, 185 + y,0);
    } else {
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].image), dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteX, dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteY, dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteLargeur, dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteHauteur, 20 + x, 185 + y,0);
    }
    if (temp->pvRestants > 0) {
        al_draw_filled_rectangle(20 + x, 222 + y, 20 + x + (temp->pvRestants / 25), 225 + y, ROUGE);
    }
    if(temp->mort){
        al_draw_filled_rectangle(20 + x,185 + y, 60 + x, 225 + y, al_map_rgba(128,128,128, 200));

    }
}

void affichageBannerASonTourDeJoueur(Dofus* dofus){
    if(dofus->interactionExterieure.chronoTour >= 28){
        al_draw_filled_rounded_rectangle(340, 85, 340 + 600, 85 + 175, 50, 50, al_map_rgb(99, 114, 137));
        al_draw_rounded_rectangle(340, 85, 335 + 605, 80 + 180, 50, 50, NOIR, 5);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], NOIR, 375, 145, 0, "Au tour de : %s de jouer !", dofus->joueurActif->strNomJoueur);
    }
}

void affichageEchecCritique(Dofus* dofus){
    if (dofus->pages.pageJeu.echecCritique == true){ // affiche 2 sec
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], NOIR, dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenX,dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenY , 0, "Echec critique !");
    }
}


void affichageDMG(Dofus* dofus){
    if (dofus->pages.pageJeu.degatSubi == true) {
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], ROUGE, dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenX,dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenY, 0, "-%d", dofus->joueurActif->degatSubiAffichage);
    }
}

void affichageGeneralHUD(Dofus* dofus){
    affichageBarreHUD(dofus);
    affichagePMLogo(dofus);
    affichagePALogo(dofus);
    affichagePVLogo(dofus);
    affichageTerminerTourGeneral(dofus);
    affichageChronoLogo(dofus);
    dessinerTableauGaucheJoueur(dofus);
    afficherInfosTabOuClic(dofus);
}

void affichageTemplateInfos(Dofus* dofus, int x, int y, ALLEGRO_COLOR color, int classe){
    Joueurs* player = dofus->joueur;

    while (player->ptrClasse != &dofus->classes[classe]) {
        if (player->ptrClasse == &dofus->classes[classe]) {

        } else {
            player = player->next;
        }
    }

    al_draw_filled_rectangle(x, y, x + 250, y + 250, color);
    al_draw_textf(dofus->allegro.fonts[AMARANTE_20PX], NOIR, 100 + x, 10 + y, 0, "%s", player->strNomJoueur);
    if(player->ptrClasse == &dofus->classes[IOP]){
        al_draw_textf(dofus->allegro.fonts[AMARANTE_20PX], NOIR, 10+ x, 70 + y, 0, "Classe : IOP");
    }if(player->ptrClasse == &dofus->classes[ECA]){
        al_draw_textf(dofus->allegro.fonts[AMARANTE_20PX], NOIR, 10+x, 70 + y, 0, "Classe : ECAFLIP");

    }if(player->ptrClasse == &dofus->classes[FECA]){
        al_draw_textf(dofus->allegro.fonts[AMARANTE_20PX], NOIR, 10+x, 70 + y, 0, "Classe : FECA");

    }if(player->ptrClasse == &dofus->classes[OSA]){
        al_draw_textf(dofus->allegro.fonts[AMARANTE_20PX], NOIR, 10+x, 70 + y, 0, "Classe : OSAMODAS");
    }
    al_draw_textf(dofus->allegro.fonts[INTER_20PX], NOIR, 10+x, 100 + y, 0, "Dégats infligés : %d PV", player->nbDegatInflige);
    al_draw_textf(dofus->allegro.fonts[INTER_20PX], NOIR, 10+x, 130 + y, 0, "Dégats subis : %d PV", player->nbDegatSubi);
    al_draw_textf(dofus->allegro.fonts[INTER_20PX], NOIR, 10+x, 160 + y, 0, "Kills : %d", player->nbKills);
    al_draw_textf(dofus->allegro.fonts[INTER_20PX], NOIR, 10+x, 190 + y, 0, "Temps en vie : %ds", player->tempsEnVie);

}

void afficherInfosEca(Dofus* dofus){
    if(dofus->pages.pageJeu.logoEcaClic){
        affichageTemplateInfos(dofus, 75, 200, al_map_rgb(52, 176, 216), ECA);
        al_draw_bitmap_region(*(dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].image),
                              dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteX,
                              dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteY,
                              dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur,
                              dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur,
                              100,
                              150, 0);
    }
}

void afficherInfosOsa(Dofus* dofus){
    if(dofus->pages.pageJeu.logoOsaClic){
        affichageTemplateInfos(dofus, 75, 150, al_map_rgb(0, 191, 145), OSA);
        al_draw_bitmap_region(*(dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].image),
                              dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteX,
                              dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteY,
                              dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur,
                              dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur,
                              100,
                              120, 0);
    }
}

void afficherInfosIop(Dofus* dofus){
    if(dofus->pages.pageJeu.logoIopClic){
        affichageTemplateInfos(dofus, 75, 60, al_map_rgb(255, 75, 66), IOP);
        al_draw_bitmap_region(*(dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].image),
                              dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteX,
                              dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteY,
                              dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur,
                              dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur,
                              100,
                              20, 0);
    }
}

void afficherInfosFeca(Dofus* dofus){
    if(dofus->pages.pageJeu.logoFecaClic){
        affichageTemplateInfos(dofus, 75, 125, al_map_rgb(255, 156, 9), FECA);
        al_draw_bitmap_region(*(dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].image),
                          dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteX,
                          dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteY,
                          dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur,
                          dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur,
                          100,
                          75, 0);
                          }
}

void afficherInfosTab(Dofus* dofus){
    Joueurs* temp = dofus->joueur;
    if(dofus->interactionExterieure.keyboard.tab){
        al_draw_filled_rectangle(0, 0, 1280, 720, al_map_rgba(0, 0, 0, 180));
        for (int i = 0; i < dofus->nbJoueursEnVie; i++) {
            if(temp->ptrClasse == &dofus->classes[FECA]){
                affichageTemplateInfos(dofus, 140, 200, al_map_rgb(255, 156, 9), FECA);
                al_draw_bitmap_region(*(dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].image),
                                  dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteX,
                                  dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteY,
                                  dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur,
                                  dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur,
                                  165,
                                  160, 0);
            } else if(temp->ptrClasse == &dofus->classes[OSA]){
                affichageTemplateInfos(dofus, 390, 200, al_map_rgb(0, 191, 145), OSA);
                al_draw_bitmap_region(*(dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].image),
                                      dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteX,
                                      dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteY,
                                      dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur,
                                      dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur,
                                      415,
                                      160, 0);
            }else if(temp->ptrClasse == &dofus->classes[IOP]){
                affichageTemplateInfos(dofus, 640, 200, al_map_rgb(255, 75, 66), IOP);
                al_draw_bitmap_region(*(dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].image),
                                      dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteX,
                                      dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteY,
                                      dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur,
                                      dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur,
                                      665,
                                      160, 0);
            } else if(temp->ptrClasse == &dofus->classes[ECA]){
                affichageTemplateInfos(dofus, 890, 200, al_map_rgb(52, 176, 216), ECA);
                al_draw_bitmap_region(*(dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].image),
                                      dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteX,
                                      dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteY,
                                      dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur,
                                      dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur,
                                      915,
                                      160, 0);
            }
            temp = temp->next;
        }
    }
}

void afficherInfosTabOuClic(Dofus* dofus){
    afficherInfosFeca(dofus);
    afficherInfosEca(dofus);
    afficherInfosIop(dofus);
    afficherInfosOsa(dofus);
}

void dessinerTableauGaucheJoueur(Dofus* dofus){

    Joueurs* temp = dofus->joueur;
    int x = 0, y = 0;

    for (int i = 0; i < dofus->nbJoueursEnVie; i++) {

        if(temp == dofus->joueurActif){
            x += 10;
            y += -5;
        } else {
            y = 0;
            x = 0;
        }

        if (temp->ptrClasse == &dofus->classes[IOP]) {
            affichageLogoIop(dofus, x, y, temp);
        } else if (temp->ptrClasse == &dofus->classes[FECA]) {
            affichageLogoFeca(dofus, x, y, temp);
        } else if (temp->ptrClasse == &dofus->classes[OSA]) {
            affichageLogoOsa(dofus, x, y, temp);
        } else if (temp->ptrClasse == &dofus->classes[ECA]) {
            affichageLogoEca(dofus, x, y, temp);
        }

        temp = temp->next;
    }
}

void calculHoverLogos(Dofus* dofus){
    if(dofus->allegro.event.mouse.x >= 20 && dofus->allegro.event.mouse.x <= 60 && dofus->allegro.event.mouse.y >= 20 && dofus->allegro.event.mouse.y <= 60){
        dofus->pages.pageJeu.logoIopHover = true;
    } else if(dofus->allegro.event.mouse.x >= 20 && dofus->allegro.event.mouse.x <= 60 && dofus->allegro.event.mouse.y >= 75 && dofus->allegro.event.mouse.y <= 115){
        dofus->pages.pageJeu.logoFecaHover = true;
    } else if (dofus->allegro.event.mouse.x >= 20 && dofus->allegro.event.mouse.x <= 60 && dofus->allegro.event.mouse.y >= 130 && dofus->allegro.event.mouse.y <= 170) {
        dofus->pages.pageJeu.logoOsaHover = true;
    } else if (dofus->allegro.event.mouse.x >= 20 && dofus->allegro.event.mouse.x <= 60 && dofus->allegro.event.mouse.y >= 185 && dofus->allegro.event.mouse.y <= 225) {
        dofus->pages.pageJeu.logoEcaHover = true;
    } else if (dofus->allegro.event.mouse.x >= 905 && dofus->allegro.event.mouse.x <= 1005 && dofus->allegro.event.mouse.y >= 612 && dofus->allegro.event.mouse.y <= 662) {
        dofus->pages.pageJeu.logoTerminerTourHover = true;
    }
    else {
            dofus->pages.pageJeu.logoIopHover = false;
            dofus->pages.pageJeu.logoFecaHover = false;
            dofus->pages.pageJeu.logoEcaHover = false;
            dofus->pages.pageJeu.logoOsaHover = false;
            dofus->pages.pageJeu.logoTerminerTourHover = false;
    }
}

void calculClicLogo(Dofus* dofus){
    if (dofus->allegro.event.mouse.button == 1) {
        if (dofus->allegro.event.mouse.x >= 20 && dofus->allegro.event.mouse.x <= 60 &&
            dofus->allegro.event.mouse.y >= 20 && dofus->allegro.event.mouse.y <= 60) {
            dofus->pages.pageJeu.logoIopClic = !dofus->pages.pageJeu.logoIopClic;
            dofus->pages.pageJeu.logoFecaClic = false;
            dofus->pages.pageJeu.logoEcaClic = false;
            dofus->pages.pageJeu.logoOsaClic = false;
        } else if (dofus->allegro.event.mouse.x >= 20 && dofus->allegro.event.mouse.x <= 60 &&
                   dofus->allegro.event.mouse.y >= 75 && dofus->allegro.event.mouse.y <= 115) {
            dofus->pages.pageJeu.logoFecaClic = !dofus->pages.pageJeu.logoFecaClic;
            dofus->pages.pageJeu.logoIopClic = false;
            dofus->pages.pageJeu.logoEcaClic = false;
            dofus->pages.pageJeu.logoOsaClic = false;
        } else if (dofus->allegro.event.mouse.x >= 20 && dofus->allegro.event.mouse.x <= 60 &&
                   dofus->allegro.event.mouse.y >= 130 && dofus->allegro.event.mouse.y <= 170) {
            dofus->pages.pageJeu.logoOsaClic = !dofus->pages.pageJeu.logoOsaClic;
            dofus->pages.pageJeu.logoIopClic = false;
            dofus->pages.pageJeu.logoFecaClic = false;
            dofus->pages.pageJeu.logoEcaClic = false;
        } else if (dofus->allegro.event.mouse.x >= 20 && dofus->allegro.event.mouse.x <= 60 &&
                   dofus->allegro.event.mouse.y >= 185 && dofus->allegro.event.mouse.y <= 225) {
            dofus->pages.pageJeu.logoEcaClic = !dofus->pages.pageJeu.logoEcaClic;
            dofus->pages.pageJeu.logoIopClic = false;
            dofus->pages.pageJeu.logoFecaClic = false;
            dofus->pages.pageJeu.logoOsaClic = false;
        } else if (dofus->allegro.event.mouse.x >= 905 && dofus->allegro.event.mouse.x <= 1005 && dofus->allegro.event.mouse.y >= 612 && dofus->allegro.event.mouse.y <= 662) {
            dofus->pages.pageJeu.logoTerminerTourHover = false;
            dofus->pages.pageJeu.logoTerminerTourClic = true;
        } else {
            dofus->pages.pageJeu.logoIopClic = false;
            dofus->pages.pageJeu.logoFecaClic = false;
            dofus->pages.pageJeu.logoEcaClic = false;
            dofus->pages.pageJeu.logoOsaClic = false;
            dofus->pages.pageJeu.logoIopHover = false;
            dofus->pages.pageJeu.logoEcaHover = false;
            dofus->pages.pageJeu.logoOsaHover = false;
            dofus->pages.pageJeu.logoFecaHover = false;

        }
    }
}
