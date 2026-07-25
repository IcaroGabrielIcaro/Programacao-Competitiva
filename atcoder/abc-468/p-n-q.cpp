#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> Ps(20);
vector<int> Qs(20);

vector<bool> disp(20, 1);
vector<int> atual;
void dfs(int pos) {
    if (pos == N) return;

    for (int i = 1; i <= N; i++) {
        if (disp[i]) {
            disp[i] = 0;
            atual.push_back(i);

            dfs(pos + 1);

            atual.pop_back();
            disp[i] = 1;
        }
    }
}

int main() {

    cin >> N;

    for (int i = 0; i < N; i++) cin >> Ps[i];

    for (int i = 0; i < N; i++) cin >> Qs[i];

    dfs(0);

    return 0;
    
}