#include <bits/stdc++.h>
using namespace std;

    int n, l, k;
    char x, y;
    string s, m, M;

int main(){
    
    cin>>n;
    cin>>s;    
    l=(n-1)*2;
    k=n-1;

    for(int i=0; i<l; i++){
        if(i%2==0) m+=s[i];
        else M+=s[i];
    }
    
    for(int i=0; i<(n-1); i++){
        for(int j=0; j<=i; j++){
            y=m[j];
            x=M[i]+32;
            
            if(x==y){
                m[j]=0;
                k--;
            }
        }
    }
    
    cout<<k;
    return 0;
}
