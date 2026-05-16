#include <bits/stdc++.h>

using namespace std;

int main() {

    string S;
    int N;

    cin >> S >> N;

    for (int i = N; i < (int)S.length() - N; i++) {
        cout << S[i];
    }

    return 0;

}