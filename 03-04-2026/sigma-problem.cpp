#include <bits/stdc++.h>

using namespace std;

int main() {

    long long N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for (long long i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<long long> B(M);
    for (long long i = 0; i < M; i++) {
        cin >> B[i];
    }

    long long soma = 0;
    for (long long i = 0; i < N; i++) {
        for (long long j = 0; j < M; j++) {
            soma += A[i] * B[j] * ((i + 1) % (j + 1));
        }
    }

    cout << soma % 998244353;

    return 0;

}