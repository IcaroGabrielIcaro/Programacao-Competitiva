#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, c;
    cin >> n >> c;

    vector<int> dados(n);
    for (int i = 0; i < n; i++) cin >> dados[i];

    vector<int> memo(c + 1, 1e9);
    memo[0] = 0;
    for (int i = 1; i <= c; i++) {
        for (int dado : dados) {
            if (i >= dado) memo[i] = min(memo[i], memo[i - dado] + 1);
        }
    }

    cout << memo[c] << endl;

    return 0;

}