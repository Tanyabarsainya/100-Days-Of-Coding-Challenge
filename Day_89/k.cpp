#include <iostream>

using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_ind =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind = j;
            }
        }
        swap(arr[i],arr[min_ind]);
    }
}
int main()
{
    int a[]={2,7,88,9};
    selectionsort(a,4);
    for(int i=0;i<4;i++){
         cout<<a[i]<<" ";
    }
    return 0;
}