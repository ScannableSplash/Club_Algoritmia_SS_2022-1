#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, q;
    cin>>n>>q;
    int matriz[q][2];
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<endl;
    
    for(int i=0; i<q; i++){
        for(int j=0; j<2; j++){
            cin>>matriz[i][j];
        }
        
        cout<<endl;
    }
    
    //*No entendí
    
    cout<<endl;
    
    return 0;
}
