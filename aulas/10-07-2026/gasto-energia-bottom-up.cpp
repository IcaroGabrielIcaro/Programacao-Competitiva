#include <bits/stdc++.h>

using namespace std;

int main() {

    int L, C;
    cin >> L >> C;

    vector<int> dados(L);
    for (int i = 0; i < L; i++) cin >> dados[i];

    vector<int> memo(C + 1, 0);
    for (int dado: dados) {
        for (int i = C; i - dado >= 0; i--) {
            int maior_ant = memo[i - dado];
            if (memo[i - dado] + dado <= i)
                maior_ant = memo[i - dado] + dado;
            
            int maior_atual = memo[i];
            if (memo[i] + dado <= i)
                maior_atual = memo[i] + dado;
            
            memo[i] = max(maior_atual, maior_ant);
        }
    }

    cout << memo[C] << endl;

    return 0;

}