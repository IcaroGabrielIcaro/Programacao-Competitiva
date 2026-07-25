#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> dados(n, vector<int>(m));
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> dados[i][j];

    vector<vector<int>> memo(2, vector<int>(m));
    int ant = 0;
    int at = 1;

    for (int i = 0; i < m; i++) memo[ant][i] = dados[0][i];

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {

            int melhor = 1e9;
            for (int x = j - 1; x <= j + 1; x++) {
                if (x >= 0 && x < m) melhor = min(melhor, memo[ant][x]);
            }

            memo[at][j] = dados[i][j] + melhor;
        }
        swap(ant, at);
    }

    int ans = 1e9;
    for (int j = 0; j < m; j++) ans = min(ans, memo[ant][j]);

    cout << ans << endl;

    return 0;

}