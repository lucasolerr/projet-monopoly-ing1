#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_PAGEMENUINGAME_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_PAGEMENUINGAME_H

#include "../../Structures/structures.h"

void affichageBarreHUD(Dofus* dofus);

void initSpriteHUD(Dofus* dofus);

void affichagePMLogo(Dofus* dofus);

void affichagePALogo(Dofus* dofus);

void affichagePVLogo(Dofus* dofus);

void affichageTerminerTourLogoStatique(Dofus* dofus);

void affichageTerminerTourLogoHover(Dofus* dofus);

void affichageTerminerTourLogoClic(Dofus* dofus);

void affichageChronoLogo(Dofus* dofus);

void affichageGeneralHUD(Dofus* dofus);

void affichageLogoEca(Dofus* dofus, int x, int y, Joueurs* temp);

void affichageLogoOsa(Dofus* dofus, int x, int y, Joueurs* temp);

void affichageLogoFeca(Dofus* dofus, int x, int y, Joueurs* temp);

void affichageLogoIop(Dofus* dofus, int x, int y, Joueurs* temp);

void calculHoverLogos(Dofus* dofus);

void calculClicLogo(Dofus* dofus);

void affichageTerminerTourGeneral(Dofus* dofus);

void dessinerTableauGaucheJoueur(Dofus* dofus);

void affichageTemplateInfos(Dofus* dofus, int x, int y, ALLEGRO_COLOR color, int classe);

void afficherInfosFeca(Dofus* dofus);

void afficherInfosIop(Dofus* dofus);

void afficherInfosOsa(Dofus* dofus);

void afficherInfosEca(Dofus* dofus);

void afficherInfosTabOuClic(Dofus* dofus);

void affichageBannerASonTourDeJoueur(Dofus* dofus);

void afficherInfosTab(Dofus* dofus);

void affichageEchecCritique(Dofus* dofus);

void affichageDMG(Dofus* dofus);

#endif
