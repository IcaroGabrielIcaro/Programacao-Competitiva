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
    while (cin >> N) {
        set<Sapato> sapatos;
        int resultado = 0;
        for (int i = 0; i < N; i++) {
            char C;
            int L;
    
            cin >> L >> C;
    
            auto encontrado = sapatos.lower_bound({L, 0, 0});
        
            if (encontrado != sapatos.end() && encontrado->tamanho == L) {
                Sapato novoSapato = {encontrado->tamanho, encontrado-> esquerdo, encontrado->direito};
                sapatos.erase(encontrado);
    
                (C == 'E') ? novoSapato.esquerdo++ : novoSapato.direito++;
    
                if (novoSapato.esquerdo != 0 && novoSapato.direito != 0) {
                    resultado++;
                    novoSapato.esquerdo--;
                    novoSapato.direito--;
                }
    
                sapatos.insert(novoSapato);
                
            } else {
                sapatos.insert((C == 'E') ? Sapato{L, 1, 0} : Sapato{L, 0, 1});
            }
        
        }
    
        cout << resultado << endl;
    }

    return 0;
    
}
