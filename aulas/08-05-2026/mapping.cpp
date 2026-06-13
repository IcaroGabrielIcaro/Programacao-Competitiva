#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M; // 1 - 100

    bool q1 = true;

    set<int> arvore_F;
    int soma = 0;
    for (int i = 0; i < N; i++) {
        
        int Fi;
        cin >> Fi;

        if (arvore_F.count(Fi)) {
            q1 = false;
            continue;
        }

        soma += Fi;
        arvore_F.insert(Fi);
    }

    bool q2 = (soma == ((M + 1) * M / 2));

    cout << (q1 ? "Yes" : "No") << endl;
    cout << (q2 ? "Yes" : "No") << endl;

    return 0;

}