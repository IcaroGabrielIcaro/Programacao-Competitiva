#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int X;
    cin >> X;

    string s = "HelloWorld";
    for (int i = 0; i < (int)s.length(); i++) {
        if (i == X - 1) {
            continue;
        }

        cout << s[i];
    }

    return 0;

}