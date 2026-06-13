#include <bits/stdc++.h>

using namespace std;

int quebrar(int numero, int soma) {

    if (numero == 0) {
        return soma;
    }

    soma += numero % 10;
    numero /= 10;
    return (quebrar(numero, soma));
}

int main() {

    int N, K;
    cin >> N >> K;

    vector<int> flores(10e6, 0);
    for (int i = 0; i < N; i++) {
        int F;
        cin >> F;

        flores[F]++;
    }

    int contador = 0;
    int resultado = 0;
    for (int i = 10e6 - 1; i > 0; i--) {

        if (flores[i] == 0) {
            continue;
        }

        int soma = quebrar(i, 0);

        if (contador + flores[i] < K) {

            contador += flores[i];

            flores[i - soma] += flores[i];
            flores[i] = 0;
        } else {
            resultado = soma;
            break;
        }
    } 

    cout << resultado;

    return 0;

}