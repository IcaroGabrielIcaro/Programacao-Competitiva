#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M;

    while (cin >> N >> M) {
        if (N == 0 && M == 0) {
            break;
        }

        set<int> falsos;

        set<int> bilhetes;
        for (int i = 0; i < M; i++) {
            int T;
            cin >> T;

            if ((bilhetes.count(T) || T > N) && (!falsos.count(T))) {
                falsos.insert(T);
            } else {
                bilhetes.insert(T);
            }
        }

        cout << falsos.size() << endl;
        
    }

    return 0;

}