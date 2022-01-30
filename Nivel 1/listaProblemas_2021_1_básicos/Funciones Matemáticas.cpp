#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x, n, a, b;
    cin>>n;
    vector<float> v(n);
    vector<int> c(n);
    
    for(int i=0; i<n; i++){
        
        cin>>x;
        c[i]=0;
        
        switch (x){
	    case 1:
	        cin>>a;
            v[i]=abs(a);
		    break;
	    case 2:
            cin>>a>>b;
            v[i]=max(a, b);
		    break;
	    case 3:
            cin>>a>>b;
            v[i]=min(a, b);
		    break;
	    case 4:
	        cin>>a;
            v[i]=sqrt(a);
            c[i]=1;
		    break;
	    case 5:
            cin>>a>>b;
            v[i]=pow(a, b);
	    	break;
	    default:
		    break;
        }
        
    }
    
    for(int i=0; i<n; i++){
        if(c[i]==1) cout<<setprecision(2)<<fixed<<v[i]<<endl;
        else cout<<setprecision(0)<<fixed<<v[i]<<endl;
    }
    
return 0;
}
