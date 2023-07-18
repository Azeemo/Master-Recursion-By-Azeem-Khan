#include<bits/stdc++.h>
using namespace std;
// here we are not changing tthe array
// we are just printing it in reverse order

void reverse(int arr[],int n){
   if(n==0)return;
   else{
   	cout<<arr[n-1]<<" ";
   	reverse(arr,n-1);
   }
}

int main(){
int n ;
cin>>n;
int arr[n];
for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
}
 reverse(arr,n);

return 0;
}
