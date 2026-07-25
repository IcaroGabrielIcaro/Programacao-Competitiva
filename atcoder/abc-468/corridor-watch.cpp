#include <bits/stdc++.h>

using namespace std;

int main() {

    int M, D;
    cin >> M >> D;

    string S;
    cin >> S;

    vector<bool> dados(M, 0);
    for (int i = 0; i < M; i++) {
        if (S[i] == 'G') {
            for (int j = max(0, i - D); j <= min(M - 1, i + D); j++) dados[j] = 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < M; i++) {
        if (!dados[i]) ans++;
    }

    cout << ans << endl;

    return 0;
    
}