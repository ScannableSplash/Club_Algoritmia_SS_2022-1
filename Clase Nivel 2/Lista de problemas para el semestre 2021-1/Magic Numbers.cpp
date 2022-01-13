#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    
    int size;
    size=s.size();
    
    int x=0;
    int i=0;
    while(i<size){
        
        if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4'){
            i=i+3;
        }
        else{
            if(s[i]=='1'&&s[i+1]=='4'){
                i=i+2;
            }
            else{
                if(s[i]=='1'){
                    i++;
                }
                else{
                    x++;
                    break;
                }
            }
        }
        
    }
    
    if(x==0) cout<<endl<<"YES";
    else cout<<endl<<"NO";
    
    return 0;
}
