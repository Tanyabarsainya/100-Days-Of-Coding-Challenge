#include <iostream>
#include <cmath>
using namespace std;


int maxDiff(int arr[], int n)
{
	int res = arr[1] - arr[0], minVal = arr[0];

	for(int i = 1; i < n; i++)
	{
		
			res = max(res, arr[i] - minVal);
			
			minVal = min(minVal, arr[i]);
	}

	return res;
}



int main() {
	
      int arr[] = {12, 34, 510, 56, 49, 80, 41}, n = 7;

      cout<<maxDiff(arr, n);
    
}