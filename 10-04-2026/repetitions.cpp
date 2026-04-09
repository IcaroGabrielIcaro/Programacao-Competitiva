#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    int repeticoes = 0;
    int repeticoesCaractere = 0;
    char ultimoCaractere;

    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            ultimoCaractere = s[i];
            repeticoesCaractere = 1;
        } else if (ultimoCaractere == s[i]) {
            repeticoesCaractere++;
        } else {
            ultimoCaractere = s[i];
            repeticoesCaractere = 1;
        }

        repeticoes = repeticoesCaractere > repeticoes ? repeticoesCaractere : repeticoes;
    }

    cout << repeticoes;

    return 0;
}