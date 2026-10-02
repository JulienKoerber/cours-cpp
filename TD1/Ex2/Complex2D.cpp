#include "Complex2D.h"
#include <cmath>

Complex2D::Complex2D() : reel(0.0), imaginaire(0.0) {} // Constructeur par défaut 

Complex2D::Complex2D(double r, double i) : reel(r), imaginaire(i) {} // Constructeur avec deux valeurs

Complex2D::Complex2D(double val) : reel(val), imaginaire(val) {} // Constructeur avec une seule valeur pour les 2 parties

Complex2D::Complex2D(const Complex2D& other) : reel(other.reel), imaginaire(other.imaginaire) {} // Constructeur de copie

double Complex2D::getReel() const { return reel; } // Getter et setter de la partie réelle
void Complex2D::setReel(double r) { reel = r; }

double Complex2D::getImaginaire() const { return imaginaire; } // Getter et setter de la partie imaginaire
void Complex2D::setImaginaire(double i) { imaginaire = i; }

Complex2D Complex2D::operator+(const Complex2D& c) const { // Addition
    return Complex2D(reel + c.reel, imaginaire + c.imaginaire);
}

Complex2D Complex2D::operator-(const Complex2D& c) const { // Soustraction
    return Complex2D(reel - c.reel, imaginaire - c.imaginaire);
}

Complex2D Complex2D::operator*(const Complex2D& c) const { // Multiplication
    return Complex2D(reel * c.reel - imaginaire * c.imaginaire,
                     reel * c.imaginaire + imaginaire * c.reel);
}

Complex2D Complex2D::operator/(const Complex2D& c) const { // Division
    double denom = c.reel * c.reel + c.imaginaire * c.imaginaire;
    return Complex2D((reel * c.reel + imaginaire * c.imaginaire) / denom,
                     (imaginaire * c.reel - reel * c.imaginaire) / denom);
}

bool Complex2D::operator<(const Complex2D& c) const { // Comparaison selon le module : |z|^2 = a^2 + b^2
    return (reel * reel + imaginaire * imaginaire) < (c.reel * c.reel + c.imaginaire * c.imaginaire);
}

bool Complex2D::operator>(const Complex2D& c) const { // Comparaison selon le module : z1 > z2 si |z1| > |z2|
    return !(*this < c) && !(*this == c);
}

bool Complex2D::operator==(const Complex2D& c) const { // Test d'égalité
    return (reel == c.reel && imaginaire == c.imaginaire);
}
