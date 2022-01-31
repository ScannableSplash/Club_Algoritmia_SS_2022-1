#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, a, b, x, y=0;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    cin>>a>>b;
    
    for(int j=a; j<=b; j++){
        x=0;
        for(int i=2; i<(int(sqrt(n)+1)); i++){
            if(v[j]%i==0){
                x++;
                break;
            }
        }
        if(x==0){
            y++;
        }
    }
    
    cout<<y;

return 0;
}
