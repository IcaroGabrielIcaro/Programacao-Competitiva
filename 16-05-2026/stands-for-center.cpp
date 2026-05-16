#include <bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;

    long long ans = 0;
    for (int i = 0; i < S.length(); i++) {

        if (S[i] == 'C') {
            int qtd = min(i, (int)S.length() - 1 - i);
            ans += qtd + 1;
        }
    }

    cout << ans;

    return 0;

}