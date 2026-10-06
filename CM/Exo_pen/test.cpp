#include <iostream>
#include "pen.h"

using namespace std;

int main() {
    Pen p1; // p1 located at 0,0 ; p1 is up
    Pen p2(10, 20); // p2 located at 10,20 ; p1 is up
    
    cout << "pen p2 au depart->[";
    cout << p2.getState() << ", ";
    cout << p2.getX() << ", " << p2.getY() << "]"; //afiche l'état initial du stylo
    cout << endl;

    p2.down();//le stylo se baisse et change de position 
    p2.move(100, 20);
    
    cout << "pen p2->["; // on affiche la position
    cout << p2.getState() << ", "; 
    cout << p2.getX() << ", " << p2.getY() << "]";
    
    p2.up(); //le stylo se lève
    
    cout << endl << "pen p2->["; // on affiche la position
    cout << p2.getState() << ", ";
    cout << p2.getX() << ", " << p2.getY() << "]";
    
    cout << endl;
    return 0;
}
