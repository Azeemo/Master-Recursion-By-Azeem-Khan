// in TOWER OF HANOI PROBLEM
// WE ACTUALLY SHIFTS ALL THE N-1 DISKS FROM SOURCE TO AUX VIA DESTINATION
// THEN WE SHIFT THE NTH DISK FROM SOURCE TO DESTINATION(LARGEST DISK)
// THEN WE SHIFT ALL THE N-1 DISKS FROM AUX TO DESTINATION VIA SOURCE

// THIS IS THE COMPLETE SIMPLE SCENARIO
// here we have taken a step variable an is used to scount the number of steps 
// for instance :STEP 1: for the first recurrance relation -> it will kep on decreasing the value of n and will keeps increasing step until base case reached
// this is for moving n-1 disks  from source to aux via destination
// STEP 2 :now we will incremeent he value of step by 1 becuase of the single step from source to destination
// STEP 3 :now we will apply the recurrance relation again for the next function which transfer n-1 from aux to destination via source



#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
         
    if(N<=0)
    {
        return 0;  // not possible case
    }
              else if(N==1){  // base case as if there is only 1 disk present
                   cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
                   return 1;
               }
               long long steps = 0;
             steps += toh(N-1,from,aux,to);
                 cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
      steps = steps+1;
                steps+= toh(N-1,aux,to,from);
                return steps;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
