#include <bits/stdc++.h>
using namespace std;

u_long factorial(u_long n);

int main(){    
    int n;    
    cin>>n;
    cout<<factorial(n);

    return 0;
}

u_long factorial(u_long n){
    
    if (n == 0){
        return 0; 
    } 

    if (n == 1){
        return 1; 
    } 
    
    return (n * factorial(n-1));
}
