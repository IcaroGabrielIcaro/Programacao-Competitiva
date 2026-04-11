#include <bits/stdc++.h>

using namespace std;

int main() {

    int T, X;
    cin >> T >> X;

    int ultimoSalvo = 0;
    for (int i = 0; i <= T; i++) {
        int a;
        cin >> a;

        if (i == 0) {
            ultimoSalvo = a;
            cout << i << " " << a << "\n";
        } else if (abs(ultimoSalvo - a) >= X) {
            ultimoSalvo = a;
            cout << i << " " << a << "\n";
        }
    }

    return 0;

}