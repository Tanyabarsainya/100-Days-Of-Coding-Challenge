#include <iostream>
using namespace std;
int j,key;
void iSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key =arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] =arr[j];
            j--;
        }   arr[j+1]=key;
    }
 
}

int main()
{
 int arr[]={59,90,48,66,10,37};
 int n=sizeof(arr)/sizeof(arr[0]);
 iSort(arr,n);
 for(auto x:arr)
 cout<<x<<" ";
    
    return 0;
}