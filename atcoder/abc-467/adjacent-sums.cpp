#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> As_1(N);
    vector<int> As_2(N);
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        As_1[i] = A;
        As_2[i] = A;
    }

    vector<int> Bs(N - 1);
    for (int i = 0; i < N - 1; i++) cin >> Bs[i];

    int res_1 = 0;
    for (int i = 1; i < N; i++) {
        if ((As_1[i - 1] + As_1[i]) % M != Bs[i - 1]) {
            As_1[i]++;
            res_1++;
        }
    }

    int res_2 = 0;
    As_2[0]++;
    res_2++;
    for (int i = 1; i < N; i++) {
        if ((As_2[i - 1] + As_2[i]) % M != Bs[i - 1]) {
            As_2[i]++;
            res_2++;
        }
    }

    cout << min(res_1, res_2);

    return 0;

}