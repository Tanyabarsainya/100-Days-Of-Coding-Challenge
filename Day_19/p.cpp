#include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;
    
    for(int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    
    return res;
}
    
int main() {
	
	int arr[]= {2, 8, 0, 4, 8, 6, 5, 5, 4}, n = 9;
	
    cout<<findOdd(arr, n);
    
    return 0;
    
}