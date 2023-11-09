#include <iostream>
#include<cmath>
using namespace std;
int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0],minval =arr[0];
    for(int i=1;i<n;i++){
        res=max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    return res;
}
int main()
{
    int arr[]={2,3,10,6,4,8,1},n=7;
    cout<<maxDiff(arr,n)<<endl;

    return 0;
}