#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>

using namespace std;

// dichiaro variabili e vettori del problema a livello globale, per semplicità
int B, N;
vector<int> P;

// funzione che svolge il calcolo spefico del problema
vector<int> allyoucaneat( ) {
    int min_money_remain = B;
    vector<int> BEST_RESULT;
    for (int i=0; i<P.size(); i++) {
        if (P[i]>B) continue;
        vector<int> current_plates;
        int current_money_remain = B - P[i];
        current_plates.push_back(P[i]);
        for (int j=i+1; j<P.size(); j++) {
            if (P[j]>current_money_remain) continue;
            current_plates.push_back(P[j]);
            current_money_remain -= P[j];
        }
        if ( current_money_remain < min_money_remain ) {
            BEST_RESULT = current_plates;
            min_money_remain = current_money_remain;
        }
        if (current_money_remain==0) break;
    }
    return BEST_RESULT;
}

// main che carica i dati di input, chiama la funzione di elaborazione e salva i dati in output
int main() {

    // riassegna lo standard I/O ai file di input output
    freopen("menu_giapponese_input.txt", "r", stdin);
    freopen("menu_giapponese_output.txt", "w", stdout);

    // legge i valori delle variabili del problema (il numero di piatti ed il budget a disposizione)
    cin >> N >> B;
    P.resize(N);
    // carica il vettore dei prezzi degli N piatti
    for (int i=0; i<N; i++) cin >> P[i];

    // chiama la funzione di elaborazione specifica del problema
    vector<int> R = allyoucaneat();

    // salva i prezzi dei piatti scelti per massimizzare l'utilizzo del badget
    for (int i=0; i<R.size(); i++) {
        cout << R[i];
        if (i>0) cout << endl;
    }
}
