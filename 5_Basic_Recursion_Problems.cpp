// SUM OF DIGITS USING RECURSION 
//(FUNCTIONAL)
int sumOfDigits(int N){
      if(N==0) return 0;
      else{
         

     return N%10    +      sumOfDigits(N/10);
      }
    }


// SUM OF ARRAY ELEMENTS USING RECURSION
int sumElement(int arr[],int n)
{   if(n<0) return 0;
   else{
       return arr[n-1] + sumElement(arr,n-1);
   }
       
}

// SUM OF CUBE OF FIRST N TERMS

  long long sumOfSeries(long long N) {
        if (N==0)
        {return 0 ;
        }
        else{
            return N*N*N + sumOfSeries(N-1); 
        }
    }

//////////////////////////////////////////////////////////////////////////////
// SUM OF FIRST N NUMBERS 
// functional
void sum(int n){
if(n==0) return 0;
      else{
            return n + sum(n-1);
      }
}
// parametrized
// PARAETERIZED // sum = 0
int SumOfDigits(int n,int sum){
   if(N==0){
         cout<<sum; ;
   }
      SumofDigits(n-1,sum+n)
}
//////////////////////////////////////////////////////////////////////////////////

/// factoriaL OF A NUMBER
 long long int factorial(int N){
        if (N==0) return 1;
        else{
            return N*factorial(N-1);
        }
    }


