#include <iostream>
using namespace std;
int power(int n,int x){
    int res=1;
    if(x==0) return 1;
    for(int i=1;i<=x;i++){
     res=res*n;
    }return res;
}
int main()
{
 int n=2,x=3;
 cout<<power(n,x);
    return 0;
}