#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int se, si, x=0;
    string ber, bir;
    cin>>ber>>bir;
    
    se=ber.length();
    si=bir.length();
    
    if(se==si){
        for(int i=0; i<se; i++){
            if(ber[i]=!bir[se-i]){
                cout<<"NO";
                x++;
                break;
            }
        }
        
    }
    else{
       cout<<"NO";
       x++;
    } 
    
    if(x==0) cout<<"YES";
    
return 0;
}
