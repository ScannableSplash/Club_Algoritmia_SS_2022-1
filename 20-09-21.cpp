#include <bits/stdc++.h>

using namespace std;

u_int a;
string s;
int c;

int main(){
    cin>>a;
    u_int mask = 1;

    for(int i=0; i<32; i++){
        if(mask & a){
            s += '1';
        } else {
            s += '0';
        }
        
    mask = mask<<1;
    }
    
	cout<<count(s.begin(),s.end(),'1');;

    return 0;
}