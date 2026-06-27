#include <iostream>
#include <vector>

using namespace std;

int busca_vaga(const vector<short> &estac, int q){
    int ans = -1;
    int i=0;
    while (i < estac.size()){
        int t1 = i, t2 = i;
        while (t2<estac.size() and estac[t2] == -1){
            i = t2;
            t2++;
            if ((t2-t1) == q){
                return t1;
            }
        }
        i++;
    }
    return ans;
 }
 

int main(){
    int c, n;
    while (cin >> c >> n){
        vector<short> estac(c, -1);
        long long arrecadado = 0;
        char e; // 'c' = chegada | 's' = saida
        int p, q;
        for (int j = 0 ; j<n ; ++j){
            cin >> e >> p;
            if (e == 'C'){
                cin >> q;
                int iv = busca_vaga(estac, q);
                if (iv != -1){
                    arrecadado += 10;
                    for (int i=iv ; i < iv+q ; ++i)
                        estac[i] = p;
                }
            } else {
                for (unsigned int i= 0 ; i<estac.size() ; ++i){
                    if (estac[i] == p)
                        estac[i] = -1;
                }
            }
        }
        cout << arrecadado << endl;
    }
    return 0;
}