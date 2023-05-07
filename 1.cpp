#include<bits/stdc++.h>
using namespace std;
void print(int count ){
// base condition 
	if(count==0){
		return; // if we have created void function 
		           // -> we can return this way
	}
	else{
		cout<<count<<endl;
		print(count-1);
	}

}


int main(){
cout<<"enter the number you want to print "<<endl;
int n;
cin>>n;

print(n);


return 0;
}