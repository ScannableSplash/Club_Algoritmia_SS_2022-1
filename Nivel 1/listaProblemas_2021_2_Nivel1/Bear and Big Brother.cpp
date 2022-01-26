#include <bits/stdc++.h>
using namespace std;

int main(){

    int a=0, b=0, r=0;
    cin>>a>>b;
    
    do{
	a=a*3;
	b=b*2;
	r=r+1;
    } while(a<=b);

	cout<<r;

return 0;
}
