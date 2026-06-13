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

    map<int, int> flores;
    for (int i = 0; i < N; i++) {
        int F;
        cin >> F;

        flores[F]++;
    }

    int contador = 0;
    int resultado = 0;

    auto fim = --flores.end();
    do {
        int soma = quebrar(fim->first, 0);

        if (contador + fim->second < K) {
            contador += fim->second;

            flores[fim->first - soma] += fim->second;
            flores[fim->first] = 0;
        } else {
            resultado = soma;
            break;
        }

        fim--;
    } while (fim != --flores.begin());

    cout << resultado;

    return 0;

}