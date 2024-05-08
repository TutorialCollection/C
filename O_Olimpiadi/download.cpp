#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    freopen("download_input.txt", "r", stdin);
    freopen("download_output.txt", "w", stdout);

    int T, t;
    cin >> T;

    for (t = 1; t <= T; t++) {
        int N, F, C;
        
        // scrivi in queste variabili la risposta
        int nf, nc;

        cin >> N >> F >> C;

        // RISOLVI QUI IL PROBLEMA!!
        nf = nc = 0;
        while (F<=N) { N-=F; nf++; }
        while (C<=N) { N-=C; nc++; }

        cout << "Case #" << t << ": " << nf << " " << nc << endl;
    }
}
