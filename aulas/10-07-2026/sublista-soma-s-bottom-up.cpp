#include <bits/stdc++.h>

using namespace std;

int N, S;
vector<int> dados(100);
vector<int> memo(100009, 0);

int main() {

    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        cin >> dados[i];
    }

    for (int i = 1; i < 100009; i++) {
        for (int dado : dados) {

            int sub = i - dado;

            if (sub < 0) continue;
            if (sub == 0) memo[i] = 1;
            if (memo[sub] == 1) memo[i] = 1;
        }
    }

    cout << memo[S] << endl;
    
    return 0;

}