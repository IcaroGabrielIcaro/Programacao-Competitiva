#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Q;
    cin >> N >> Q;

    vector<int> c(N, 0);
    vector<int> f(600005, 0);
    f[0] = N;

    int qtd = 0;

    for (int i = 0; i < Q; i++) {

        int t;
        cin >> t;

        if (t == 1) {
            int x;
            cin >> x;
            x--;

            c[x]++;
            f[c[x]]++;

            if (f[qtd + 1] == N) {
                qtd++;
            }
        } else {
            int y;
            cin >> y;

            cout << f[qtd + y] << '\n';
        }
    }

    return 0;
}