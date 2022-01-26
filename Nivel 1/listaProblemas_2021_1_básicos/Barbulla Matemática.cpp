#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, ssubn=0;
    cin>>n;
    
    for (int i=0;i<=n;i++) ssubn+=i*(i+1)/2;
    
    cout<<ssubn;
    
return 0;
}
