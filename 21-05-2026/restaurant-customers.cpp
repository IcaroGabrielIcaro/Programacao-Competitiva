#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n;
    cin >> n;

    vector<pair<long long, long long>> ns;
    for (long long i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        pair<long long, long long> ab(a, b);
        ns.push_back(ab);
    }
    
    return 0;

}