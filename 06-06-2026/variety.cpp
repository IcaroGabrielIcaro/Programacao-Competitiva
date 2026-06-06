#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N,M,K;
    cin>>N>>K>>M;
    vector<pair<long long,long long>> A(N);
    long long totalSum=0;
    long long v1,c1;
    for(long long i=0;i<N;i++){
        cin>>c1>>v1;
        A[i]={v1,c1};
    }

    sort(A.begin(),A.end(),greater<pair<long long,long long>>());
    unordered_set<long long> colorsChoiceds;
    unordered_set<long long> choiceds;

    for(long long i=0;i<N;i++){
        if(M<=0){
            break;
        }
        if(colorsChoiceds.count(A[i].second)){
            continue;
        }
        colorsChoiceds.insert(A[i].second);
        choiceds.insert(i);
        totalSum+=A[i].first;
        M--;
        K--;
    }

    for(long long i=0;i<N;i++){
        if(K<=0){
            break;
        }
        if(choiceds.count(i)){
            continue;
        }
        totalSum+=A[i].first;
        K--;
    }
    cout<<totalSum;
}