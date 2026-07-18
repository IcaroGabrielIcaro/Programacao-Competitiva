#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int H, W;
    cin >> H >> W;

    if ((W * 10000) / H / H >= 25) cout << "Yes";
    else cout << "No";

    return 0;

}