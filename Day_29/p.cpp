#include <iostream>
#include <cmath>
using namespace std;

int getSum(int ps[], int l, int r){
    if(l==0)
        return ps[r];
    return ps[r]-ps[l-1];
}

int main(){
    int arr[]={12, 48, 73, 99, 16, 65, 40};
    int n=7;
    int ps[n];
    ps[0] = arr[0];
    for(int i=1; i<n; i++)
        ps[i] = ps[i-1]+ arr[i];
   cout<<getSum(ps,1,2); 
    return 0;
}