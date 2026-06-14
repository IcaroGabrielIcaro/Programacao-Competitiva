#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    vector<int> dp(N);
    dp[0] = 0;
    dp[1] = abs(H[0] - H[1]);

    for (int i = 2; i < N; i++) {
        dp[i] = min(dp[i - 1] + abs(H[i - 1] - H[i]), dp[i - 2] + abs(H[i - 2] - H[i]));
    }

    cout << dp[N - 1] << endl;

    return 0;

}