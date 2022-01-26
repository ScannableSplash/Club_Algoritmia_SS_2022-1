#include <bits/stdc++.h>
using namespace std;

int main(){

    cin>>k>>n>>w; 
    
    for(int i=1;i<=w;i++) pagar=pagar+(k*i);
    
    if (pagar-n<0) cout << 0;
    else cout<<pagar-n;
    
return 0;
}
