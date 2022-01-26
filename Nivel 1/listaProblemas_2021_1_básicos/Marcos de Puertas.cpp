#include <bits/stdc++.h>
using namespace std;

int main(){

    float a, b, n, r;
    cin>>n>>a>>b;

    if (a+b>n){
        r=(((4*a)+(2*b))/n)+((a+b)/n);
        cout <<ceil(r);
	}
	
    if (a+b<=n){
        r=(((4*a)+(2*b))/n)+((a+b)/n);
        cout <<floor(r);
    }
    
return 0;
}
