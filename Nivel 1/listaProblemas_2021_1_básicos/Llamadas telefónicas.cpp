#include <bits/stdc++.h>
using namespace std;

int main(){

    int CLAVE;
    float NUMIN,r;
    for (int i=0;i<5;i++){
        
        cin >>CLAVE;
        cin >>NUMIN;
        switch (CLAVE){
	    case 12:
            	r=NUMIN*2;
		break;
	    case 15:
            	r=NUMIN*2.2;
		break;
	    case 18:
            	r=NUMIN*4.5;
		break;
	    case 19:
            	r=NUMIN*3.5;
		break;
	    case 23:
            	r=NUMIN*6;
	    	break;
	    case 25:
            	r=NUMIN*6;
		break;
	    case 29:
            	r=NUMIN*5;
		break;
	    default:
		break;
        }
        
    }
    
    cout<<endl<<r;
    
return 0;
}
