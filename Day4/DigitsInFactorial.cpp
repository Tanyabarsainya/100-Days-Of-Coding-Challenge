//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
     if(N<0){
         return 0;
     }
      if(N<=1){
         return 1;
     }
     double digits = 0;
        for (int i = 2; i <= N; i++) {
            digits += log10(i); // Use logarithm to calculate the number of digits
        }
        
        return int(digits) + 1; // Add 1 to account for the integer part of the result
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends