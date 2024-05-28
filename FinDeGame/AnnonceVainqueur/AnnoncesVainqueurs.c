#include "AnnoncesVainqueurs.h"

void initBitmapFinDeGame(Dofus* dofus){
    dofus->pages.pageClassement.finDeGame[VAINQUEUR].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteX = 0;
    dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteY = 0;
    dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteX = 1280;
    dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteY = 0;
    dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[VAINQUEURS].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[VAINQUEURS].spriteX = 2560;
    dofus->pages.pageClassement.finDeGame[VAINQUEURS].spriteY = 0;
    dofus->pages.pageClassement.finDeGame[VAINQUEURS].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[VAINQUEURS].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[VAINQUEURS_FLECHE_STAT].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[VAINQUEURS_FLECHE_STAT].spriteX = 3840;
    dofus->pages.pageClassement.finDeGame[VAINQUEURS_FLECHE_STAT].spriteY = 0;
    dofus->pages.pageClassement.finDeGame[VAINQUEURS_FLECHE_STAT].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[VAINQUEURS_FLECHE_STAT].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteX = 0;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteY = 720;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteX = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteY = 720;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteX = 2560;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteY = 720;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteX = 3840;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteY = 720;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteX = 0;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteY = 1440;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteX = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteY = 1440;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteX = 2560;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteY = 1440;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteX = 3840;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteY = 1440;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteX = 0;
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteY = 2160;
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteX = 1282;
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteY = 2160;
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteX = 2560;
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteY = 2160;
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteHauteur = 720;

    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].image = &dofus->tabBitmap[FIN_DE_GAME];
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteX = 3840;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteY = 720;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteLargeur = 1280;
    dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteHauteur = 720;
}

void imageVainqueur(Dofus* dofus){

    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                          dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteX,
                          dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteY,
                          dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteLargeur,
                          dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteHauteur, 0, 0, 0);
    al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),433, 246, 0,"%s", dofus->joueurActif->strNomJoueur);
    al_flip_display();
}



bool vainqueurPartie(Dofus* dofus){
    if (dofus->nbJoueurs>=2){
        return false;
    }
    dofus->joueur->vainqueur = true;
    dofus->joueur->classement = 1;
    return true;
}


void annonceVainqueur(Dofus* dofus){
    if (vainqueurPartie(dofus)==true){
        imageVainqueur(dofus);
        dofus->pages.pageClassement.imageVainqueur = true;
    }
}

void affichageStat2Joueurs(Dofus* dofus) {

    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteX,
                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteY,
                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteLargeur,
                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteHauteur, 0, 0, 0);

    // affichage stat joueurs
    for (int i = 0; i < 2; i++) {
        int x = i * 383;
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 865, 0,"%s", dofus->joueur->strNomJoueur);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 921, 0, "%d", dofus->joueur->pvRestants);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 1023, 0,"%d", dofus->joueur->nbDegatInflige);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 1094, 0,"%d", dofus->joueur->nbDegatSubi);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 1165, 0,"%d", dofus->joueur->nbPm);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 1248, 0,"%d", dofus->joueur->nbPA);

    }
    dofus->pages.pageClassement.imageStat = true;
    dofus->pages.pageClassement.imageVainqueur = false;
}

void affichageStat3Joueurs(Dofus* dofus) {

    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteX,
                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteY,
                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteLargeur,
                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteHauteur, 0, 0, 0);

    // affichage stat joueurs
    for (int i = 0; i < 3; i++) {
        int x = i * 247;
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),518+x, 865, 0,"%s", dofus->joueur->strNomJoueur);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),518+x, 921, 0, "%d", dofus->joueur->pvRestants);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),518+x, 1023, 0,"%d", dofus->joueur->nbDegatInflige);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),518+x, 1094, 0,"%d", dofus->joueur->nbDegatSubi);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),518+x, 1165, 0,"%d", dofus->joueur->nbPm);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),518+x, 1248, 0,"%d", dofus->joueur->nbPA);

    }
    dofus->pages.pageClassement.imageStat = true;
    dofus->pages.pageClassement.imageVainqueur = false;
}

void boucleClassement(Dofus* dofus){
    al_wait_for_event(dofus->allegro.queue, &dofus->allegro.event);
    while(dofus->endGame == true){
        if(dofus->nbJoueursEnVie == 2){
            annonceVainqueur(dofus);
            if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 1152 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 660
               && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1246 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 702){
                al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteX,
                                      dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteY,
                                      dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteLargeur,
                                      dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteHauteur, 0, 0, 0);
                if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 1152 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 660
                   && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1246 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 702
                   && dofus->allegro.event.mouse.button == 1){
                    affichageStat2Joueurs(dofus);
                    if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 256 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                       && dofus->interactionExterieure.mouse.celluleXY.screenX <= 421 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693){
                        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteX,
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteY,
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteLargeur,
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteHauteur, 0, 0, 0);



                        if (dofus->interactionExterieure.mouse.celluleXY.screenX >= 256 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 421 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693
                            && dofus->allegro.event.mouse.button == 1){
                            boucleTout(dofus);
                        }
                    }
                    else if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 558 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 723 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693){
                        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteX,
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteY,
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteLargeur,
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);
                        if (dofus->interactionExterieure.mouse.celluleXY.screenX >= 558 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 723 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693
                            && dofus->allegro.event.mouse.button == 1){
                            bouclePlacementLibre(dofus);
                        }
                    }
                    else if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 857 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1022 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693){
                        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteX,
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteY,
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteLargeur,
                                              dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteHauteur, 0, 0, 0);
                        if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 857 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                           && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1022 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693
                           && dofus->allegro.event.mouse.button == 1) {
                            dofus->endGame = false;
                        }
                    }
                }
            }










        }else if(dofus->nbJoueursEnVie == 3){
            annonceVainqueur(dofus);
            if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 1152 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 660
               && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1246 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 702){
                al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteX,
                                      dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteY,
                                      dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteLargeur,
                                      dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteHauteur, 0, 0, 0);
                if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 1152 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 660
                   && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1246 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 702
                   && dofus->allegro.event.mouse.button == 1){
                    affichageStat3Joueurs(dofus);
                    if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 256 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                       && dofus->interactionExterieure.mouse.celluleXY.screenX <= 421 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693){
                        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteX,
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteY,
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteLargeur,
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteHauteur, 0, 0, 0);
                        if (dofus->interactionExterieure.mouse.celluleXY.screenX >= 256 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 421 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693
                            && dofus->allegro.event.mouse.button == 1){
                            boucleTout(dofus);
                        }
                    }
                    else if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 558 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 723 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693){
                        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteX,
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteY,
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteLargeur,
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);
                        if (dofus->interactionExterieure.mouse.celluleXY.screenX >= 558 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 723 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693
                            && dofus->allegro.event.mouse.button == 1){
                            bouclePlacementLibre(dofus);
                        }
                    }
                    else if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 857 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1022 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693){
                        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteX,
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteY,
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteLargeur,
                                              dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteHauteur, 0, 0, 0);
                        if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 857 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                           && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1022 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693
                           && dofus->allegro.event.mouse.button == 1) {
                            dofus->endGame = false;
                        }
                    }
                }
            }
        }
        else if (dofus->nbJoueursEnVie == 4){
            annonceVainqueur(dofus);
            if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 1152 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 660
               && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1246 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 702){
                al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteX,
                                      dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteY,
                                      dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteLargeur,
                                      dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteHauteur, 0, 0, 0);
                if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 1152 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 660
                   && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1246 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 702
                   && dofus->allegro.event.mouse.button == 1){
                    affichageStat4Joueurs(dofus);
                    if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 256 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                       && dofus->interactionExterieure.mouse.celluleXY.screenX <= 421 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693){
                        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteX,
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteY,
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteLargeur,
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteHauteur, 0, 0, 0);
                        if (dofus->interactionExterieure.mouse.celluleXY.screenX >= 256 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 421 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693
                            && dofus->allegro.event.mouse.button == 1){
                            boucleTout(dofus);
                        }
                    }
                    else if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 558 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 723 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693){
                        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteX,
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteY,
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteLargeur,
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);
                        if (dofus->interactionExterieure.mouse.celluleXY.screenX >= 558 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 723 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693
                            && dofus->allegro.event.mouse.button == 1){
                            bouclePlacementLibre(dofus);
                        }
                    }
                    else if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 857 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                            && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1022 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693){
                        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_QUITTER].spriteX,
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_QUITTER].spriteY,
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_QUITTER].spriteLargeur,
                                              dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_QUITTER].spriteHauteur, 0, 0, 0);
                        if(dofus->interactionExterieure.mouse.celluleXY.screenX >= 857 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 637
                           && dofus->interactionExterieure.mouse.celluleXY.screenX <= 1022 && dofus->interactionExterieure.mouse.celluleXY.screenY >= 693
                           && dofus->allegro.event.mouse.button == 1) {
                            dofus->endGame = false;
                        }
                    }
                }
            }
        }
    }
}


void affichageStat4Joueurs(Dofus* dofus) {

    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteX,
                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteY,
                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteLargeur,
                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteHauteur, 0, 0, 0);

    // affichage stat joueurs
    for (int i = 0; i < 4; i++) {
        int x = i * 184;
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),481+x, 865, 0,"%s", dofus->joueur->strNomJoueur);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),481+x, 921, 0, "%d", dofus->joueur->pvRestants);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),481+x, 1023, 0,"%d", dofus->joueur->nbDegatInflige);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),481+x, 1094, 0,"%d", dofus->joueur->nbDegatSubi);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),481+x, 1165, 0,"%d", dofus->joueur->nbPm);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),481+x, 1248, 0,"%d", dofus->joueur->nbPA);

    }
    dofus->pages.pageClassement.imageStat = true;
    dofus->pages.pageClassement.imageVainqueur = false;
}


void dessinerBitmap(Dofus* dofus, int i){
    switch (i){
        case 1:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteX,
                                  dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteY,
                                  dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[VAINQUEUR_FLECHE_STAT].spriteHauteur, 0, 0, 0);
        }
        case 2:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteX,
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteY,
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteHauteur, 0, 0, 0);

        }
        case 3:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteX,
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteY,
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);
        }
        case 4:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteX,
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteY,
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteHauteur, 0, 0, 0);
        }
        case 5:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteX,
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteY,
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteHauteur, 0, 0, 0);

        }
        case 6:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteX,
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteY,
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);
        }
        case 7:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteX,
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteY,
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteHauteur, 0, 0, 0);
        }
        case 8:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteX,
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteY,
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteHauteur, 0, 0, 0);

        }
        case 9:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteX,
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteY,
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);
        }
        case 10:{
            al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteX,
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteY,
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteLargeur,
                                  dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);
        }
    }
    al_flip_display();
}


void boucleClassementFinale(Dofus* dofus){
    dofus->pages.pageClassement.imageVainqueur = false;
    dofus->pages.pageClassement.imageStat = false;
    dofus->pages.pageClassement.boolPageClassement = false;

    //al_play_sample(dofus->allegro.music[SON_COMBAT],1, 0, 1, ALLEGRO_PLAYMODE_LOOP, 0);

    //al_flip_display();

    while (dofus->pages.pageClassement.boolPageClassement == false) {

        al_wait_for_event(dofus->allegro.queue, &dofus->allegro.event);

        if (dofus->nbJoueursEnVie == 2) {
            annonceVainqueur(dofus);
            switch (dofus->allegro.event.type) {
                case ALLEGRO_EVENT_MOUSE_AXES: {
                    if (dofus->allegro.event.mouse.x >= 1152 && dofus->allegro.event.mouse.y >= 660
                        && dofus->allegro.event.mouse.x <= 1246 && dofus->allegro.event.mouse.y <= 702
                        && dofus->pages.pageClassement.imageVainqueur == true) {
                        dessinerBitmap(dofus, 1);
                    } else if (dofus->allegro.event.mouse.x >= 256 && dofus->allegro.event.mouse.y >= 637
                               && dofus->allegro.event.mouse.x <= 421 && dofus->allegro.event.mouse.y <= 693
                               && dofus->pages.pageClassement.imageStat == true) {
                        dessinerBitmap(dofus,2);
                    } else if (dofus->allegro.event.mouse.x >= 558 && dofus->allegro.event.mouse.y >= 637
                               && dofus->allegro.event.mouse.x <= 723 && dofus->allegro.event.mouse.y <= 693
                               && dofus->pages.pageClassement.imageStat == true) {
                        dessinerBitmap(dofus, 3);
                    }else if (dofus->allegro.event.mouse.x >= 857 && dofus->allegro.event.mouse.y >= 637
                              && dofus->allegro.event.mouse.x <= 1022 && dofus->allegro.event.mouse.y <= 693
                              && dofus->pages.pageClassement.imageStat == true) {
                        dessinerBitmap(dofus, 4);
                    }
                    break;
                }
                case ALLEGRO_EVENT_MOUSE_BUTTON_DOWN:{
                    if(dofus->allegro.event.mouse.x >= 1152 && dofus->allegro.event.mouse.y >= 660
                       && dofus->allegro.event.mouse.x <= 1246 && dofus->allegro.event.mouse.y <= 702
                       && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageVainqueur == true){
                        affichageStat2Joueurs(dofus);
                    }else if (dofus->allegro.event.mouse.x >= 256 && dofus->allegro.event.mouse.y >= 637
                             && dofus->allegro.event.mouse.x <= 421 && dofus->allegro.event.mouse.y <= 693
                             && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true){
                        boucleTout(dofus);
                        dofus->pages.pageClassement.boolPageClassement = false;
                    }else if (dofus->allegro.event.mouse.x >= 558 && dofus->allegro.event.mouse.y >= 637
                             && dofus->allegro.event.mouse.x <= 723 && dofus->allegro.event.mouse.y <= 693
                             && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true){
                        bouclePlacementLibre(dofus);
                        dofus->pages.pageClassement.boolPageClassement = false;

                    }else if(dofus->allegro.event.mouse.x >= 857 && dofus->allegro.event.mouse.y >= 637
                            && dofus->allegro.event.mouse.x <= 1022 && dofus->allegro.event.mouse.y <= 693
                            && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true) {
                        dofus->pages.menuPrincipal.boolMenuPrincipal = true;
                        dofus->pages.pageClassement.boolPageClassement = false;

                    }
                    break;
                }
            }
        }




        else if (dofus->nbJoueursEnVie == 4) {
            annonceVainqueur(dofus);
            switch (dofus->allegro.event.type) {
                case ALLEGRO_EVENT_MOUSE_AXES: {
                    if (dofus->allegro.event.mouse.x >= 1152 && dofus->allegro.event.mouse.y >= 660
                        && dofus->allegro.event.mouse.x <= 1246 && dofus->allegro.event.mouse.y <= 702
                        && dofus->pages.pageClassement.imageVainqueur == true) {
                        dessinerBitmap(dofus, 1);
                    } else if (dofus->allegro.event.mouse.x >= 256 && dofus->allegro.event.mouse.y >= 637
                               && dofus->allegro.event.mouse.x <= 421 && dofus->allegro.event.mouse.y <= 693
                               && dofus->pages.pageClassement.imageStat == true) {
                        dessinerBitmap(dofus, 8);
                    } else if (dofus->allegro.event.mouse.x >= 558 && dofus->allegro.event.mouse.y >= 637
                               && dofus->allegro.event.mouse.x <= 723 && dofus->allegro.event.mouse.y <= 693
                               && dofus->pages.pageClassement.imageStat == true) {
                        dessinerBitmap(dofus, 9);
                    }else if (dofus->allegro.event.mouse.x >= 857 && dofus->allegro.event.mouse.y >= 637
                              && dofus->allegro.event.mouse.x <= 1022 && dofus->allegro.event.mouse.y <= 693
                              && dofus->pages.pageClassement.imageStat == true) {
                        dessinerBitmap(dofus, 10);
                    }
                    break;
                }
                case ALLEGRO_EVENT_MOUSE_BUTTON_DOWN:{
                    if(dofus->allegro.event.mouse.x >= 1152 && dofus->allegro.event.mouse.y >= 660
                       && dofus->allegro.event.mouse.x <= 1246 && dofus->allegro.event.mouse.y <= 702
                       && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageVainqueur == true){
                        affichageStat4Joueurs(dofus);
                    }else if (dofus->allegro.event.mouse.x >= 256 && dofus->allegro.event.mouse.y >= 637
                              && dofus->allegro.event.mouse.x <= 421 && dofus->allegro.event.mouse.y <= 693
                              && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true){
                        boucleTout(dofus);
                        dofus->pages.pageClassement.boolPageClassement = false;
                    }else if (dofus->allegro.event.mouse.x >= 558 && dofus->allegro.event.mouse.y >= 637
                              && dofus->allegro.event.mouse.x <= 723 && dofus->allegro.event.mouse.y <= 693
                              && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true){
                        bouclePlacementLibre(dofus);
                        dofus->pages.pageClassement.boolPageClassement = false;

                    }else if(dofus->allegro.event.mouse.x >= 857 && dofus->allegro.event.mouse.y >= 637
                             && dofus->allegro.event.mouse.x <= 1022 && dofus->allegro.event.mouse.y <= 693
                             && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true) {
                        dofus->pages.menuPrincipal.boolMenuPrincipal = true;
                        dofus->pages.pageClassement.boolPageClassement = false;

                    }
                    break;
                }
            }
        }







        else if (dofus->nbJoueursEnVie == 3) {
            annonceVainqueur(dofus);
            switch (dofus->allegro.event.type) {
                case ALLEGRO_EVENT_MOUSE_AXES: {
                    if (dofus->allegro.event.mouse.x >= 1152 && dofus->allegro.event.mouse.y >= 660
                        && dofus->allegro.event.mouse.x <= 1246 && dofus->allegro.event.mouse.y <= 702
                        && dofus->pages.pageClassement.imageVainqueur == true) {
                        dessinerBitmap(dofus, 1);
                    } else if (dofus->allegro.event.mouse.x >= 256 && dofus->allegro.event.mouse.y >= 637
                               && dofus->allegro.event.mouse.x <= 421 && dofus->allegro.event.mouse.y <= 693
                               && dofus->pages.pageClassement.imageStat == true) {
                        dessinerBitmap(dofus, 5);
                    } else if (dofus->allegro.event.mouse.x >= 558 && dofus->allegro.event.mouse.y >= 637
                               && dofus->allegro.event.mouse.x <= 723 && dofus->allegro.event.mouse.y <= 693
                               && dofus->pages.pageClassement.imageStat == true) {
                        dessinerBitmap(dofus, 6);
                    }else if (dofus->allegro.event.mouse.x >= 857 && dofus->allegro.event.mouse.y >= 637
                              && dofus->allegro.event.mouse.x <= 1022 && dofus->allegro.event.mouse.y <= 693
                              && dofus->pages.pageClassement.imageStat == true) {
                        dessinerBitmap(dofus, 7);
                    }
                    break;
                }
                case ALLEGRO_EVENT_MOUSE_BUTTON_DOWN:{
                    if(dofus->allegro.event.mouse.x >= 1152 && dofus->allegro.event.mouse.y >= 660
                       && dofus->allegro.event.mouse.x <= 1246 && dofus->allegro.event.mouse.y <= 702
                       && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageVainqueur == true){
                        affichageStat3Joueurs(dofus);
                    }else if (dofus->allegro.event.mouse.x >= 256 && dofus->allegro.event.mouse.y >= 637
                              && dofus->allegro.event.mouse.x <= 421 && dofus->allegro.event.mouse.y <= 693
                              && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true){
                        boucleTout(dofus);
                        dofus->pages.pageClassement.boolPageClassement = false;
                    }else if (dofus->allegro.event.mouse.x >= 558 && dofus->allegro.event.mouse.y >= 637
                              && dofus->allegro.event.mouse.x <= 723 && dofus->allegro.event.mouse.y <= 693
                              && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true){
                        bouclePlacementLibre(dofus);
                        dofus->pages.pageClassement.boolPageClassement = false;

                    }else if(dofus->allegro.event.mouse.x >= 857 && dofus->allegro.event.mouse.y >= 637
                             && dofus->allegro.event.mouse.x <= 1022 && dofus->allegro.event.mouse.y <= 693
                             && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true) {
                        dofus->pages.menuPrincipal.boolMenuPrincipal = true;
                        dofus->pages.pageClassement.boolPageClassement = false;

                    }
                    break;
                }
            }
        }
    }
}

void affichageClassement(Dofus* dofus){
    al_clear_to_color(BLANC);
    int decalageX = 0;

    if (dofus->pages.pageClassement.imageVainqueur) {
        al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                              dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteX,
                              dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteY,
                              dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteLargeur,
                              dofus->pages.pageClassement.finDeGame[VAINQUEUR].spriteHauteur, 0, 0, 0);
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], BLANC, 600, 360, 0, "%s", dofus->joueurActif->strNomJoueur);
    }

    if(dofus->pages.pageClassement.imageStat){
        switch (dofus->nbJoueursEnVie) {
            case 2:{
                decalageX = 383;

                al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                      dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteX,
                                      dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteY,
                                      dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteLargeur,
                                      dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS].spriteHauteur, 0, 0, 0);

                if(dofus->pages.pageClassement.newPartieHoover){
                    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteX,
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteY,
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteLargeur,
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_NOUVELLE_PARTIE].spriteHauteur, 0, 0, 0);

                } else if (dofus->pages.pageClassement.rejouerHoover){
                    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteX,
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteY,
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteLargeur,
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);

                }else if (dofus->pages.pageClassement.quitterHoover){
                    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteX,
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteY,
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteLargeur,
                                          dofus->pages.pageClassement.finDeGame[STAT_2_JOUEURS_QUITTER].spriteHauteur, 0, 0, 0);

                }


                break;
            }

            case 3:{
                decalageX = 247;
                al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                      dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteX,
                                      dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteY,
                                      dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteLargeur,
                                      dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS].spriteHauteur, 0, 0, 0);
                if(dofus->pages.pageClassement.newPartieHoover){
                    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteX,
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteY,
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteLargeur,
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_NOUVELLE_PARTIE].spriteHauteur, 0, 0, 0);

                } else if (dofus->pages.pageClassement.rejouerHoover){
                    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteX,
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteY,
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteLargeur,
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);

                }else if (dofus->pages.pageClassement.quitterHoover){
                    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteX,
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteY,
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteLargeur,
                                          dofus->pages.pageClassement.finDeGame[STAT_3_JOUEURS_QUITTER].spriteHauteur, 0, 0, 0);

                }

                break;
            }

            case 4:{
                decalageX = 184;
                al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                      dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteX,
                                      dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteY,
                                      dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteLargeur,
                                      dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS].spriteHauteur, 0, 0, 0);

                if(dofus->pages.pageClassement.newPartieHoover){
                    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteX,
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteY,
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteLargeur,
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_NOUVELLE_PARTIE].spriteHauteur, 0, 0, 0);

                } else if (dofus->pages.pageClassement.rejouerHoover){
                    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteX,
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteY,
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteLargeur,
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_REJOUER].spriteHauteur, 0, 0, 0);

                }else if (dofus->pages.pageClassement.quitterHoover){
                    al_draw_bitmap_region(dofus->tabBitmap[FIN_DE_GAME],
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_QUITTER].spriteX,
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_QUITTER].spriteY,
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_QUITTER].spriteLargeur,
                                          dofus->pages.pageClassement.finDeGame[STAT_4_JOUEURS_QUITTER].spriteHauteur, 0, 0, 0);

                }


                break;
            }





        }

        for (int i = 0; i < dofus->nbJoueursEnVie; i++) {
            int x = i * decalageX;
            al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 100, 0,"%s", dofus->joueur->strNomJoueur);
            al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 220, 0, "%d", dofus->joueur->pvRestants);
            al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 300, 0,"%d", dofus->joueur->nbDegatInflige);
            al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 370, 0,"%d", dofus->joueur->nbDegatSubi);
            al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 440, 0,"%d", dofus->joueur->nbPm);
            al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], al_map_rgb(255,255,255),567+x, 530, 0,"%d", dofus->joueur->nbPA);
            dofus->joueur = dofus->joueur->next;
        }
    }


    al_flip_display();
}

void boucleClassementLuca(Dofus *dofus) {
    dofus->pages.pageClassement.imageVainqueur = true;
    dofus->pages.pageClassement.imageStat = false;
    dofus->pages.pageClassement.boolPageClassement = false;

    affichageClassement(dofus);

    while (!dofus->pages.pageClassement.boolPageClassement) {
        al_wait_for_event(dofus->allegro.queue, &dofus->allegro.event);
        switch (dofus->allegro.event.type) {
            case ALLEGRO_EVENT_MOUSE_AXES : {
                dofus->dessin = true;


                if (dofus->allegro.event.mouse.x >= 256 && dofus->allegro.event.mouse.y >= 637
                    && dofus->allegro.event.mouse.x <= 421 && dofus->allegro.event.mouse.y <= 693
                    && dofus->pages.pageClassement.imageStat == true){
                    dofus->pages.pageClassement.newPartieHoover = true;
                    dofus->pages.pageClassement.quitterHoover = false;
                    dofus->pages.pageClassement.rejouerHoover = false;
                }else if (dofus->allegro.event.mouse.x >= 558 && dofus->allegro.event.mouse.y >= 637
                          && dofus->allegro.event.mouse.x <= 723 && dofus->allegro.event.mouse.y <= 693
                          && dofus->pages.pageClassement.imageStat == true){
                    dofus->pages.pageClassement.rejouerHoover = true;
                    dofus->pages.pageClassement.quitterHoover = false;
                    dofus->pages.pageClassement.newPartieHoover = false;

                }else if(dofus->allegro.event.mouse.x >= 857 && dofus->allegro.event.mouse.y >= 637
                         && dofus->allegro.event.mouse.x <= 1022 && dofus->allegro.event.mouse.y <= 693
                         && dofus->pages.pageClassement.imageStat == true) {
                    dofus->pages.pageClassement.quitterHoover = true;
                    dofus->pages.pageClassement.rejouerHoover = false;
                    dofus->pages.pageClassement.newPartieHoover = false;
                } else {
                    dofus->pages.pageClassement.quitterHoover = false;
                    dofus->pages.pageClassement.rejouerHoover = false;
                    dofus->pages.pageClassement.newPartieHoover = false;
                }
                break;
            }
            case ALLEGRO_EVENT_MOUSE_BUTTON_DOWN : {
                dofus->dessin = true;
                if (dofus->allegro.event.mouse.x >= 1152 && dofus->allegro.event.mouse.y >= 660
                    && dofus->allegro.event.mouse.x <= 1246 && dofus->allegro.event.mouse.y <= 702
                    && dofus->pages.pageClassement.imageVainqueur == true && dofus->allegro.event.mouse.button == 1) {
                    dofus->pages.pageClassement.imageVainqueur = false;
                    dofus->pages.pageClassement.imageStat = true;
                    printf("Stats\n");
                } else if (dofus->allegro.event.mouse.x >= 256 && dofus->allegro.event.mouse.y >= 637
                          && dofus->allegro.event.mouse.x <= 421 && dofus->allegro.event.mouse.y <= 693
                          && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true){
                    dofus->pages.pageClassement.boolPageClassement = true;
                    dofus->pages.menuPrincipal.boolMenuPrincipal = false;
                }else if (dofus->allegro.event.mouse.x >= 558 && dofus->allegro.event.mouse.y >= 637
                          && dofus->allegro.event.mouse.x <= 723 && dofus->allegro.event.mouse.y <= 693
                          && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true){
                    dofus->pages.pageClassement.boolPageClassement = true;
                    dofus->pages.pagePlacementLibre.boolPagePlacementLibre = false;

                }else if(dofus->allegro.event.mouse.x >= 857 && dofus->allegro.event.mouse.y >= 637
                         && dofus->allegro.event.mouse.x <= 1022 && dofus->allegro.event.mouse.y <= 693
                         && dofus->allegro.event.mouse.button == 1 && dofus->pages.pageClassement.imageStat == true) {
                    dofus->pages.pageClassement.boolPageClassement = true;
                    dofus->endGame = true;
                }

                break;
            }

            case ALLEGRO_EVENT_TIMER : {
                if(dofus->dessin){
                    affichageClassement(dofus);
                    dofus->dessin = false;
                }
                break;
            }
            case ALLEGRO_EVENT_DISPLAY_CLOSE : {
                dofus->endGame = true;
                dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
                dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
                dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
                dofus->pages.pageJeu.boolPageJeu = true;
                dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
                exit(1);
                break;
            }
        }
    }
}

