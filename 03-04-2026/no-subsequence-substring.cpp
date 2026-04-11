#include <bits/stdc++.h>

using namespace std;

int main() {

    string S, T;
    cin >> S >> T;

    int contadorResponsta = 0;
    for (int i = 0; i < S.size(); i++) {
        for (int j = 1; j <= S.size() - i; j++) {

            string s = S.substr(i, j);

            if (s.size() < T.size()) {
                contadorResponsta++;
                continue;
            }

            bool ehSubsequencia = false;
            int caracterPosicao = 0;
            for (char ss : s) {
                if (ss == T[caracterPosicao]) {
                    caracterPosicao++;
                }

                if (caracterPosicao == T.size()) {
                    ehSubsequencia = true;
                    break;
                }
            }

            if (ehSubsequencia) {
                break;
            } else {
                contadorResponsta++;
            }
        }
    }

    cout << contadorResponsta;

    return 0;

}