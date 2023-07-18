#include<bits/stdc++.h>
using namespace std;
bool sentencePalindrome(string &s,int i){
	if (i>=s.size()/2)
	{
		return true;  /// base condiion as till half of length is everything is same it is palindrome
	}
	else{
		if (s[i]!=s[s.size()-i-1])
		{
			return false;             // check for every occurence from first till end 
			                             /// doing operation
		}
		sentencePalindrome(s,i+1); // updating the functions
	}
}

 // USING TWO POINTER
 // 	bool sentencePalindrome(string s){
 //    int i=0,j=s.size()-1;
 //    //initializing both the pointers at beginnning and end
 //    while(i<=j){
 //        if(!(s[i]>= 'a' && s[i]<='z'))  //space at the beginnning 
 //             i++;
 //        else if(!(s[j]>= 'a' && s[j]<='z'))  // space at ending
 //             j--;
 //        else if(s[i]!=s[j])
 //             return false;
 //        else{
 //            i++;
 //            j--;
 //        }
 //    }

 //    return true;
 // }

int main(){
string s;
getline(cin,s);
if (sentencePalindrome(s,0))
{
       cout<<"Palindrome"<<endl;
}
else{
	cout<<"Not Palindrome"<<endl;
}
return 0;

}
