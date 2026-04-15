#include <bits/stdc++.h>

using namespace std;

int N, A, D, H;
int X[20], Y[20], Z[20];
bool resultado = false;

void backTrack (int index, int somaA, int somaD, int somaH, int usadas) {

    if (resultado) return;

    if (index == N) {
        if (somaA == A && somaD == D && somaH == H && usadas >= 2) {
            resultado = true;
        }
        return;
    }

    if (somaA + X[index] <= A && somaD + Y[index] <= D && somaH + Z[index] <= H) {
        backTrack(index + 1, somaA + X[index], somaD + Y[index], somaH + Z[index], usadas + 1);
    }
    
    backTrack(index + 1, somaA, somaD, somaH, usadas);

}

int main() {

    cin >> N >> A >> D >> H;

    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i] >> Z[i];
    }

    for (int i = 0; i < N && !resultado; i++) {
        backTrack(i + 1, X[i], Y[i], Z[i], 1);
    }

    cout << (resultado ? "Y" : "N") << endl;

    return 0;

}