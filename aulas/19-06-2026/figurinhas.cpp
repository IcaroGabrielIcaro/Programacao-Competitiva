#include <bits/stdc++.h>

using namespace std;

int main () {

    int P, A;
    cin >> P >> A;

    set<long long> Ps;
    for (int i = 0; i < P; i++) {
        long long p;
        cin >> p;

        Ps.insert(p);
    }

    set<long long> As;
    for (int i = 0; i < A; i++) {
        long long a;
        cin >> a;

        if (Ps.count(a)) {
            Ps.erase(a);
        } else {
            As.insert(a);
        }
    }

    int tam = 1;
    for (auto ip : Ps) {
        if (tam == Ps.size()) {
            cout << ip;
        } else {
            cout << ip << " ";
        }

        tam++;
    }

    cout << endl;

    tam = 1;
    for (auto ia : As) {
        if (tam == As.size()) {
            cout << ia;
        } else {
            cout << ia << " ";
        }

        tam++;
    }

    return 0;
    
}