#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> As(N);
    for (int i = 0; i < N; i++) {
        cin >> As[i];
    }

    vector<int> Bs(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> Bs[i];
    }

    int res = 0;
    for (int i = 0; i < N - 1; i++) {
        int A_atual = (As[i] + As[i + 1]) % M;
        int B_atual = Bs[i];

        int A_anterior;
        int B_anterior;
        if (i != 0) {
            A_anterior = (As[i - 1] + As[i]) % M;
            B_anterior = Bs[i - 1];
        }

        if (A_atual != B_atual) {
            
        }
    }

    cout << res;

    return 0;

}