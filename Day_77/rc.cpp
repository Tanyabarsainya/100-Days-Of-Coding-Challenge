#include <iostream>
using namespace std;
int maxcuts(int n,int a,int b,int c){
    if(n==0)  return 0;
    if(n<=-1)
    return -1;
    int res =max(maxcuts(n-a,a,b,c),
             max(maxcuts(n-b,a,b,c),
             maxcuts(n-c,a,b,c)));
             if(res==-1) 
             return -1;
    return res+1;
}
int main()
{
  int n=7,a=3,b=6,c=2;
  cout<<maxcuts(n,a,b,c);
    return 0;
}