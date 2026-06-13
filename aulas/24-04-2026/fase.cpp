#include <bits/stdc++.h>

using namespace std;

bool maior_que(int i, int j) {
    return i > j;
}

int main() {

    int N, K;
    cin >> N >> K;

    vector<int> notas(N);
    for (int i = 0; i < N; i++) {
    
        cin >> notas[i];
    }

    sort(notas.begin(), notas.end(), maior_que);

    int corte = notas[K - 1];
    int aprovados = 0;
    for (int i = 0; i < N; i++) {
        if (notas[i] >= corte) {
            aprovados++;
        } else {
            break;
        }
    }

    cout << aprovados << endl;

    return 0;

}
