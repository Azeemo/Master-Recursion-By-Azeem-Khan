#include<bits/stdc++.h>
using namespace std;
void print_using_backtrtack(int i , int n){
// not allowed to do i++
if(i<1) return;
else{
      print_using_backtrtack(i-1,n);
      cout<<i<<" ";
}

}
int main(){
int n;
cin>>n;
print_using_backtrtack(n,n);


return 0;
}