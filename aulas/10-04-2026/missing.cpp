#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long n;
    cin >> n;

    int somReal = (n + 1) * n / 2;
    int som = 0;

    for (int i = 0; i < n - 1; i++) {
        int num;
        cin >> num;

        som += num;
    }

    cout << somReal - som;

    return 0;

}