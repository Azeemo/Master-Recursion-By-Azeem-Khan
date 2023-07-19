#include<bits/stdc++.h>
using namespace std;
int nthfibbo(int n){
  if(n<=1){
    return n;
}
int last = nthfibbo(n-1);
int slast = nthfibbo(n-2);
return last+slast;
}
int main(){
cout<<nthfibbo(3)<<endl;
  return 0;
}

/// THIS IS DONE VIA MULTIPLE RECURSION CALLS
