#include <iostream>

using namespace std;
void isSet(int n,int k){
    int x=1;
    for(int i=0;i<(k-1);i++)
    x=x*2;
    if((n&x)!=0)
    return("Yes");
    else
    return("No");
}
int main()
{isSet int a=5,int b=2;
    cout<<isSet(a,b);

    return 0;
}