#include <bits/stdc++.h>
using namespace std;

int main(){

    int A;
    cin>>A;

    if(A<=5) cout<<1;  
    else{ 
        if(A%5==0) cout<<A/5;
        else cout<<(A/5)+1;
    }

return 0;
}
