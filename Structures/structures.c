#include "structures.h"
#include "../Bitmaps/bitmaps.h"

void installAllegro(){
    assert(al_init());
    assert(al_install_keyboard());
    assert(al_install_mouse());
    assert(al_init_primitives_addon());
    al_init_font_addon();
    assert(al_init_ttf_addon());
    assert(al_init_image_addon());
    assert(al_install_audio());
    assert(al_init_acodec_addon());
}

void testmusique(Dofus* dofus){
    al_reserve_samples(NB_SONS);
    dofus->allegro.music[SON_COMBAT] = al_load_sample("../Sources/music/music_combat.wav");
    dofus->allegro.music[SON_MENU_PRINCIPAL] = al_load_sample("../Sources/music/music_principal.wav");
    dofus->allegro.music[SON_BOUTTON] = al_load_sample("../Sources/music/music_boutton.wav");
    dofus->allegro.music[SON_DAMAGE] = al_load_sample("../Sources/music/music_damage.wav");
    dofus->allegro.music[FOOTSTEPS] = al_load_sample("../Sources/music/footsteps.wav");
    dofus->allegro.music[WATER] = al_load_sample("../Sources/music/water.wav");
    dofus->allegro.music[FIRE] = al_load_sample("../Sources/music/fire.wav");
    dofus->allegro.music[FLASHBANG] = al_load_sample("../Sources/music/sword.wav");
    dofus->allegro.music[SOVA] = al_load_sample("../Sources/music/sova.wav");
}

void libererMusique(Dofus* dofus){
    for (int i = 0; i < NB_SONS; ++i) {
        al_destroy_sample(dofus->allegro.music[i]);
    }
}


void declarerAllegro(Dofus* dofus){
    dofus->allegro.display = NULL;
    dofus->allegro.queue = NULL;
    dofus->allegro.timer = NULL;
    for (int i = 0; i < NB_FONTS; i++) {
        dofus->allegro.fonts[i] = NULL;

    }
    for (int i = 0; i < NB_SONS; i++) {
        dofus->allegro.music[i] = NULL;
    }
}


void initAllegroAll(Dofus* dofus){
    displayCreate(dofus);
    queueCreate(dofus);
    timerCreate(dofus);
    fontCreateAll(dofus);
    musicIntroCreateAll(dofus);
    bitmapCreateAll(dofus);
    al_set_display_icon(dofus->allegro.display, dofus->tabBitmap[LOGO_DISPLAY]);
    registerEvents(dofus);
    testmusique(dofus);

}

void registerEvents(Dofus* dofus){
    al_register_event_source(dofus->allegro.queue, al_get_display_event_source(dofus->allegro.display));
    al_register_event_source(dofus->allegro.queue, al_get_mouse_event_source());
    al_register_event_source(dofus->allegro.queue, al_get_keyboard_event_source());
    al_register_event_source(dofus->allegro.queue, al_get_timer_event_source(dofus->allegro.timer));
}

void displayCreate(Dofus* dofus) {
    al_set_new_display_flags(ALLEGRO_WINDOWED);
    dofus->allegro.display = al_create_display(SCREEN_LARGEUR, SCREEN_HAUTEUR);
    al_set_window_title(dofus->allegro.display, "Dofus");
#ifdef WIN32
    al_set_window_position(dofus->allegro.display, 0, 0);
#else
    //al_set_window_position(dofus->allegro.display, 0, 0);
    al_set_window_position(dofus->allegro.display, 400, 200);
#endif
}

void queueCreate(Dofus* dofus){
    dofus->allegro.queue = al_create_event_queue();
}

void timerCreate(Dofus* dofus){
    dofus->allegro.timer = al_create_timer(1/60.0f);
    dofus->allegro.chrono = al_create_timer(1/60.0f);
    al_start_timer(dofus->allegro.timer);
    al_start_timer(dofus->allegro.chrono);
}

void fontInter20PXCreate(Dofus* dofus){
    dofus->allegro.fonts[INTER_20PX] = al_load_font("../Sources/fonts/Inter/Inter-Regular.ttf", 20, 0);
}

void fontAmarante20PXCreate(Dofus* dofus){
    dofus->allegro.fonts[AMARANTE_20PX] = al_load_font("../Sources/fonts/Amarante/Amarante-Regular.ttf", 20, 0);
    dofus->allegro.fonts[AMARANTE_40PX] = al_load_font("../Sources/fonts/Amarante/Amarante-Regular.ttf", 40, 0);
}

void fontCreateAll(Dofus* dofus){
    fontInter20PXCreate(dofus);
    fontAmarante20PXCreate(dofus);
}

void musicIntroCreateAll(Dofus* dofus){
    /*for (int i = 0; i < NB_SONS; i++) {
        dofus->allegro.music[i] = NULL;
    }*/ //il faut init les musics a decomposer en focntions
}



void libererDisplay(Dofus* dofus){
    al_destroy_display(dofus->allegro.display);
}

void libererTimer(Dofus* dofus){
    al_destroy_timer(dofus->allegro.timer);
    al_destroy_timer(dofus->allegro.chrono);
}

void libererQueue(Dofus* dofus){
    al_destroy_event_queue(dofus->allegro.queue);
}


void libererFontInter20PX(Dofus* dofus){
    al_destroy_font(dofus->allegro.fonts[INTER_20PX]);
}

void libererFontAmarante20PX(Dofus* dofus){
    al_destroy_font(dofus->allegro.fonts[AMARANTE_20PX]);
}

void libererFontAll(Dofus* dofus){
    libererFontInter20PX(dofus);
    libererFontAmarante20PX(dofus);
}

void libererAll(Dofus* dofus){
    libererDisplay(dofus);
    libererBitmapAll(dofus);
    libererQueue(dofus);
    libererTimer(dofus);
    libererFontAll(dofus);
    libererMusique(dofus);
}