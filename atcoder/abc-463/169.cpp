#include <bits/stdc++.h>

using namespace std;

int main () {

    int X, Y;
    cin >> X >> Y;

    if (X % 16 == 0 && Y % 9 == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
    
}