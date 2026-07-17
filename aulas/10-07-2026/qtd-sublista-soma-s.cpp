#include <bits/stdc++.h>

using namespace std;


int main() {
    
    int N, S;
    cin >> N >> S;
    
    vector<int> dados(N);
    for (int i = 0; i < N; i++) {
        cin >> dados[i];
    }
    
    vector<int> memo(S + 9, 0);
    memo[0] = 1;

    for (int dado : dados) {
        for (int i = S; i >= dado; i--) {
            memo[i] += memo[i - dado];
        }
    }

    cout << memo[S] << endl;
    
    return 0;

}