#include<bits/stdc++.h>

using namespace std;

int main(){

    int N, K;
    cin >> N >> K;

    long long soma = 0;

    unordered_map<long long, long long> frequencia;
    for (int i = 0; i < N; i++) {
        
        long long A;
        cin >> A;
        frequencia[A]++;

        soma += A;
    }

    priority_queue<long long> fila_prioridade;
    for (auto [x, f] : frequencia) {
        fila_prioridade.push(x * f);
    }

    for (int i = 0; i < K && !fila_prioridade.empty(); i++) {
        soma -= fila_prioridade.top();
        fila_prioridade.pop();
    }

    cout << soma << endl;

    return 0;

}