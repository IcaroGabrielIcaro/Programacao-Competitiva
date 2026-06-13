// https://codeforces.com/problemset/problem/742/A

#include <bits/stdc++.h>

using namespace std;

int exp (int b) {
    if (b == 0) {
        return 1;
    }

    int res = exp(b / 2);

    if (b % 2) {
        return res * res * 8 % 10;
    } else{
        return res * res % 10;
    }
}

int main() {

    int n;
    cin >> n;

    cout << exp(n);

    return 0;

}