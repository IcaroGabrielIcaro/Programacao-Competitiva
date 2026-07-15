#include <bits/stdc++.h>

using namespace std;

int N, S;
vector<int> dados(4); // alterar para 100
vector<int> memo(100009, 0);

int main() {

    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        cin >> dados[i];
    }

    for (int dado : dados) {
        for (int i = 1; i <= S; i++) { // alterar para 100009
            cout << i << " " << dado << endl;
            if (i - dado < 0) continue;
            if (dado == i) {
                memo[i]++;
                cout << "achei eu mesmo: " << memo[i] << endl;
            }
            else if (memo[i - dado] > 0) {
                memo[i]++;
                cout << "achei um pra somar comigo: " << memo[i] << endl;
            }
        }
        cout << endl;
    }

    cout << memo[S] << endl;
    
    return 0;

}