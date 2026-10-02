#ifndef COMPLEX2D_H
#define COMPLEX2D_H

class Complex2D {
private:
    double reel;
    double imaginaire;

public: // Constructeurs
    Complex2D();
    Complex2D(double r, double i);
    Complex2D(double val);
    Complex2D(const Complex2D& other);

    double getReel() const; // Getters et Setters
    void setReel(double r);
    double getImaginaire() const;
    void setImaginaire(double i);

    Complex2D operator+(const Complex2D& c) const; // Surcharge des opérateurs
    Complex2D operator-(const Complex2D& c) const;
    Complex2D operator*(const Complex2D& c) const;
    Complex2D operator/(const Complex2D& c) const;
    bool operator<(const Complex2D& c) const;
    bool operator>(const Complex2D& c) const;
    bool operator==(const Complex2D& c) const;
};

#endif
