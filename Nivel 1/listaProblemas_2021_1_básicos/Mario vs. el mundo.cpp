#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t, n;
    cin>>t;
    
    vector<int> a(t);
    vector<int> b(t);
    
    for(int i=0; i<t; i++){
        cin>>n;
        vector<int> v(n);
        a[i]=0;
        b[i]=0;
        for(int j=0; j<n; j++){
            cin>>v[j];
            
            if(j!=0){
                if(v[j]<v[j-1]) a[i]++;
                else if(v[j]>v[j-1]) b[i]++;
            }
            
        }
        cout<<endl;
    }
    
    for(int i=0; i<t; i++){
        cout<<"Escenario "<<i+1<<": ";
        cout<<b[i]<<" "<<a[i]<<endl;
        
    }

return 0;
}
