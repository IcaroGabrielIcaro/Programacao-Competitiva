#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> dadoUm(6);
    vector<int> dadoDois(6);
    vector<int> dadoTres(6);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {

            if (i == 0) {
                cin >> dadoUm[j];
            } else if (i == 1) {
                cin >> dadoDois[j];
            } else {
                cin >> dadoTres[j];
            }
        }
    }

    int corretos = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            for (int k = 0; k < 6; k++) {

                int faceUm = dadoUm[i];
                int faceDois = dadoDois[j];
                int faceTres = dadoTres[k];

                if (
                    (faceUm == 4 || faceDois == 4 || faceTres == 4) &&
                    (faceUm == 5 || faceDois == 5 || faceTres == 5) &&
                    (faceUm == 6 || faceDois == 6 || faceTres == 6)
                ) {
                    corretos++;
                }
            }
        }
    }

    cout << (float)corretos / 216.0;

    return 0;
    
}