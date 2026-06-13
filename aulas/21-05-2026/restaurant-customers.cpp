#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> sais;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> hs;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        hs.push({a, b});
    }

    int pes = 0;
    while (!hs.empty()) {
        pair<int, int> top = hs.top();
        hs.pop();

        sais.push(top.second);

        if (top.first > sais.top()) {
            sais.pop();
        } else {
            pes++;
        }
    }

    cout << pes << endl;
    
    return 0;

}