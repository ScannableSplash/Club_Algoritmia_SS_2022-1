#include <iostream>
using namespace std;

uint64_t fn[1000010];

uint64_t f(int n){
    if(fn[n] == 0){
        if(n<4){
            fn[n] = 10;
        } else{
            fn[n] = f(n-2) + f(n-4) + 30;
        }
    }

    return fn[n];
}


int main(){
  int n;
  cin>>n;
  cout<<f(n);
  
  return 0;
}
