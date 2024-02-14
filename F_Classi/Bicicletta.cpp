/*
** Bicicletta.cpp
** Classe bicicletta - Sandro Gallo - 14/02/2024
*/

#include <iostream>
using namespace std;

class Bicicletta {
    int raggio;
    string colore;

    Bicicletta( int r, string c ) {
        raggio=r;
        colore=c;
    }
    void presentati() {
        cout << "Buongiorno, sono una bici di colore " << colore << " e con le ruote " << raggio << "!" << endl;
    }
};

int main()
{

    Bicicletta x(16,"verdino");
    Bicicletta y(14,"rossastro");

    x.presentati();
    y.presentati();

    return 0;
}
