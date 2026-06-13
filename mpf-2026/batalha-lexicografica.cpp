#include <bits/stdc++.h>

using namespace std;

int main() {

    unordered_map<char, long long> a;
    unordered_map<char, long long> p;

    long long tama = 0;
    long long tamp = 0;

    string ia, ip;
    cin >> ia >> ip;

    tama += ia.length();
    for (char ca : ia) {
        a[ca]++;
    }

    tamp += ip.length();
    for (char cp : ip) {
        p[cp]++;
    }

    long long Q;
    cin >> Q;

    for (long long i = 0; i < Q; i++) {
        long long t;
        cin >> t;

        if (t % 3) {

            long long k;
            string s;
            cin >> k >> s;

            if (t == 1) {
                tama += s.length() * k;
                for (char ss : s) {
                    a[ss] += k;
                }
            } else {
                tamp += s.length() * k;
                for (char ss : s) {
                    p[ss] += k;
                }
            }
        } else {

            long long taa = tama;
            long long tap = tamp;

            bool ok = true;
            for (char i = 'a'; i <= 'z'; i++) {

                if (a[i] > p[i]) {

                    if (tap - p[i] == 0) {
                        cout << "PY" << endl;
                    } else {
                        cout << "ADA" << endl;
                    }

                    ok = false;
                    break;
                } else if (a[i] < p[i]) {

                    if (taa - a[i] == 0) {
                        cout << "ADA" << endl;
                    } else {
                        cout << "PY" << endl;
                    }

                    ok = false;
                    break;
                }

                taa -= a[i];
                tap -= p[i];
            }

            if (ok) {
                cout << "EMPATE" << endl;
            }
        }
    }

    return 0;

}