#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, x=0;
    cin>>n;
    
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    int i=0;
    
    while(i!=n-1){
        i+=v[i];
        x++;
    }
    
    cout<<x;

return 0;
}
