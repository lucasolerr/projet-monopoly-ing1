//
// Created by bapti on 29/05/2022.
//

#include "boucleTout.h"
#include "../Pages/MenuPrincipal/menuPrincipal.h"

void allouer(Dofus *dofus) {
    if(dofus->nbJoueurs == 2){
        dofus->joueur = calloc(sizeof(Joueurs), 1);
        dofus->joueur->next = calloc(sizeof(Joueurs), 1);
        dofus->joueur->next->next = dofus->joueur;
        dofus->joueur->pvRestants = 1000;
        dofus->joueur->nbPA = 7;
        dofus->joueur->nbPm = 3;
        dofus->joueur->nbPmActuels = 3;
        dofus->joueur->isPlaying = true;
        dofus->joueur->orientation = 0;
        dofus->joueur->next->pvRestants = 1000;
        dofus->joueur->next->nbPA = 7;
        dofus->joueur->next->nbPm = 3;
        dofus->joueur->next->nbPmActuels = 3;
        dofus->joueur->next->isPlaying = true;
        dofus->joueur->next->orientation = 0;
    } else if (dofus->nbJoueurs == 3){
        dofus->joueur = calloc(sizeof(Joueurs), 1);
        dofus->joueur->next = calloc(sizeof(Joueurs), 1);
        dofus->joueur->next->next = calloc(sizeof(Joueurs), 1);
        dofus->joueur->next->next->next = dofus->joueur;
        dofus->joueur->pvRestants = 1000;
        dofus->joueur->nbPA = 7;
        dofus->joueur->nbPm = 3;
        dofus->joueur->nbPmActuels = 3;
        dofus->joueur->isPlaying = true;
        dofus->joueur->orientation = 0;
        dofus->joueur->next->pvRestants = 1000;
        dofus->joueur->next->nbPA = 7;
        dofus->joueur->next->nbPm = 3;
        dofus->joueur->next->nbPmActuels = 3;
        dofus->joueur->next->isPlaying = true;
        dofus->joueur->next->orientation = 0;
        dofus->joueur->next->next->pvRestants = 1000;
        dofus->joueur->next->next->nbPA = 7;
        dofus->joueur->next->next->nbPm = 3;
        dofus->joueur->next->next->nbPmActuels = 3;
        dofus->joueur->next->next->isPlaying = true;
        dofus->joueur->next->next->orientation = 0;
    } else if (dofus->nbJoueurs == 4){
        dofus->joueur = calloc(sizeof(Joueurs), 1);
        dofus->joueur->next = calloc(sizeof(Joueurs), 1);
        dofus->joueur->next->next = calloc(sizeof(Joueurs), 1);
        dofus->joueur->next->next->next = calloc(sizeof(Joueurs), 1);
        dofus->joueur->next->next->next->next = dofus->joueur;
        dofus->joueur->pvRestants = 1000;
        dofus->joueur->nbPA = 7;
        dofus->joueur->nbPm = 3;
        dofus->joueur->nbPmActuels = 3;
        dofus->joueur->isPlaying = true;
        dofus->joueur->orientation = 0;
        dofus->joueur->next->pvRestants = 1000;
        dofus->joueur->next->nbPA = 7;
        dofus->joueur->next->nbPm = 3;
        dofus->joueur->next->nbPmActuels = 3;
        dofus->joueur->next->isPlaying = true;
        dofus->joueur->next->orientation = 0;
        dofus->joueur->next->next->pvRestants = 1000;
        dofus->joueur->next->next->nbPA = 7;
        dofus->joueur->next->next->nbPm = 3;
        dofus->joueur->next->next->nbPmActuels = 3;
        dofus->joueur->next->next->isPlaying = true;
        dofus->joueur->next->next->orientation = 0;
        dofus->joueur->next->next->next->pvRestants = 1000;
        dofus->joueur->next->next->next->nbPA = 7;
        dofus->joueur->next->next->next->nbPm = 3;
        dofus->joueur->next->next->next->nbPmActuels = 3;
        dofus->joueur->next->next->next->isPlaying = true;
        dofus->joueur->next->next->next->orientation = 0;
    }

    dofus->joueurActif = dofus->joueur;
    for (int i = 0; i < dofus->nbJoueurs; i++) {
        boucleChoixNomJoueur(dofus);
        dofus->allegro.coordonneesSourisX = 0;
        dofus->allegro.coordonneesSourisY = 0;
        boucleChoixClasse(dofus);
        dofus->joueurActif = dofus->joueurActif->next;
        dofus->pages.pageChoixNomJoueur.boolPageChoixNom = false;
        dofus->pages.pageChoixClasses.boolPageSelectionClasses = false;
    }
}

void boucleTout(Dofus* dofus){
    dofus->endGame = false;

    while (!dofus->endGame) {
        boucleMenuPrincipal(dofus);
        boucleChoixNombreJoueurs(dofus);
        allouer(dofus);

        bouclePlacementLibre(dofus);
        boucleCombat(dofus);
        //boucleClassementFinale(dofus);
        boucleClassementLuca(dofus);

    }
}