#include <iostream>
#include <cmath>
using namespace std;

int search(int arr[], int n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == x)
			return i;
	}

	return -1;
} 


    
int main() {
	
	int arr[] = {20, 25, 70, 25}, x = 4;

    cout<<search(arr, 5, x); 
     
    return 0;
    
}