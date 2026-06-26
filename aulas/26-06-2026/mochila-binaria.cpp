#include <bits/stdc++.h>
 
using namespace std;

int n, c;
vector<pair<int, double>> valores(18);
double ans = 0;

void dfs(int som, int index, double valor) {
    ans = max(valor, ans);

    for (int i = index + 1; i < n; i++) {
        if (som + valores[i].first <= c) {
            dfs(som + valores[i].first, i, valor + valores[i].second);
        }
    }
}

int main() {

    cin >> n >> c;

    for (int i = 0; i < n; i++) {
        int p;
        double v;
        cin >> p >> v;

        valores[i] = {p, v};
    }

    for (int i = 0; i < n; i++) {
        dfs(valores[i].first, i, valores[i].second);
    }

    cout << fixed << setprecision(2) << ans << endl;

    return 0;

}