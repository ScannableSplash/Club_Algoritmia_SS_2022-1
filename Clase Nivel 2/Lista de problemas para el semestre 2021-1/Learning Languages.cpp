#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m, k, x=0;
    cin>>n>>m;
    int matriz[n][m];
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        
        cin>>v[i];
        
        for(int j=0; j<v[i]; j++){
            cin>>matriz[i][j];
        }
        
        cout<<endl;
    }
    
    //*añadir comparación perrona
    
    cout<<endl<<x;
    
    return 0;
}
