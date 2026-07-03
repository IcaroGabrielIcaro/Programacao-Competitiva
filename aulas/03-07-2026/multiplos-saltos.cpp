#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> lista(524290);
int ans = 0;

void dfs(int index, int res) {
    if (index > 2 << N) {
        ans = max(res, ans);
        return;
    }

    dfs(index * 2, res + lista[index]);
    dfs(index * 2 + 1, res + lista[index]);
}

int main() {
    cin >> N;

    for (int i = 1; i < 2 << N; i++) {
        cin >> lista[i];
    }

    dfs(1, 0);

    cout << ans << endl;

    return 0;
}