#include <iostream>
#include <cmath>
using namespace std;


int findMajority(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int count = 1;

		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] == arr[j])
				count++;
		}

		if(count > n / 2)
			return i;
	}

	return -1;
}



int main() {
	
     int arr[] = {81, 17, 26, 48, 36, 66, 16, 46}, n = 8;

     cout<<findMajority(arr, n);

    return 0;
}