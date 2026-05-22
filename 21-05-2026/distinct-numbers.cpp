#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    set<int> ns;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ns.insert(x);
    }

    cout << ns.size();

    return 0;

}