#include<bits/stdc++.h>
using namespace std;
void printit(int i , int n){
	if(i>n) return ;
	else{
		cout<<i<<" ";
		i++;
		printit(i,n);
	}
}
int main(){
int n;
cin>>n;
printit(1,n);


return 0;
}