cmake_minimum_required(VERSION 3.10)
project(ing1-projet-2021-22-dofus-arena-equipe-x-1 C)

set(CMAKE_C_STANDARD 99)

add_executable(ing1-projet-2021-22-dofus-arena-equipe-x-1 main.c Structures/structures.c Structures/structures.h Sorts/sorts.c Sorts/sorts.h Bitmaps/bitmaps.c Bitmaps/bitmaps.h Map/map.c Map/map.h Fichiers/fichiers.c Fichiers/fichiers.h Classes/classes.c Classes/classes.h Pages/SelectionNombreJoueur/selectionNombreJoueur.c Pages/SelectionNombreJoueur/selectionNombreJoueur.h Pages/PageMenuInGame/pageMenuInGame.c Pages/PageMenuInGame/pageMenuInGame.h FinDeGame/Statistiques/Statistiques.c FinDeGame/Statistiques/Statistiques.h FinDeGame/AnnonceVainqueur/AnnoncesVainqueurs.h FinDeGame/AnnonceVainqueur/AnnoncesVainqueurs.c Joueurs/Joueurs.c Joueurs/Joueurs.h Pages/SelectionClasse/selectionClasse.c Pages/SelectionClasse/selectionClasse.h poubelle.c Pages/ChoixNom/choixNom.c Pages/ChoixNom/choixNom.h Animations/animations.c Animations/animations.h Pages/MenuPrincipal/menuPrincipal.c Pages/MenuPrincipal/menuPrincipal.h Pages/PagePlacementLibre/pagePlacementLibre.c  Pages/PagePlacementLibre/pagePlacementLibre.h BoucleTout/boucleTout.c BoucleTout/boucleTout.h Pages/PageAide/pageAide.c Pages/PageAide/pageAide.h)

IF (WIN32)
    target_link_libraries(ing1-projet-2021-22-dofus-arena-equipe-x-1 -lmingw32 -lallegro-5.0.10-monolith-md-debug)
ELSE ()
    INCLUDE_DIRECTORIES(/opt/homebrew/Cellar/allegro/5.2.7.0/include)
    LINK_DIRECTORIES(/opt/homebrew/Cellar/allegro/5.2.7.0/lib)
    file(GLOB LIBRARIES "/opt/homebrew/Cellar/allegro/5.2.7.0/lib/*.dylib")
    message("LIBRARIES = ${LIBRARIES}")
    TARGET_LINK_LIBRARIES(ing1-projet-2021-22-dofus-arena-equipe-x-1 ${LIBRARIES})
ENDIF (WIN32)