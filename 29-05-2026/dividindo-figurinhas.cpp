#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

int main() {

    int N;
    cin >> N;

    vector<int> As(N);
    for (int i = 0; i < N; i++) {
        cin >> As[i];
    }

    int m = As[0];
    for (int i = 1; i < N; i++) {
        m = mdc(m, As[i]);
    }

    int res = 0;
    for (int a : As) {
        res += a / m;
    }

    cout << res << endl;

    return 0;

}