#include<bits/stdc++.h>
using namespace std;
void printit(int i , int n){
	if(i>n) return ;
	else{
		cout<<i<<" ";
		printit(i+1,n);
	}
}
  //Complete this function         /// without the use of i ==== recursion tree implemented

    void printNos(int N)
    {
        if(N>=1){
            printNos(N-1);
            cout<<N<<" ";
        }
    }

int main(){
int n;
	int stp;
	cin>>stp ;  // enter starting point
	cin>>n;  // enter the ending value
printit(stp,n);

return 0;
}
