#include <bits/stdc++.h>

using namespace std;

int N, P, S;
vector<int> ts(3);
vector<int> ds(3);

int res = INT_MAX;

void guido(int ind, int vs, int tr, int ra) {
    
    int nmv = ds[ind];
    
    if (tr > S) {
        return;
    }
    
    ra += nmv * ts[ind];
    if (vs + nmv >= N) {
        int ex = ((vs + nmv) - N) * ts[ind];
        ra -= ex;
        
        if (ra < res) {
            res = ra;
        }
        
        return;
    }
    
    tr++;
    ra += P;
    for (int i = 0; i < 3; i++) {
        guido(i, vs + nmv, tr, ra);
    }
}

int main() {

    cin >> N >> P >> S;
    
    for (int i = 0; i < 3; i++) {
        cin >> ts[i];
    }
    
    for (int i = 0; i < 3; i++) {
        cin >> ds[i];
    }
    
    for (int i = 0; i < 3; i++) {
        guido(i, 0, 0, 0);
    }
    
    cout << res << endl;
    
    return 0;
    
}
