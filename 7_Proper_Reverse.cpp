#include<bits/stdc++.h>
using namespace std;


void reverseArr(int arr[],int s,int l)
{

     if(s>l){  /// swapping will kept on doing till the middle of array
       return ; 
       }
      else{
            swap(arr[s],arr[l]);
            reverseArr(arr,s+1,l-1);
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

 reverseArr(arr,0,n-1);

for(int i =0;i<n;i++){
	cout<<arr[i]<<" ";
}

return 0;
}
