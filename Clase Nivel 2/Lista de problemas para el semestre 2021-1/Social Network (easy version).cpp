#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, m, x, y, z=0;
    cin>>n>>k;
    cout<<endl;
    
    vector<int> ID(n);
    vector<int> v(k);
    
    for(int i=0; i<n; i++){
        cin>>ID[i];
        
        for(int j=k; j>=0; j--){
            
            if(ID[i]=!v[j]){
                z++;
                x=v[k];
                v[k]=ID[i];
                for(int a=k-1; a>=0; a=a-2){
                    y=v[a];
                    v[a]=x;
                    x=v[a-1];
                    v[a-1]=y;
                }
            }
            
        }
        
    }
    
    if(z<k){
        cout<<endl<<z<<endl;
        for(int i=0; i<k; i++){
            cout<<v[i]<<" ";
        }
    }
    else{
        cout<<endl<<k<<endl;
        for(int i=0; i<k; i++){
            cout<<v[i]<<" ";
        }
    }
    
    return 0;
}
