#include<bits/stdc++.h>

using namespace std;

struct Sapato {
    int tamanho;
    int esquerdo;
    int direito;

    bool operator<(const Sapato& other) const {
        return tamanho < other.tamanho;
    }
};

int main(){

    int N;
    cin >> N;

    set<Sapato> sapatos;
    int resultado = 0;
    for (int i = 0; i < N; i++) {
        char C;
        int L;

        cin >> L >> C;

        auto encontrado = sapatos.lower_bound({L, 0, 0});
    
        if (encontrado != sapatos.end() && encontrado->tamanho == L) {
            auto& temporario = encontrado;
            sapatos.erase(encontrado);

            if (C == 'E') {
                sapatos.insert({temporario->tamanho, temporario->esquerdo + 1, temporario->direito});
            } else {
                sapatos.insert({temporario->tamanho, temporario->esquerdo, temporario->direito + 1});
            }

            auto encontrado2 = sapatos.lower_bound({L, 0, 0});

            if (encontrado2 != sapatos.end()) {
                if (encontrado2->esquerdo > 0 && encontrado2->direito > 0) {
                    if (encontrado2->esquerdo > encontrado2->direito) {
                        resultado
                    } else {
                        
                    }
                }
            }
            
        } else {
            if (C == 'E') {
                sapatos.insert({L, 1, 0});
            } else {
                sapatos.insert({L, 0, 1});
            }
        }
    
    }
    
}
