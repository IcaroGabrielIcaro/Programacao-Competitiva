#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    string nomeVencedor = "";
    int votosVencedor = 0;

    unordered_map<string, int> votos;
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;

        votos[S]++;

        if (votos[S] > votosVencedor) {
            nomeVencedor = S;
            votosVencedor = votos[S];
        }
    }

    cout << nomeVencedor;

    return 0;

}