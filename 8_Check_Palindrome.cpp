#include<bits/stdc++.h>
using namespace std;
bool isPalRec(char str[],
              int s, int e)
{
     
    // If there is only one character
    if (s == e)
    return true;
 
    // If first and last
    // characters do not match
    if (str[s] != str[e])
    return false;
 
    // If there are more than
    // two characters, check if
    // middle substring is also
    // palindrome or not.
    if (s < e + 1)
    return isPalRec(str, s + 1, e - 1);
 
    return true;
}
/*
 // USING TWO POINTER
 	bool sentencePalindrome(string s){
    int i=0,j=s.size()-1;
    //initializing both the pointers at beginnning and end
    while(i<=j){
        if(!(s[i]>= 'a' && s[i]<='z'))  //space at the beginnning 
             i++;
        else if(!(s[j]>= 'a' && s[j]<='z'))  // space at ending
             j--;
        else if(s[i]!=s[j])
             return false;
        else{
            i++;
            j--;
        }
    }

    return true;
 }
*/



int main()
{
char s[]  = "Azeem";
isPalRec(s);

return 0;

}