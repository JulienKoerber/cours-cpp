#include <iostream>
#include <string>
using namespace std;

class my_class {
private:
    string element; // Variable privée string

public:
    my_class() : element("") {} //Constructeur par défaut
    my_class(const string& val) : element(val) {} // Constructeur avec un argument pour la var string
    void print_my_element() const { // fonction qui imprime la variable
        cout << element << endl;
    }
};

int main() {
    my_class obj("Hello World!");
    obj.print_my_element();
    return 0;
}
