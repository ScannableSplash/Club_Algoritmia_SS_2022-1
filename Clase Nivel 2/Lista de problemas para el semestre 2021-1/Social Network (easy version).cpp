#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, m;
    cin>>n>>k;
    cout<<endl;
    
    vector<int> ID(n);
    vector<int> v(k);
    
    for(int i=0; i<n; i++){
        cin>>ID[i];
        
        for(int j=0; j<i; j++){
            if(ID[i]=!v[j]){
                v[i]=ID[i];
            }
        }
        
    }
    
    
    
    cout<<endl<<endl<<n<<endl<<k;

    return 0;
}

