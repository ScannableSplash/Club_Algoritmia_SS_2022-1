#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int m, t, u, f, d, x=0;
    cin>>m>>t>>u>>f>>d; 
    vector<char> v(t);
    cout<<endl;
    
    for(int i=0; i<t; i++){
        cin>>v[i];
        
        switch (v[i]){
	        case 'U': 
	    	    x=x+u+d;
	    	    break;
	    	case 'F': 
	    	    x=x+f+f;
	    	    break;
	    	case 'D': 
	    	    x=x+d+u;
	    	    break;
	        default:
	    	    break;
        }
        
        if(x>m){
            cout<<endl<<i;
            break;
        }
        
    }
    
return 0;
}
