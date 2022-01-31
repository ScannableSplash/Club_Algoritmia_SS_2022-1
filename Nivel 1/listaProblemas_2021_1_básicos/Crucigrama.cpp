#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x, y, z=0, n, m;
    string a, b;
    cin>>a>>b;
    
    n=a.length();
    m=b.length();
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[j]==b[i]){
                x=j;
                y=i;
                break;
            }
        }
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==y) cout<<a[j];
            else{
                if(j==x) cout<<b[i];
                else cout<<".";
            }
        }
        cout<<endl;
    }

return 0;
}
