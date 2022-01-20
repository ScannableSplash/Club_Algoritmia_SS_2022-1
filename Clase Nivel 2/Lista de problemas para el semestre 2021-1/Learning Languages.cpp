#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m, k, x=0;
    cin>>n>>m;
    int matriz[n][m];
    
    for(int i=0; i<n; i++){
        
        cin>>matriz[i][0];
        k=matriz[i][0];
        
        for(int j=1; j<k; j++){
            cin>>matriz[i][j];
        }
        
        cout<<endl;
    }
    
    //*añadir comparación perrona
    
    cout<<endl<<x;
    
    return 0;
}
