#include <iostream>
#include<cmath>
using namespace std;
int maxCircularSum(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr_max=arr[i];
        int curr_sum=arr[i];
        for(int j=1;j<n;j++){
            int index=(i+j)%n;
            curr_sum +=arr[index];
            curr_max=max(curr_max,curr_sum);
            
        }res=max(res,curr_max);
    }return res;
}
int main()
{
int arr[] = {35, -32, 37, 41}, n = 4;

     cout<<maxCircularSum(arr, n);
    return 0;
}