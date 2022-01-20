#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int d, x=0, a, b;
    vector<int> v(3);
    
    for(int i=0; i<3; i++){
        cin>>v[i];
    }
    cin>>d;
    
    sort(v.begin(), v.end());
    
    if(abs(v[1]-v[2])<d) x=x+d-abs(v[1]-v[2]);
    
    if(abs(v[1]-v[0])<d) x=x+d-abs(v[1]-v[0]);
    
    cout<<endl<<x;
    
    return 0;
}
