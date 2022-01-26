#include <bits/stdc++.h>
using namespace std;

int main(){

    cin >>a;
    for (int i=0;i<a;i++){
        
	    cin >>entrada;
	    
	    if(entrada==entradav){
	    	arr[i]=r+1;						
	    }
	    else{
	    	r=0;
	    	arr[i]=r;							
	    }
	    
	    entradav=entrada;
    }
    
    for (int k=0;k<a;k++){
		if(arr[k]==1) b++;
    }

    if(b>=1) cout<<endl<<"LO SIENTO ABEL... DAVID SE QUEDA CON TODAS"<<endl;
    else cout<<endl<<"ABEL ERES UN GRANDE"<<endl;
    
    cout<<endl<<r;
    
return 0;
}
