#include <iostream>
using namespace std;
int search(int arr[],int x){
    int i=0;
    while(true){
        if(arr[i]==x) return i;
        if(arr[i]>x) return -1;
        i++;
    }
}

int main()
{
  int arr[]={2,5,7,9,10},x=8;
  cout<<search(arr,x);

    return 0;
}