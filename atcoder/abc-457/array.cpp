#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int X;
    cin >> X;

    cout << A[X - 1];
    
    return 0;

}