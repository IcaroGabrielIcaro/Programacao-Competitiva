#include<bits/stdc++.h> 

using namespace std;

class Candidato {
    public:
        string nome;
        int votos;
};

int main () {

    int N;
    cin >> N;

    string nomeVencedor = "";
    int votosVencedor = 0;
    
    vector<Candidato> candidatos(N);
    for (int i = 0; i < N; i++) {

        string S;
        cin >> S;

        int hash = 0;
        for (char c : S) {
            hash = hash * 31 + c;
        }
        hash = abs(hash) % N;

        while (true) {

            if (candidatos[hash].nome == "") {
                candidatos[hash].nome = S;
                candidatos[hash].votos = 1;

                if (1 > votosVencedor) {
                    nomeVencedor = S;
                    votosVencedor = 1;
                }

                break;
            }

            if (candidatos[hash].nome == S) {
                candidatos[hash].votos++;

                if (candidatos[hash].votos > votosVencedor) {
                    nomeVencedor = S;
                    votosVencedor = candidatos[hash].votos;
                }

                break;
            }

            hash = (hash + 1) % N;
        }
    }

    cout << nomeVencedor;

    return 0;

}