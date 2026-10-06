#include "pen.h"

Pen::Pen() : x(0), y(0), state(false) {
    // Code exécuté à la création (ici vide, tout est dans l'initialisation)
}

Pen::Pen(int _x, int _y) : x(_x), y(_y), state(false) {
    // Stylo placé aux coordonnées choisies
}

void Pen::move(int dx, int dy) {
    x += dx;
    y += dy;
}

void Pen::up() {
    state = false; //le stylo est levé
}

void Pen::down() {
    state = true; //le stylo se baisse
}

// Code des getters

int Pen::getX() const {
    return x;
}

int Pen::getY() const {
    return y;
}

bool Pen::getState() const {
    return state;
}