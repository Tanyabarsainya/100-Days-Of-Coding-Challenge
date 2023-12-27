#include <iostream>
using namespace std;
int firstOccurrence(int arr[],int n,int x){
    for(int i=0;i<n;i++)
    if(arr[i]==x)
    return i;
    return -1;
}
int main()
{
    int arr[]={0,5,10,18,20,20,20},n=7;
    int x=20;
    cout<<firstOccurrence(arr,n,x);

    return 0;
}