#include <bits/stdc++.h>

using namespace std;

int bl[] = {1, 2, 2, 2, 2, 3, 3};
int N;
int ans = 0;

void dfs(int som) {
    if (N == 0) {
        ans = 1;
        return;
    }

    if (som > N) {
        return;
    }

    if (som == N) {
        ans++;
        return;
    }

    for (int i = 0; i < 7; i++) {
        dfs(som + bl[i]);
    }
}

int main() {

    cin >> N;

    for (int i = 0; i < 7; i++) {
        dfs(bl[i]);
    }

    cout << ans << endl;

    return 0;
}