#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    // Define um vector que tem K + 1 elementos, todos com 0
    vector<int> balas(K + 1, 0);

    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;

        balas[X]++;
    }

    int resultado = INT_MAX;

    for (int i = 1; i <= K; i++) {
        resultado = min(resultado, balas[i]);
    }

    cout << resultado << endl;

    return 0;

}