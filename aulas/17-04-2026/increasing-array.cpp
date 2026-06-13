#include <bits/stdc++.h>

using namespace std;

/*
 * Minimo para ficar crescente:
 * entrada: 3 2 5 1 7
 * saida: 3 3 5 5 7
 */
int main() {

    long long n;
    cin >> n;

    long long ultimo;
    long long resultado = 0;
    for (int i = 0; i < n; i++) {

        long long atual;
        cin >> atual;

        if (i == 0) {
            ultimo = atual;
            continue;
        }

        if (ultimo > atual) {
            resultado += ultimo - atual; 
        } else {
            ultimo = atual;
        }

    }

    cout << resultado;

    return 0;

}