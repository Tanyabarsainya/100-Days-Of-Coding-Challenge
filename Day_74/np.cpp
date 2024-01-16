#include <iostream>
#include<limits.h>
using namespace std;
bool isPal(int n){
    int res=0;
    int pal=n;
    while(pal!=0){
        int ld = pal % 10;
        res=res*10+ld;
        pal=pal/10;
    }
    return res==n;
}
int main()
{
    int x=979;
    cout<<(bool)isPal(x);

    return 0;
}