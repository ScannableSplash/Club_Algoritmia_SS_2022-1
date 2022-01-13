#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int a, b, one=0, two=0, draw=0;
    cin>>a>>b;
    
    for(int i=1; i<=6; i++){
        if(abs(a-i)<abs(b-i)) one++;
        if(abs(a-i)>abs(b-i)) two++;
        if(abs(a-i)==abs(b-i)) draw++;
    }
    
    cout<<endl<<one<<endl<<draw<<endl<<two;
    
    return 0;
}
