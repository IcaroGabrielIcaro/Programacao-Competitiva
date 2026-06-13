#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    string S;
    cin >> N >> S;

    int i = 0;
    while (S[i] == 'o') {
        i++;
    }

    cout << S.substr(i, N);

    return 0;

}