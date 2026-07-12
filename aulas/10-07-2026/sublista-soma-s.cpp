#include <bits/stdc++.h>

using namespace std;

int N, S;
vector<int> valores(100);
vector<int> memo(100009, 0);

bool back(int index, int val) {
    if (val == 0) return 1;
    if (memo[val]) return 0;

    for (int i = index; i < N; i++) {
        if (i == index || val - valores[i] < 0) continue;
        if (back(i, val - valores[i])) return 1;
    }

    memo[val] = 1;
    return 0;
}

int main() {

    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        cin >> valores[i];
    }

    bool ok = false;
    for (int i = 0; i < N; i++) {
        if (back(i, S - valores[i])) {
            ok = true;
            break;
        }
    }

    cout << ok << endl;

    return 0;

}