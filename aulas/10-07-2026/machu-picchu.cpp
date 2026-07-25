#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> dados(100, vector<int>(100));
vector<vector<int>> memo(101, vector<int>(101, 0));

int back(int lin, int col) {
    if (lin == n - 1) return dados[lin][col];
    if (memo[lin][col] != 0) return memo[lin][col];

    int ans = 1e9;
    for (int i = col - 1; i <= col + 1; i++) {
        if (i >= 0 && i < m) ans = min(ans, back(lin + 1, i));
    }

    return memo[lin][col] = ans + dados[lin][col];
}

int main() {

    cin >> n >> m;
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> dados[i][j];

    int ans = 1e9;
    for (int j = 0; j < m; j++) ans = min(ans, back(0, j));

    cout << ans << endl;

    return 0;

}