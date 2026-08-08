#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> Cs(N + 1, 0);
    for (int i = 0; i < N; i++) {
        int C;
        cin >> C;

        Cs[C]++;
    }

    int maior = 0;
    for (int c : Cs) maior = max(maior, c);

    cout << N - maior;

    return 0;

}