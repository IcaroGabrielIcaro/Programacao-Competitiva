#include <bits/stdc++.h>

using namespace std;

long long mdc(long long a, long long b) {
    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

int main() {

    long long N;
    cin >> N;

    vector<long long> As(N);
    for (long long i = 0; i < N; i++) {
        cin >> As[i];
    }

    long long m = As[0];
    for (long long i = 1; i < N; i++) {
        m = mdc(m, As[i]);
    }

    long long res = 0;
    for (long long a : As) {
        res += a / m;
    }

    cout << res << endl;

    return 0;

}