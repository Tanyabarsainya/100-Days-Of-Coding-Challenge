#include <iostream>
#include <cmath>
using namespace std;
int getWater(int arr[],int n){
    int res=0;
    for(int i=0;i<n-1;i++){
        int lMax=arr[i];
        for(int j=0;j<i;j++)
        lMax =max(lMax,arr[j]);
        int rMax=arr[i];
        for(int j=i+1;j<n;j++)
        rMax =max(rMax,arr[j]);
        res=res+(min(lMax,rMax)-arr[i]);
        
    }return res;
}
int main()
{
    int arr[]={30,0,15,62,95},n=5;
    
    cout<<getWater(arr,n);

    return 0;
}