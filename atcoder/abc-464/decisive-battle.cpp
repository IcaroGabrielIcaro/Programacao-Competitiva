#include <bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;

    int ctd_E = 0;
    int ctd_W = 0;
    for (char s: S) {
        if (s == 'E') {
            ctd_E++;
        } else {
            ctd_W++;
        }
    }

    if (ctd_E > ctd_W) {
        cout << "East";
    } else {
        cout << "West";
    }

    return 0;

}