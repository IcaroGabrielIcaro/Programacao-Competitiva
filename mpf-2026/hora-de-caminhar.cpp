#include <bits/stdc++.h>

using namespace std;

struct Aresta {
    long long term1;
    long long term2;
    long long pes;
    long long contrib;
};

long long N, Q;
vector<Aresta> arestas;
vector<vector<long long>> list_adj(200000);

long long calc_contrib_vert(long long u, long long c) {

    long long som = 1;
    for (long long v : list_adj[u]) {
        if (v == c) continue;
        som += calc_contrib_vert(v, u);
    }

    return som;
}

void calc_contrib(Aresta &a) {
    a.contrib = calc_contrib_vert(a.term1, a.term2) * calc_contrib_vert(a.term2, a.term1);
}

int main() {

    cin >> N >> Q;

    for (long long i = 0; i < N - 1; i++) {
        long long u, v, w;
        cin >> u >> v >> w;

        list_adj[u].push_back(v);
        list_adj[v].push_back(u);
        arestas.push_back({u, v, w, 0});
    }

    long long res = 0;
    for (long long i = 0; i < (long long)arestas.size(); i++) {
        calc_contrib(arestas[i]);
        res += arestas[i].contrib * arestas[i].pes;
    }

    for (long long i = 0; i < Q; i++) {
        long long j, x;
        cin >> j >> x;
        j--;

        res -= arestas[j].contrib * arestas[j].pes;
        arestas[j].pes = x;
        res += arestas[j].contrib * arestas[j].pes;

        cout << res % 1000000007 << endl;
    }


    return 0;

}