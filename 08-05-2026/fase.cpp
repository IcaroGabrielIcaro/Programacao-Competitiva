#include <bits/stdc++.h>

using namespace std;

bool maior_que(int i, int j) {
    return i > j;
}

int main() {

    int N, K;
    cin >> N >> K; // 1 - 1000

    vector<int> notas(N);
    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }

    sort(notas.begin(), notas.end(), maior_que);

    int contador = 0;
    for (int i = 0; i < N; i++) {
        if (contador >= K) {
            if (notas[i] == notas[i - 1]) {
                contador++;
            } else {
                break;
            }
        } else {
            contador++;
        }
    }

    cout << contador << endl;

    return 0;

}