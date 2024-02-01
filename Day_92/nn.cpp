#include <iostream>
#include<algorithm>
using namespace std;
void merge(int a[],int b[],int m,int n){
    int c[m+n];
    for(int i=0;i<m;i++)
    c[i]=a[i];
    for(int j=0;j<n;j++)
    c[j+m]=b[j];
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++)
    cout<<c[i]<<" ";
}
int main()
{
   int a[]={20,56,78,34};
   int b[]={21,59,70,94};
int m =sizeof(a)/sizeof(a[0]);
int n =sizeof(b)/sizeof(b[0]);
merge(a,b,m,n);

    return 0;
}