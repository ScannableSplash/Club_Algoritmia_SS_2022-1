#include <bits/stdc++.h>
using namespace std;

int main(){

    uint64_t s, r;
    cin >>s;

  if(s>=0.01 && s<=969.50){
		r=((s-0.01)*0.0192)+0;
		cout<<r;
	  return 0;
	}

  if(s>969.50 && s<=1703.80){
		r=((s-969.51)*0.1088)+56.91;
		cout<<r;
		return 0;
	}

  if(s>1703.80 && s<=4782.61){
		r=((s-1703.81)*0.16)+136.85;
		cout<<r;
		return 0;
	}

  if(s>4782.61 && s<=14391.44){
		r=((s-4782.62)*0.2352)+766.15;
		cout<<r;
		return 0;
	}

  if(s>14391.44 && s<=19188.61){
		r=((s-14391.45)*0.32)+3470.25;
		cout<<r;
		return 0;
	}

  if(s>19188.61 && s<=57565.76){
		r=((s-19188.62)*0.34)+5005.35;
		cout<<r;
		return 0;
	}

  if(s>57565.76){
		r=((s-57565.77)*0.35)+18053.63;
		cout<<r;
		return 0;
	}
    
return 0;
}
