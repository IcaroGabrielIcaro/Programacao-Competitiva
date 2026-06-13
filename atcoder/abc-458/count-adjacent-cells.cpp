#include <bits/stdc++.h>

using namespace std;

int main() {

    int H, W;
    cin >> H >> W;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            int adj = 4;

            if (i == 0) {
                adj--;
            } if (i == H - 1) {
                adj--;
            } if (j == 0) {
                adj--;
            } if (j == W - 1){
                adj--;
            }

            cout << adj;

            if (j < W - 1) {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}