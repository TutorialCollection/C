/*
** main.cpp
** programma di test del progetto Poste Italiane - Sandro Gallo - 06/04/2024
*/

#include <iostream>
#include "UfficioPostale.cpp"

using namespace std;


int main() {

    UfficioPostale up = UfficioPostale("Saliceto");

    up.nuovoCliente( 'r' );
    up.nuovoCliente( 's' );
    up.nuovoCliente( 'r' );
    up.nuovoCliente( 'r' );
    up.nuovoCliente( 'f' );
    up.nuovoCliente( 'f' );
    up.chiamaCliente( 's' );
    up.nuovoCliente( 'r' );
    up.chiamaCliente( 'r' );
    up.chiamaCliente( 'r' );
    up.chiamaCliente( 'f' );
    up.stampaTabellone();
 
}