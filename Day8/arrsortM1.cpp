#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
            return false;
        }
    }return true;
}
int main()
{
 int arr[]={7,2,39,100},n=4;
 printf("%s", isSorted(arr,n)? "true":"false");

    return 0;
}