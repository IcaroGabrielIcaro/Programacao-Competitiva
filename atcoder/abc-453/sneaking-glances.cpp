#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<pair<int, long long>> nos;
    nos.push_back({0, 5});
    for (int i = 0; i < N; i++) {
        long long passo;
        cin >> passo;
        passo *= 10;

        vector<pair<int, long long>> nosTemp;
        for (pair<int, long long> no : nos) {

            pair<int, long long> no1 = {no.first, no.second + passo};
            pair<int, long long> no2 = {no.first, no.second - passo};

            if ((no1.second > 0 && no.second < 0) || (no1.second < 0 && no.second > 0)) {
                no1.first++;
            }

            if ((no2.second > 0 && no.second < 0) || (no2.second < 0 && no.second > 0)) {
                no2.first++;
            }

            nosTemp.push_back(no1);
            nosTemp.push_back(no2);
        }

        nos = *(new vector<pair<int, long long>>(nosTemp.begin(), nosTemp.end()));
    }

    sort(nos.begin(), nos.end());
    
    cout << nos[nos.size() - 1].first;

    return 0;

}