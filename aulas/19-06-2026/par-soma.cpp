#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, s;
    cin >> n >> s;

    bool ok = false;
    // pair<index, valor>
    vector<pair<int, int>> bolinha;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;

        if (bolinha[a].second != 0) {
            cout << bolinha[a].first << " " << i;
            ok = true;
            break;
        }

        if (a < s) {
            bolinha[s - a] = {i, a};
        }
    }

    if (!ok) {
        cout << "IMPOSSIVEL";
    }

    return 0;
    
}