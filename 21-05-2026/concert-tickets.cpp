#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n, m;
    cin >> n >> m;

    map<long long, long long> ns;
    for (long long i = 0; i < n; i++) {
        long long h;
        cin >> h;

        ns[h]++;
    }

    for (long long i = 0; i < m; i++) {
        long long t;
        cin >> t;

        // retorna o proximo do que foi passado
        auto busca = ns.upper_bound(t);

        if (busca == ns.begin()) {
            cout << -1 << endl;
        } else {

            busca--;

            cout << busca->first << endl;

            busca->second--;

            if (busca->second == 0) {
                ns.erase(busca);
            }
        }
        
    }

    return 0;

}