#include <iostream>
#include<cmath>
using namespace std;
int getSum(int arr[],int l,int r){
    int res=0;
    for(int i=l;i<=r;i++)
    res+=arr[i];
    return res;
}
int main()
{
    int arr[]={12,3,3,4,5,9};
    cout<<getSum(arr,1,2);

    return 0;
}