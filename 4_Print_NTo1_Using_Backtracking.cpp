#include<bits/stdc++.h>
using namespace std;
void n_to_1_backtrack(int i,int n){
if(i>n) return ;
else{
    n_to_1_backtrack(i+1,n);
    cout<<i<<" ";
}

}
int main(){
int  n ;
cin>>n;
n_to_1_backtrack(1,n);


return 0;
}