#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, semana[]={"domingo", "lunes", "martes", "miercoles", "jueves", "viernes", "sabado"};
    int d, np, ans, c=0;
    cin>>np>>d>>s;
    
    while(semana[c]!=s){
        c=(c+1)%7;
    }
    
    for(int i=1; i<=d; i++){
        if(semana[c]!="domingo" && semana[c]!="sabado" && (np%2==i%2)) ans++;
        c=(c+1)%7;
    }
    
    cout<<ans;
    
return 0;
}
