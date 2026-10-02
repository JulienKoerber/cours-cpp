#include <iostream>
#include "Complex2D.h"
using namespace std;

int main() {
    // Test des constructeurs
    Complex2D c1(3.0, 4.0); // 3 + 4i
    Complex2D c2(1.0, 2.0); // 1 + 2i

    // Test de l'addition
    Complex2D c3 = c1 + c2;

    // Test de la multiplication
    Complex2D c4 = c1 * c2;

    cout << "Partie reelle du resultat : " << c3.getReel() << endl;
    cout << "Partie imaginaire du resultat : " << c3.getImaginaire() << endl;
    cout << "Addition : " << c3.getReel() << " + " << c3.getImaginaire() << "i" << endl;
    cout << "Multiplication : " << c4.getReel() << " + " << c4.getImaginaire() << "i" << endl;

    return 0;
}
