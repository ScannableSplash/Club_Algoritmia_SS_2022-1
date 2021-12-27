#include <bits/stdc++.h>
using namespace std;

int main(){
    uint64_t N, K, x;
    cin>>N;
    cin>>K;
    x=N-K;
    
    uint64_t v[N];
    uint64_t m[x+1];
    
    for(int i=0; i<N; i++){
        cin>>v[i];
    }
    
    for(int i=0; i<x+1; i++){
        m[i]=(v[i+1]-v[i])+(v[i+2]-v[i+1])+(v[i+3]-v[i+2]);
        cout<<m[i]<<endl;
    }

  return 0;
}
