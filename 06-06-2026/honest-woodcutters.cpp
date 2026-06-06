#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int N;
    cin >> N;

    vector<int> As(N);
    for (int i = 0; i < N; i++) {
        cin >> As[i];
    }

    bool ok = true;
    for (int i = 1; i <= N; i++) {
        int B;
        cin >> B;
        B--;

        if (As[B] != i) {
            ok = false;
        }
    }

    if (ok) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;

}