#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Q;
    cin >> N >> Q;

    vector<int> dados(N, 0);
    for (int i = 0; i < Q; i++) {
        int A, B;
        cin >> A >> B;

        if (A == 1) {
            dados[B - 1]++;
        } else {

        }
    }
    
    return 0;

}