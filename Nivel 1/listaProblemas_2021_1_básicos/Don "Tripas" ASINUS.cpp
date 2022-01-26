#include <bits/stdc++.h>
using namespace std;

int main(){

    cin >>N;
    if (N>=1){
        for(int i=0;i<N;i++){
	        cin >>K;
	    
	        switch (K){
	    	    case 1: 
	    	    	r=r+3;
	    	    	break;
	    	    case 2: 
	    	    	r=r+5;
	    	    	break;
	    	    case 3: 
	    	    	r=r+4;
	    	    	break;
	    	    default:
	    		    cout <<"INVALIDO"<<endl;
	    		    return 0;
	    	}
		
	    }
	
	    cout<<r;
    }   
    else cout<<"INVALIDO"<<endl;
    
return 0;
}
