#include <bits/stdc++.h>

using namespace std;

// Deixa global porque vai sempre ficar precisando usar dentro da funcao recursiva
int N;
int L[20];
int resultado = 0;

/*
 * index = posicao da lista de entradas
 * posicao = posicao atual do boneco
 * passadasZero = quantas vezes ele passou pelo zero por esse ramo da arvore
 */
void dfs(int index, int posicao, int passadasZero) {

    // Caso base = se chegou ao fim da lista naquele ramo da arvore
    if (index == N) {
        resultado = max(resultado, passadasZero); // É a hora de saber se o ramo que estamos foi melhor que outro que já passamos
        return;
    }

    // Ramo da direita (lado positivo)
    int novaPosicao1 = posicao + (L[index] * 10);
    int novaPassadaZero1 = passadasZero;
    if ((novaPosicao1 > 0 && posicao < 0) || (novaPosicao1 < 0 && posicao > 0)) {
        novaPassadaZero1++;
    }
    dfs(index + 1, novaPosicao1, novaPassadaZero1);

    // Ramo da esquerda (lado negativo)
    int novaPosicao2 = posicao - (L[index] * 10);
    int novaPassadaZero2 = passadasZero;
    if ((novaPosicao2 > 0 && posicao < 0) || (novaPosicao2 < 0 && posicao > 0)) {
        novaPassadaZero2++;
    }
    dfs(index + 1, novaPosicao2, novaPassadaZero2);
    
}

int main() {

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    dfs(0, 5, 0);

    cout << resultado;

    return 0;

}