#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    sort(v.begin(), v.end());
    
    int x=0;
    int s=0;
    
    for(int i=0; i<n; i++){
        if(s<=v[i]) x++;
        
        s=s+v[i];
    }
    
    cout<<endl<<x;
    
    return 0;
}
