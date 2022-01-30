#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int size, n;
    cin>>n;
    
    vector<string> s(n);
    vector<string> r(n);
    
    for(int i=0; i<n; i++){
        cin>>s[i];
        size=s[i].length();
        string s2(to_string(size-2));
        
        if(size>10){
            r[i][0]=s[i][0];
            
            if(size-2<10){
                r[i][1]=s2[0];
                r[i][2]=s[i][size-1];
            }
            else{
                r[i][1]=s2[0];
                r[i][2]=s2[1];
                r[i][3]=s[i][size-1];
            }
        }
        else r[i]=s[i];
    }
    
    for(int i=0; i<n; i++){
        cout<<r[i];
    }
    
return 0;
}
