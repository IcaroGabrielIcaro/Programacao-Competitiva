#include <bits/stdc++.h>

using namespace std;

struct Carro {
    int inicio;
    int placa;
    int tamanho;

    // um carro é menor que outro se a placa dele for menor
    bool operator<(const Carro& other) const {
        return placa < other.placa;
    }
};

/*
 * lower_bound retorna um iterator para o primeiro elemento maior que o passado
 *
 * set<int> s = {2, 5, 8, 10};
 * auto it = s.lower_bound(6); -> retorna o 8
 *
 * set<pair<int, int>> s = {{1111, 5}, {1234, 9}, {2222, 20}};
 * auto it = s.lower_bound({1234, INT_MIN}); -> retona o {1234, 9}
 * 
 * como o set<pair<int, int>> ordena:
 * (P1, Q1) < (P2, Q2)
 * se:
 * P1 < P2
 * OU (P1 == P2 e Q1 < Q2)
 * 
 * {1111, 5}
 * {1234, 9}
 * {2222, 20}
 * 
 * 1111 < 1234 -> true (ignora)
 * 
 * 1234 < 1234 -> false
 * 1234 == 1234 -> true
 * 9 < INT_MIN -> false
 * 
 * ou seja {1234, 9} nao é menor que {1234, INT_MIN}, retornando ele
 * 
 */
    
int main() {

    int C, N;

    while (cin >> C >> N) {

        int resultado = 0;

        set<pair<int, int>> livres; // {inicio, tamanho}
        livres.insert({0, C});

        set<Carro> estacionados;
        for (int i = 0; i < N; i++) {
            char L;
            cin >> L;

            
            if (L == 'C') {
                int P, Q;
                cin >> P >> Q;
                
                for (pair<int, int> livre : livres) {
                    int inicio = livre.first;
                    int tamanho = livre.second;

                    // ele cabe na vaga livre?
                    if (tamanho >= Q) {
                        estacionados.insert({inicio, P, Q});
                        resultado += 10;

                        livres.erase(livre);

                        if (tamanho > Q) {
                            livres.insert({inicio + Q, tamanho - Q}); // nova vaga livre
                        }

                        break;
                    }
                }
            } else {
                int P;
                cin >> P;
    
                Carro procurando;
                procurando.placa = P;

                auto carroSaindo = estacionados.lower_bound(procurando);

                if (carroSaindo != estacionados.end() && carroSaindo->placa == P) {

                    int inicio = carroSaindo->inicio;
                    int tamanho = carroSaindo->tamanho;

                    estacionados.erase(carroSaindo);

                    int novoInicio = inicio;
                    int novoTamanho = tamanho;

                    auto proximaVaga = livres.lower_bound({inicio, 0});

                    // a proxima vaga nao é a primeira vaga livre?
                    if (proximaVaga != livres.begin()) {

                        // pega a vaga antes dessa
                        auto anterior = proximaVaga;
                        anterior--;

                        // a vaga é literalmente do lado da do carro que ta saindo?
                        if (anterior->first + anterior->second == inicio) {

                            // junta vaga anterior a que ta sendo liberada agora
                            novoInicio = anterior->first;
                            novoTamanho += anterior->second;

                            // apaga essa vaga (vai aumentar)
                            livres.erase(anterior);
                        }
                    }

                    // o carro que ta saindo é literalmente do lado da proxima vaga depois dele?
                    if (proximaVaga != livres.end() && inicio + tamanho == proximaVaga->first) {

                        // junta ela tambem
                        novoTamanho += proximaVaga->second;

                        // apaga essa vaga (vai aumentar)
                        livres.erase(proximaVaga);
                    }

                    // bota vaga nova 
                    livres.insert({novoInicio, novoTamanho});
                }
            }
        }
    
        cout << resultado << endl;
    }

    return 0;

}