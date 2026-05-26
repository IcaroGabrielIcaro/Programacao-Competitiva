#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    vector<int> ls(N);
    long double mult = 1;
    for (int i = 0; i < N; i++) {
        int l;
        cin >> l;

        mult *= l;
        ls[i] = l;
    }

    long double som = 0;
    for (int i = 0; i < N; i++) {
        
        int s = ls[i] - K + 1;

        if (s > 0) {
            
            long double mul = 1;
            for (int j = 0; j < N; j++) {

                if (j == i) {
                    mul *= s;
                    continue;
                }
                mul *= ls[j];
            }

            ls[i] -= s;
            som += mul;
        }
    }

    cout << fixed << setprecision(10) <<  som / mult << endl;

    return 0;

}