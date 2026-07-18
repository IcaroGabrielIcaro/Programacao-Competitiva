#include <bits/stdc++.h>

using namespace std;

int main() {

    int L, C;
    cin >> L >> C;

    vector<int> dados(L);
    for (int i = 0; i < L; i++) {
        cin >> dados[i];
    }

    vector<int> memo(C + 1, 0);
    for (int dado: dados) {
        for (int i = C; i > 0; i--) {
            if (i - dado > 0 && memo[i - dado] > dado)
                memo[i] += dado;
        }
    }

    cout << memo[C] << endl;

    return 0;

}