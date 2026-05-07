#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    set<pair<int, int>> balas;
    for (int i = 0; i < K; i++) {
        balas.insert({i + 1, 0});
    }

    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;

        auto atual = balas.lower_bound({X, INT_MIN});
        if (atual != balas.end() && atual->first == X) {
            pair<int, int> novo = {atual->first, atual->second};
            balas.erase(atual);

            novo.second++;

            balas.insert(novo);
        }

    }

    auto bala = balas.begin();
    int resultado = bala->second;

    for (pair<int, int> bala : balas) {
        resultado = min(resultado, bala.second);
    }

    cout << resultado << endl;

    return 0;

}