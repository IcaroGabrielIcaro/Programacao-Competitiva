#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<vector<int>> As;
    for (int i = 0; i < N; i++) {

        int L;
        cin >> L;

        vector<int> Ai;
        for (int j = 0; j < L; j++) {
            int A;
            cin >> A;

            Ai.push_back(A);
        }

        As.push_back(Ai);
    }

    int X, Y;
    cin >> X >> Y;

    vector<int> result = As[X - 1];
    cout << result[Y - 1];
    
    return 0;

}