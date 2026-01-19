#include <stdio.h>

typedef struct {
    float weight;
    float tail_length;
    void (*make_sound)();
} Felidae;

typedef struct {
    Felidae felidae;
} Panthera;

typedef struct {
    Panthera panthera;
} Tigris;

typedef struct {
    Felidae felidae;
} Felis;

typedef struct {
    Felis felis;
} Catus;

void make_roar() {
    printf("Roar\n");
}

void make_meow() {
    printf("Meow\n");
}

void init_felidae(Felidae *felidae, float weight, float tail_length, void (*make_sound)()) {
    // TODO: Assign weight, tail_length, and make_sound to felidae

    printf("Felidae constructor\n");
    printf("Weight: %.1f kg\n", felidae->weight);
    printf("Tail length: %.1f m\n", felidae->tail_length);
}

void init_panthera(Panthera *panthera, float weight, float tail_length) {
    // TODO: Initialize felidae in panthera

    printf("Panthera constructor\n");
}

void init_tigris(Tigris *tigris) {
    // TODO: Initialize panthera in tigris

    printf("Tigris constructor\n");
}

void init_felis(Felis *felis, float weight, float tail_length) {
    // TODO: Initialize felidae in felis

    printf("Felis constructor\n");
}

void init_catus(Catus *catus) {
    // TODO: Initialize felis in catus

    printf("Catus constructor\n");
}

void deinit_felidae(Felidae *felidae) {
    // TODO: Set make_sound to NULL

    printf("Felidae destructor\n");
}

void deinit_panthera(Panthera *panthera) {
    printf("Panthera destructor\n");
    // TODO: Deinitialize felidae in panthera

}

void deinit_tigris(Tigris *tigris) {
    printf("Tigris destructor\n");
    // TODO: Deinitialize panthera in tigris

}

void deinit_felis(Felis *felis) {
    printf("Felis destructor\n");
    // TODO: Deinitialize felidae in felis

}

void deinit_catus(Catus *catus) {
    printf("Catus destructor\n");
    // TODO: Deinitialize felis in catus
    
}

int main() {
    Tigris tigris;
    init_tigris(&tigris);
    tigris.panthera.felidae.make_sound();

    Catus catus;
    init_catus(&catus);
    catus.felis.felidae.make_sound();

    deinit_catus(&catus);
    deinit_tigris(&tigris);
}
