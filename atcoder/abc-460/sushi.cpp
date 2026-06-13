#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    multiset<int> As;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;

        As.insert(A);
    }

    multiset<int> Bs;
    for (int i = 0; i < M; i++) {
        int B;
        cin >> B;
        
        Bs.insert(B);
    }

    int res = 0;
    auto B = Bs.begin();
    for (int A : As) {
        if (B == Bs.end()) {
            break;
        }
        
        if (*B <= A * 2) {
            res++;
            B++;
        }
    }

    cout << res;

    return 0;

}