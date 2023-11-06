#include <iostream>
using namespace std;

int countSetBits( int n){
   int count =0;
    while(n!=0){
        if(n%2==0)
        count++;
        n=n/2;
        
    }return count;
}

int main() 
{ int i=9;
cout<<countSetBits(i)<<endl;
    return 0;
}