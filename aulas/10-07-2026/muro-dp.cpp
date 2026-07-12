#include <bits/stdc++.h>

using namespace std;

int main() {

    long long N;
    cin >> N;

    vector<int> memo(3);
    memo[0] = 1;
    memo[1] = 1;
    memo[2] = 5;
    for (long long i = 3; i <= N; i++) {
        int res = (memo[2] + 4 * memo[1] + 2 * memo[0]) % 1000000007;
        memo[0] = memo[1];
        memo[1] = memo[2];
        memo[2] = res;
    }

    cout << memo[2] << endl;

    return 0;
}