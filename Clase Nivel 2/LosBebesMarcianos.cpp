#include <bits/stdc++.h>
using namespace std;

int main(){
	
    stack<string> m;

    int n;
    cin>>n;

    while(n--){
        char t;
        string nom;
        cin>>t;
        cin>>nom;

        if(t == 'F'){
            m.push(nom);
        }else{
            cout<<nom<<" "<<m.top()<<endl;
            m.pop();
        }
    }

    return 0;
}
