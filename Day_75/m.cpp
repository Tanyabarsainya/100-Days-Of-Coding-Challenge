#include <iostream>
using namespace std;
int fact(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res=res+(n/i);
    }return res;
}
int main()
{
    int n=500;
    
    cout<<fact(n);

    return 0;
}