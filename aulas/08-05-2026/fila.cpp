#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N; // 1 - 50000

    // nao pode ser set porque o set deixa fora 
    // da ordem de insercao
    vector<int> pessoas(N);
    for (int i = 0; i < N; i++) {
        cin >> pessoas[i];
    }

    int M;
    cin >> M; // 1 - 50000

    set<int> sairam;
    for (int i = 0; i < M; i++) {
        int Mi;
        cin >> Mi;

        sairam.insert(Mi);
    }

    bool primeiro = true;

    // for o(nlogn)
    for (int i = 0; i < N; i++) {
        if (!sairam.count(pessoas[i])) { // busca em o(logn)
            if (!primeiro) {
                cout << " ";
            }

            cout << pessoas[i];
            primeiro = false;
        }
    }
    cout << '\n';

    return 0;

}