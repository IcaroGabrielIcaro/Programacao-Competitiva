#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long X1, Y1, R1, X2, Y2, R2;
        cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;

        long long c1 = X1 - X2;
        long long c2 = Y1 - Y2;

        long long h = c1 * c1 + c2 * c2;

        long long in = abs(R1 - R2);
        long long un = R1 + R2; 

        if (in * in <= h && h <= un * un) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;

}