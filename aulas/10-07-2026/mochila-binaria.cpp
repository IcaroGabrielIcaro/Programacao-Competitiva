#include <bits/stdc++.h>
 
using namespace std;

int n, c;
vector<pair<int, double>> dados(100);
vector<pair<int, double>> memo(100, {-1, -1});

pair<int, double> dfs(int som, int index) {
    if (som == c) return memo[index] = dados[index];
    if (memo[index].first != -1) return memo[index];

    double valor = dados[index].second;
    pair<int, double> var = dados[index];
    for (int i = index; i < n; i++) {
        
        var = max(dfs(som + dados[i].first, i + 1), var);
        
        if (som + var.first <= c) {
            valor += var.second;
        }
    }

    return memo[index] = valor;
}

int main() {

    cin >> n >> c;

    for (int i = 0; i < n; i++) {
        int p; double v;
        cin >> p >> v;

        dados[i] = {p, v};
    }

    cout << fixed << setprecision(2) << dfs(0, 0) << endl;

    return 0;

}