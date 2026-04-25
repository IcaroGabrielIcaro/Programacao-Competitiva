#include<bits/stdc++.h>

using namespace std;

int main(){

    int H, W;
    cin >> H >> W;

    vector<string> grade(H);
    for (int i = 0; i < H; i++) {
        cin >> grade[i];
    }

    int resultado = 0;

    for (int h1 = 0; h1 < H; h1++) {
        for (int h2 = h1; h2 < H; h2++) {
            for (int w1 = 0; w1 < W; w1++) {
                for (int w2 = w1; w2 < W; w2++) {

                    bool simetrico = true;

                    for (int i = h1; i <= h2 && simetrico; i++) {
                        for (int j = w1; j <= w2; j++) {

                            int iresultado = h1 + h2 - i;
                            int jresultado = w1 + w2 - j;

                            if (grade[i][j] != grade[iresultado][jresultado]) {
                                simetrico = false;
                                break;
                            }
                        }
                    }

                    if (simetrico) {
                        resultado++;
                    }
                }
            }
        }
    }

    cout << resultado;

    return 0;

}