#include <iostream>
#include<cmath>
using namespace std;
int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,arr[j]-arr[i]);
        }
    }return res;
}
int main()
{
    int arr[]={45,3,11,6,4,9,1},n=7;
    cout<<maxDiff(arr,n)<<endl;

    return 0;
}