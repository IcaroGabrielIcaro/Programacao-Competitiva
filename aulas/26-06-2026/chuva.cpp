#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<string> mp(500);
queue<pair<int, int>> q;

void bfs(pair<int, int> pos) {
    if (pos.first < 0 || pos.first >= N || pos.second < 0 || pos.second >= M || mp[pos.first][pos.second] == '#') {
        return;
    }

    mp[pos.first][pos.second] = 'o';

    if (pos.first + 1 < N && mp[pos.first + 1][pos.second] == '#') {
        if (mp[pos.first][pos.second - 1] != 'o' && mp[pos.first][pos.second - 1] != '#') {
            q.push({pos.first, pos.second - 1});
        }

        if (mp[pos.first][pos.second + 1] != 'o' && mp[pos.first][pos.second + 1] != '#') {
            q.push({pos.first, pos.second + 1});
        }
    } else {
        q.push({pos.first + 1, pos.second});
    }

    while (!q.empty()) {
        auto a = q.front();
        q.pop();
        bfs(a);
    }
}

int main() {

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> mp[i];
    }

    for (int i = 0; i < M; i++) {
        if (mp[0][i] == 'o') {
            q.push({0, i});
        }
    }

    pair<int, int> a = q.front();
    q.pop();
    bfs(a);

    for (int i = 0; i < N; i++) {
        cout << mp[i] << endl;
    }

    return 0;
}