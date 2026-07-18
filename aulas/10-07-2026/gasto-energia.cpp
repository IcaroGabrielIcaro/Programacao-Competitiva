#include <bits/stdc++.h>

using namespace std;

int L, C;
vector<int> dados(100);
vector<int> memo(100009 * 100, -1);

int back(int index, int soma) {
    if (soma == C) return soma;
    if (memo[soma * index] != -1) return memo[soma * index];

    int maior = soma;
    for (int i = index; i < L; i++) {
        if (soma + dados[i] <= C) {
            maior = max(maior, back(i + 1, soma + dados[i]));
        }
    }

    return memo[index * soma] = maior;
}

int main() {

    cin >> L >> C;

    for (int i = 0; i < L; i++) {
        cin >> dados[i];
    }

    cout << back(0, 0) << endl;

    return 0;

}