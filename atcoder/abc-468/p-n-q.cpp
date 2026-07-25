#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> Ps(10);
vector<int> Qs(10);

vector<bool> disp(11, 1);
vector<int> atual;

int ans = 0;
void dfs(int pos) {
    if (pos == N) {

        bool greaterThanP = false;
        for(int i=0; i<N; i++){
            if(atual[i] > Ps[i]) {
                greaterThanP = true;
                break;
            } else if(atual[i] < Ps[i]){
                greaterThanP=false;
                break;
            }
        }
        
        bool lessThanQ = false;
        for(int i=0; i<N; i++){
            if(atual[i] < Qs[i]){
                lessThanQ = true;
                break;
            } else if(atual[i] > Qs[i]){
                lessThanQ = false;
                break;
            }
        }

        if(lessThanQ && greaterThanP) ans++;

        return;
    } 
        

    for (int i = 1; i <= N; i++) {
        if (disp[i]) {
            disp[i] = 0;
            atual.push_back(i); 

            dfs(pos + 1);

            atual.pop_back();
            disp[i] = 1;
        }
    }
}

int main() {

    cin >> N;

    for (int i = 0; i < N; i++) cin >> Ps[i];
    for (int i = 0; i < N; i++) cin >> Qs[i];

    dfs(0);

    cout << ans;

    return 0;
    
}