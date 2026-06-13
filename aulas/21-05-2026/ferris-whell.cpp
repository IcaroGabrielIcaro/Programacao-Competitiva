#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n, x;
    cin >> n >> x;

    multiset<long long> ps;
    for (long long i = 0; i < n; i++){
        long long p;
        cin >> p;

        ps.insert(p);
    }

    long long res = 0;

    while (!ps.empty()) {

        if (ps.begin() == prev(ps.end())){
            res++;
            break;
        }

        long long primeiro = *ps.begin();
        long long ultimo = *prev(ps.end());

        ps.erase(prev(ps.end()));

        if (primeiro + ultimo <= x) {
            ps.erase(ps.begin());
        }

        res++;
    }

    cout << res << endl;

    return 0;

}