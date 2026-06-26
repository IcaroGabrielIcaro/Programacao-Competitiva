#include <bits/stdc++.h>
 
using namespace std;
 
int n, m;
int mtx[16][16];
int ans = INT_MAX;
 
void dfs(int res, int h, int w) {
    if (h < 0) {
        ans = min(res, ans);
        return;
    }
 
    for (int i = w - 1; i <= w + 1; i++) {
        if (i >= 0 && i < m) {
            dfs(res+mtx[h - 1][i], h - 1, i);
        }
    }
}
 
int main() {
    cin >> n >> m;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mtx[i][j];
        }
    }
 
    for (int i = 0; i < m; i++) {
        dfs(mtx[n - 1][i], n - 1, i);
    }
 
    cout << ans << endl;
 
    return 0;
 
}