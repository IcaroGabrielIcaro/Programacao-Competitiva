#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m, k;
    cin >> n >> m >> k;

    multiset<int> as;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        as.insert(a);
    }

    multiset<int> bs;
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;

        bs.insert(b);
    }

    int res = 0;
    auto b = bs.begin();
    for (int a : as) {

        while (b != bs.end() && *b < a - k) {
            b++;
        }

        if (b == bs.end()) {
            break;
        }

        if (*b > a + k) {
            continue;
        }

        res++;
        b++;
        
    }

    cout << res;
    
    return 0;

}