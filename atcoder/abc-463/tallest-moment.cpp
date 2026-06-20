#include <bits/stdc++.h>

using namespace std;

int main () {
    
    int N;
    cin >> N;

    vector<long long> H(N);
    vector<long long> L(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i] >> L[i];
    }

    vector<long long> M(N);
    M[N - 1] = H[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        M[i] = max(M[i + 1], H[i]);
    }

    int Q;
    cin >> Q;

    vector<int> Hs;
    for (int i = 0; i < Q; i++) {
        long long T;
        cin >> T;

        int p = upper_bound(L.begin(), L.end(), T) - L.begin();
        cout << M[p] << endl;
    }

    return 0;
    
}