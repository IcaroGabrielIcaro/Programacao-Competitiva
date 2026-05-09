#include <bits/stdc++.h>

using namespace std;

int main() {

    long long N, K;
    cin >> N >> K;

    vector<vector<long long>> As(N);
    vector<long long> Ls(N);

    for (long long i = 0; i < N; i++) {

        cin >> Ls[i];

        for (long long j = 0; j < Ls[i]; j++) {
            
            long long A;
            cin >> A;

            As[i].push_back(A);
        }
    }

    vector<long long> Cs(N);
    for (long long i = 0; i < N; i++) {

        cin >> Cs[i];
    }

    long long idx = 0;
    for (long long i = 0; i < N; i++) {
        if (idx + Ls[i] * Cs[i] < K) {
            idx += Ls[i] * Cs[i];
        } else {
            cout << As[i][(K - idx - 1) % Ls[i]];
            return 0;
        }
    }

    return 0;

}