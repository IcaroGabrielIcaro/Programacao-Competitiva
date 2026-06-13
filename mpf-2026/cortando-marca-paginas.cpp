#include <bits/stdc++.h>

using namespace std;

int main() {

    int X, Y;
    cin >> X >> Y;

    int a = (X / 1) * (Y / 7);
    int b = (X / 7) * (Y / 1); 
    
    if (a > b) {
        cout << a;
    } else {
        cout << b;
    }

    return 0;

}