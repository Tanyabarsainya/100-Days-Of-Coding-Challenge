#include <iostream>

using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int a[]={8,9,10,14};
    bubbleSort(a,4);
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    

    return 0;
}