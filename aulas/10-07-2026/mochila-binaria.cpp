#include <bits/stdc++.h>
 
using namespace std;

int n, c;
vector<pair<int, double>> valores(100);
vector<vector<double>> memo(101, vector<double>(100001, -1));

double dfs(int som, int index) {
    if (index == n) return 0;
    if (memo[index][som] != -1) return memo[index][som];

    double res = dfs(som, index + 1);

    if (som + valores[index].first <= c)
        res = max(res, valores[index].second + dfs(som + valores[index].first, index + 1));

    return memo[index][som] = res;
}

int main() {

    cin >> n >> c;

    for (int i = 0; i < n; i++) {
        int p; double v;
        cin >> p >> v;

        valores[i] = {p, v};
    }

    cout << fixed << setprecision(2) << dfs(0, 0) << endl;

    return 0;

}