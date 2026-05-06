#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    while (cin >> N) {

        vector<int> esquerdo;
        vector<int> direito;
        for (int i = 0; i < N; i++) {
            int M;
            char L;

            cin >> M >> L;

            if (L == 'E') {
                esquerdo.push_back(M);
            } else {
                direito.push_back(M);
            }
        }

        sort(esquerdo.begin(), esquerdo.end());
        sort(direito.begin(), direito.end());

        // for ()
    }

    return 0;

}