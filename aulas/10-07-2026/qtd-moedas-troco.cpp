#include <bits/stdc++.h>

using namespace std;

int n, c;
vector<int> data(20);

int dfs(int index, int som) {
    cout << data[index] << endl;
    if (som == c - 1) return 1;

    int menor = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (som + data[i] < c)
            menor = min(menor, dfs(i, som + data[i]));
    }

    return menor + 1;
}

int main() {

    cin >> n >> c;

    for (int i = 0; i < n; i++) cin >> data[i];

    cout << dfs(0, 0) << endl;

    return 0;

}