#include<bits/stdc++.h> 

using namespace std;

int main () {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        B[i]--;
    }

    int M;
    cin >> M;

    vector<string> S(M);
    for (int i = 0; i < M; i++) {
        cin >> S[i];
    }

    bool mapa[11][10][26] = {};

    for (string palavra : S) {
        int tam = palavra.size();

        for (int i = 0; i < tam; i++) {
            mapa[tam][i][palavra[i] - 'a'] = true;
        }
    }

    for (int i = 0; i < M; i++) {
        string espinha = S[i];

        if (espinha.size() != N) {
            cout << "No\n";
            continue;
        }

        bool ok = true;

        for (int j = 0; j < N; j++) {
            if (!mapa[A[j]][B[j]][espinha[j] - 'a']) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}