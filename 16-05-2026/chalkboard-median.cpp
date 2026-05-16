#include <bits/stdc++.h>

using namespace std;

int main() {

    long long X, Q;
    cin >> X >> Q;

    multiset<long long> lista;
    lista.insert(X);
    auto med = lista.begin();

    for (int i = 0; i < Q; i++) {
        long long A, B;
        cin >> A >> B;

        lista.insert(A);
        lista.insert(B);

        if (A < *med && B < *med) {
            med--;
        } else if (A > *med && B > *med) {
            med++;
        }

        cout << *med << endl;
    }

    return 0;

}