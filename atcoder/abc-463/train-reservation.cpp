#include <bits/stdc++.h>

using namespace std;

int main () {

    int N;
    char X;
    cin >> N >> X;

    bool ok = false;
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;

        if (X == 'A') {
            if (S[0] == 'o') {
                ok = true;
            }
        } else if (X == 'B') {
            if (S[1] == 'o') {
                ok = true;
            }
        } else if (X == 'C') {
            if (S[2] == 'o') {
                ok = true;
            }
        } else if (X == 'D') {
            if (S[3] == 'o') {
                ok = true;
            }
        } else {
            if (S[4] == 'o') {
                ok = true;
            }
        }
    }

    if (ok) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
    
}