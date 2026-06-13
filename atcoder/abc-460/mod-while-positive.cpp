#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    int r = 0;
    while(M != 0) {
        M = N % M;
        r++;
    }

    cout << r;
    
    return 0;

}