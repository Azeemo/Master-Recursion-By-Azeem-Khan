// SUM OF DIGITS USING RECURSION
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

// SUM OF FIRST N TERMS

  long long sumOfSeries(long long N) {
        if (N==0)
        {return 0 ;
        }
        else{
            return N*N*N + sumOfSeries(N-1); 
        }
    }