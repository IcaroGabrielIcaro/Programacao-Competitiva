#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> dados(N);
    for (int i = 0; i < N; i++) cin >> dados[i];

    int ans = 0;
    for (int i = 0; i < N - 2; i++) {
        if (dados[i] < dados[i + 1] && dados[i + 1] > dados[i + 2]) ans++;
    }

    cout << ans << endl;

    return 0;

}