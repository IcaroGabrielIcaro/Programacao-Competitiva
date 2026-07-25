#include <bits/stdc++.h>

using namespace std;

int n, c;
vector<int> val(20);
vector<int> memo(5000, -1);

int dfs(int som) {
    if (som == c) return 0;
    if (memo[som] != -1) return memo[som];

    int menor = 1e9;
    for (int i = 0; i < n; i++) {
        if (val[i] + som <= c) {
            menor = min(dfs(val[i] + som), menor);
        }
    }

    return memo[som] = menor + 1;
}

int main() {

    cin >> n >> c;

    for (int i = 0; i < n; i++) cin >> val[i];

    cout << dfs(0) << endl;

    return 0;

}