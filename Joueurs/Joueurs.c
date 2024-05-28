#include "Joueurs.h"
#include "../Map/map.h"

void appliquerMoins1(Dofus* dofus, Joueurs* temp){
    if(temp->mort && !temp->estMort){
        dofus->nbJoueurs -= 1;
        temp->estMort = true;
    }
}

bool detecterMortJoueur(Dofus* dofus){
    Joueurs* temp = dofus->joueurActif;
    for (int i = 0; i < dofus->nbJoueursEnVie; i++) {
        //dans le if : temp != dofus->joueurActif &&
        if (temp->pvRestants <= 0){
            temp->mort = true;
            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].decor = 50;
            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].blocPlein = true;
            temp->celluleActuelle.celluleX = 0;
            temp->celluleActuelle.celluleY = 0;
            dofus->joueur = temp;
            appliquerMoins1(dofus, temp);
            return true;
        }
        temp = temp->next;
    }
    return false;
}


void detecterGagnant(Dofus* dofus){
    if (dofus->nbJoueurs == 1){
        al_stop_samples();
        dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
        dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
        dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
        dofus->pages.pageJeu.boolPageJeu = true;
        dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
        dofus->pages.pageClassement.boolPageClassement = false;
    }
}

void nbDeJoueursEnVie(Dofus* dofus){
    // besoin de liste chainee
}






void sortSelectionne(Dofus* dofus){
    // vérifier  que le joueur sélectionne un sort et si oui mettre sortSelectionne à 1
}

void allocationJoueurs(Dofus* dofus){
    Joueurs* temp;
    dofus->joueur = calloc(sizeof(Joueurs), 1);
    dofus->joueur->next = dofus->joueur;
    Joueurs* parcour = dofus->joueur;
    dofus->nbJoueursEnVie = 3;
    for (int i = 0; i < dofus->nbJoueursEnVie; i++) {
        parcour->next = calloc(sizeof(Joueurs), 1);
        parcour = parcour->next;
    }
    parcour->next = dofus->joueur;
    temp = dofus->joueur;

    for (int j = 0; j < dofus->nbJoueursEnVie; j++) {
        temp->celluleActuelle.celluleX = 1;
        temp->celluleActuelle.celluleY = 1;
        temp->pvRestants = 1000;
        temp->nbPA = 6;
        temp->nbPm = 3;
        temp->nbPmActuels = 3;
        temp->isPlaying = false;
        temp->ptrClasse = &dofus->classes[rand()%4];
        for (int i = 0; i < 3; i++) {
            temp->tabCheminCellules[i].celluleX = 0;
            temp->tabCheminCellules[i].celluleY = 0;
        }
        temp = temp->next;
    }
}



void initEnDurJoueur(Dofus* dofus){
    dofus->nbJoueurs = 2;
    dofus->nbJoueursEnVie = 2;
    dofus->joueur = calloc(sizeof(Joueurs), 1);
    dofus->joueurActif = dofus->joueur;
    strcpy(dofus->joueur->strNomJoueur, "Luca");
    dofus->joueur->pvRestants = 1000;
    dofus->joueur->nbPA = 70;
    dofus->joueur->nbPm = 3;
    dofus->joueur->nbPmActuels = 3;
    dofus->joueur->isPlaying = true;
    dofus->joueur->ptrClasse = &dofus->classes[FECA];
    dofus->joueur->orientation = 0;
    dofus->joueurActif->celluleActuelle.celluleX = 0;
    dofus->joueurActif->celluleActuelle.celluleY = 0;


    dofus->joueur->next = calloc(sizeof(Joueurs), 1);
    strcpy(dofus->joueur->next->strNomJoueur, "Antoine");
    dofus->joueur->next->pvRestants = 1000;
    dofus->joueur->next->orientation = 0;
    dofus->joueur->next->nbPA = 7;
    dofus->joueur->next->ptrClasse = &dofus->classes[ECA];
    dofus->joueur->next->nbPm = 3;
    dofus->joueur->next->nbPmActuels = 3;
    dofus->joueur->next->isPlaying = false;
    dofus->joueurActif->next->celluleActuelle.celluleX = 0;
    dofus->joueurActif->next->celluleActuelle.celluleY = 0;


    dofus->joueurActif->next->next = dofus->joueur;

    for (int i = 0; i < 3; i++) {
        dofus->joueur->tabCheminCellules[i].celluleX = 0;
        dofus->joueur->tabCheminCellules[i].celluleY = 0;
        dofus->joueur->next->tabCheminCellules[i].celluleX = 0;
        dofus->joueur->next->tabCheminCellules[i].celluleY = 0;
        dofus->joueur->next->next->tabCheminCellules[i].celluleX = 0;
        dofus->joueur->next->next->tabCheminCellules[i].celluleY = 0;
        dofus->joueur->next->next->next->tabCheminCellules[i].celluleX = 0;
        dofus->joueur->next->next->next->tabCheminCellules[i].celluleY = 0;
    }
}

void actualisationCoordsIsoJoueurLorsDuClic(Dofus* dofus){
    if(dofus->interactionExterieure.mouse.boolCliqueDeplacement){
        dofus->joueurActif->celluleActuelle.celluleX = dofus->interactionExterieure.mouse.celluleCliqueeDeplacement.celluleX;
        dofus->joueurActif->celluleActuelle.celluleY = dofus->interactionExterieure.mouse.celluleCliqueeDeplacement.celluleY;
        dofus->interactionExterieure.mouse.boolCliqueDeplacement = false;
    }
}



void actualisationCoordsIsoJoueurLorsDuClicChemin(Dofus* dofus){
    if(dofus->interactionExterieure.mouse.boolCliqueDeplacement){
        dofus->joueurActif->celluleActuelle.celluleX = dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX;
        dofus->joueurActif->celluleActuelle.celluleY = dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY;
        if(dofus->joueurActif->nbPmActuels > 0 &&
        ((valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleX - dofus->joueurActif->celluleActuelle.celluleX)
        + valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleY - dofus->joueurActif->celluleActuelle.celluleY))
        <= dofus->joueurActif->nbPmActuels)){
            dofus->joueurActif->joueurEnDeplacement = true;
        }
        dofus->interactionExterieure.mouse.boolCliqueDeplacement = false;
        al_set_timer_count(dofus->allegro.timer, 1);
        dofus->interactionExterieure.nbSecondes = 0;
    }
    if (true) {
        for (int i = 0; i < dofus->joueurActif->nbDeplacementDansLeTour; i++) {
            dofus->joueurActif->nbPmActuels--;
            dofus->joueurActif->pmUtilises++;
        }
    }
}

void libererJoueur(Dofus* dofus){
    free(dofus->joueur);
}

void actualisationCoordsDeplacementDuJoueurTeleportation(Dofus *dofus) {
    if (dofus->allegro.event.mouse.button == 1 && !dofus->interactionExterieure.mouse.boolCliqueDeplacement) {
        if (dofus->interactionExterieure.mouse.celluleIso.celluleX > 1 ||
            dofus->interactionExterieure.mouse.celluleIso.celluleX <= NBCELLULEX) {
            if (dofus->interactionExterieure.mouse.celluleIso.celluleY > 1 ||
                dofus->interactionExterieure.mouse.celluleIso.celluleY <= NBCELLULEY) {
                if (!dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein) {
                    dofus->interactionExterieure.mouse.celluleCliqueeDeplacement.celluleX = dofus->interactionExterieure.mouse.celluleIso.celluleX;
                    dofus->interactionExterieure.mouse.celluleCliqueeDeplacement.celluleY = dofus->interactionExterieure.mouse.celluleIso.celluleY;
                    dofus->interactionExterieure.mouse.boolCliqueDeplacement = true;
                }
            }
        }
    }
}


