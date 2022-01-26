#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,r=0;
    cin>>a>>b;
    
    for(int i=a; i<=b; i++){
        r=r+i*i;	
    }
    
    cout<<r;

return 0;
}
