/*
Exercice 1
Question 1.1
*/
// #include <iostream>
// #include "main.h"
// using namespace std;

// int main() {
//     afficherMessage("Hello World !");
//     return 0;
// }




/*
Question 1.2
*/
// #include <iostream>
// #include <string>

// // Définition de la fonction
// void printString(const std::string& str) {
//     std::cout << str << std::endl;
// }

// int main() {
//     printString("Hello World!");
//     return 0;
// }



/*
Question 1.3 avec le fichier main.h qui joue le rôle du fichier header
*/
// #include "main.h"
// int main(){
//     afficherMessage("Hello World!");
//     return 0;
// }


/*
Question 1.4 avec la classe my_class
*/

#include <iostream>
#include <string>
using namespace std;

class my_class { // Définition de la classe
private:
    string element;

public:
    my_class() : element("") {} // Constructeur par défaut

    my_class(const string& val) : element(val) {} // Constructeur avec la variable string en arg

    void print_my_element() const { // Fonction qui imprime la variable
        cout << element << endl;
    }
};

int main() {
    my_class obj("Hello World!"); // Test avec Hello World
    obj.print_my_element();
    
    return 0;
}
