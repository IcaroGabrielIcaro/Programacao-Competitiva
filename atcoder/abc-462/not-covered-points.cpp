#include <bits/stdc++.h>

using namespace std;

int main () {

    int N;
    cin >> N;

    vector<int> V(N + 1);
    for (int i = 1; i <= N; i++) {
        int X, Y;
        cin >> X >> Y;

        V[X] = Y;
    }

    int res = 0;
    int maxy = INT_MAX;
    for (int i = 1; i <= N; i++) {
        if (V[i] < maxy) {
            res++;
            maxy = V[i];
        }
    }

    cout << res << endl;

    return 0;

}