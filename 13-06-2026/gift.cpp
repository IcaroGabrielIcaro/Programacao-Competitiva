#include <bits/stdc++.h>

using namespace std;

int main () {

    int N;
    cin >> N;

    vector<vector<int>> rd(N + 1);
    for (int i = 1; i <= N; i++) {

        int K;
        cin >> K;

        for (int j = 0; j < K; j++) {

            int A;
            cin >> A;

            rd[A].push_back(i);
        }
    }

    for (int i = 1; i <= N; i++) {

        cout << rd[i].size();

        for (int p : rd[i]) {
            cout << " " << p;
        }

        cout << "\n";
    }

    return 0;

}