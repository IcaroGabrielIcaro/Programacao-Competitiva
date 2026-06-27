#include <bits/stdc++.h>

using namespace std;

int main() {

    int H, W;
    cin >> H >> W;

    vector<string> mp(H);
    for (int i = 0; i < H; i++) {
        cin >> mp[i];
    }

    int top_H = 0;
    for (int i = 0; i < H; i++) {
        bool ok = true;
        for (char c : mp[i]) {
            if (c == '#') {
                ok = false;
                break;
            }
        }

        if (!ok) {
            top_H = i;
            break;
        }
    }

    int bottom_H = H - 1;
    for (int i = H - 1; i >= top_H; i--) {
        bool ok = true;
        for (char c : mp[i]) {
            if (c == '#') {
                ok = false;
                break;
            }
        }

        if (!ok) {
            bottom_H = i;
            break;
        }
    }

    int top_W = 0;
    for (int j = 0; j < W; j++) {
        bool ok = true;
        for (int i = top_H; i <= bottom_H; i++) {
            if (mp[i][j] == '#') {
                ok = false;
                break;
            }
        }

        if (!ok) {
            top_W = j;
            break;
        }
    }

    int bottom_W = W - 1;
    for (int j = W - 1; j >= top_W; j--) {
        bool ok = true;
        for (int i = top_H; i <= bottom_H; i++) {
            if (mp[i][j] == '#') {
                ok = false;
                break;
            }
        }

        if (!ok) {
            bottom_W = j;
            break;
        }
    }

    for (int i = top_H; i <= bottom_H; i++) {
        for (int j = top_W; j <= bottom_W; j++) {
            cout << mp[i][j];
        }
        cout << endl;
    }

    return 0;

}