/*
** Libro.cpp
** Classe libro - Sandro Gallo - 14/02/2024
*/

#include <iostream>
using namespace std;


class Libro {

    public:
    string titolo, autore;
    int numPagine;

    Libro ( ) {
        autore = "Sandro Gallo";
    }

};

int main() {
    Libro l1;

    l1.titolo="Il Piccolo Principe";

    cout << l1.titolo << l1.autore << endl;
}