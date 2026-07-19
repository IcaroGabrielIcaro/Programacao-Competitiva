#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, C;
    cin >> N >> C;

    vector<pair<int, double>> dados(N);
    for (int i = 0; i < N; i++) {
        int P; double V;
        cin >> P >> V;

        dados[i] = {P, V};
    }

    vector<double> memo(C + 1, 0);
    for (pair<int, double> dado: dados) {
        for (int i = C; i - dado.first >= 0; i--) {
            memo[i] = max(memo[i], memo[i - dado.first] + dado.second);
        }
    }

    cout << fixed << setprecision(2) << memo[C] << endl;

    return 0;

}